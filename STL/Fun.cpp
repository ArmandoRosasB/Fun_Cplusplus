#include <iostream>
#include <stdlib.h>
#include <iterator>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;


string makeFun(string);
bool isVocal(char);

int main(int argc, char* argv[]){
    ifstream input;
    ofstream output;
    vector<string> fun_sentence;

    if (argc != 3){
        string usage = R"(.\app inputFile.txt outputFile.txt)";
        cout<<"Usage: " << usage;
        exit(1);
    }

    input.open(argv[1]);

    if (!input.is_open()){
        cout<< "Unavailable input file";
        exit(1);
    }

    output.open(argv[2]);

    istream_iterator<string> fun_itr(input);

    while (!input.eof()){
        fun_sentence.push_back(*fun_itr);
        fun_itr++;

        if (input.eof())
            fun_sentence.push_back(*fun_itr);
    }

    transform(fun_sentence.begin(), fun_sentence.end(), ostream_iterator<string>(output," "), makeFun);

    input.close();
    output.close();
    
    system("pause");
    return 0;
}

string makeFun(string funWord){
    string aux = "";

    for(int i = 0; i < funWord.size(); i++){
        if(isVocal(funWord[i]))

            aux += 'i';
        else
            aux += funWord[i];
    
    }

    return aux;
}

bool isVocal(char funLetter){
    return (funLetter == 'A' || funLetter == 'E' || funLetter == 'O' || funLetter == 'U' ||
           funLetter == 'a' || funLetter == 'e' || funLetter == 'o' || funLetter == 'u')? true : false;
}