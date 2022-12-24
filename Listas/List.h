#include <iostream>
#include <string>
#include <sstream>

#ifndef LIST_H
#define LIST_H

typedef unsigned int uint;
template <class T> class List;


//Class Node
template <class T>
class Node {
    friend class List<T>;
    private:
        Node(T, Node<T>*);
        Node(T);
        ~Node();

        T data;
        Node<T> *next;
};

template <class T> 
Node<T> :: Node(T data, Node<T>* next){
    this -> data = data;
    this-> next = next;
}

template <class T> 
Node<T> :: Node(T data){
    this -> data = data;
    this-> next = NULL;
}

template <class T> 
Node<T>::~Node(){}



//Class List
template <class T>
class List {
    private:
        Node<T>* head;
        uint size;

    public:
        List();
        ~List();

        void clear();
        bool empty() const;

        void push_back(T);
        bool search(T) const;
        void removeElement(T);
        T getMax();
        T getMin();
        T getSum();
        T getAverage();

        
        std::string toString() const;
};

template<class T> 
List<T>:: List(){
    head = NULL;
    size = 0;
}

template<class T> 
List<T>:: ~List(){
    clear();
}


template<class T> 
void List<T>:: clear(){
    Node<T>* p, *q;
    p = head;

    while (p != NULL){
        q = p->next;
        delete p;
        p = q;
    }

    head = NULL;
    size = 0;
}

template<class T> 
bool List<T> :: empty() const{
    return size == 0;
}

template <class T>
void List<T>:: push_back(T val){
    Node<T>* newNode;
    Node<T> *p;
    newNode = new Node<T>(val);

    if (empty())
        head = newNode;
    
    p = head;

    while(p->next != NULL)
        p = p->next;
    
    p->next = newNode;
    newNode->next = NULL;
    
    size++;
}

template<class T>
bool List<T>:: search(T val) const{
    Node<T> *p;
    p = head;

    while (p != NULL){
        if (p->data == val)
            return true;
        p = p->next;
    }
    return false;
}

template <class T>
void List<T>:: removeElement(T val){
    Node<T> *p, *q;
    p = head;
    if(empty())
        return;
    if(!search(val))
        return;
    if(head->data == val){
        head = head->next;
        delete p;
        size--;
        return;
    }

    while (p != NULL){
        if (p->data == val)
            break;
        q = p;
        p = p->next;
    }

    q->next = p->next;
    p->next = NULL;
    delete p;
    size--;
}


template <class T>
T List<T>:: getMax(){
    if (empty())
        return -1;

    Node<T> *p;
    T max = head-> data;

    p = head;
    while (p != NULL){
        if (p-> data > max)
            max = p-> data;
        p = p-> next;
    }
    return max;
}

template <class T>
T List<T>:: getMin(){
    if (empty())
        return -1;

    Node<T> *p;
    T min = head-> data;

    p = head;
    while (p != NULL){
        if (p-> data < min)
            min = p-> data;
        p = p-> next;
    }
    return min;
}

template <class T>
T List<T>:: getSum(){
    if(empty()){
        return -1;
    }
    T sum = 0;

    Node<T> *p;
    p = head;
    while(p != NULL){
        sum+= p->data;
        p = p->next;
    }

    return sum;
}

template <class T>
T List<T>:: getAverage(){
    return getSum()/ size;
}


template<class T>
std::string List<T>:: toString() const {
    std::stringstream aux;
    Node<T> *p;
    p = head;
    aux << "[";
    while (p != NULL){
        if (p->next == NULL){
            aux<< p-> data;
            p = p->next;
            continue;
        }
        aux<< p->data << ", ";
        p = p->next;
    }
    aux<< "]\n";

    return aux.str();

}


#endif //LIST_H