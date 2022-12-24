#include <iostream>
#include <string>
#include <sstream>

#ifndef ORDERED_LIST_H
#define ORDERED_LIST_H

typedef unsigned int uint;
template <class T> class ordered_list;


//Class Node
template <class T>
class Node {
    friend class ordered_list<T>;
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



//Class ordered_list
template <class T>
class ordered_list {
    private:
        Node<T>* head;
        uint size;

    public:
        ordered_list();
        ~ordered_list();

        void clear();
        bool empty() const;

        void insert(T);
        bool search(T) const;
        void removeElement(T);

        
        std::string toString() const;
};

template<class T> 
ordered_list<T>:: ordered_list(){
    head = NULL;
    size = 0;
}

template<class T> 
ordered_list<T>:: ~ordered_list(){
    clear();
}


template<class T> 
void ordered_list<T>:: clear(){
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
bool ordered_list<T> :: empty() const{
    return size == 0;
}

template <class T>
void ordered_list<T>:: insert(T val){
    Node<T>* newNode;
    Node<T> *p, *q;
    newNode = new Node<T>(val);
    p = head;

    while((p != NULL) && (val > p->data)){
        q = p;
        p = p->next;
    }  
    if (p == head)
        head = newNode;
    else
        q->next = newNode;

    newNode->next = p;
    
    size++;

}

template<class T>
bool ordered_list<T>:: search(T val) const{
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
void ordered_list<T>:: removeElement(T val){
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



template<class T>
std::string ordered_list<T>:: toString() const {
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


#endif //ORDERED_LIST_H