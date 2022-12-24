#include <iostream>
#include <exception>
#include <sstream>

#ifndef BST_H
#define BST_H

template <class T> class BST;

template <class T>
class Node {
    friend class BST<T>;
    private:
        T val;
        Node<T> *left, *right;


        Node(T);
        Node(T, Node<T>*, Node<T>*);

        bool find(T);


        void add(T);



        void toString(std::stringstream&, Node<T>*, int) const;
        void preOrder(std::stringstream&) const;
        void inOrder(std::stringstream&) const;
        void postOrder(std::stringstream&) const;


        void removeChilds();

        void remove(T);
        Node<T>* succesor();

};

template<class T> 
Node<T>::Node(T val) {
    this-> val = val;
    this->left = NULL;
    this->right = NULL;

}


template<class T>
Node<T>:: Node(T val, Node<T>* left, Node<T>* right){
    this->val = val;
    this->left = left;
    this->right = right;
}


template <class T>
bool Node<T>:: find(T target){
    if (val == target)
        return true;
     else{
        if (target > val)
            return (right != NULL && right->find(target));
         else
            return (left != NULL && left->find(target));
    }

}


template<class T>
void Node<T>::add(T value){
    if (value > val){
        if (right != NULL)
            right->add(value);
        else
            right = new Node<T>(value);
    } 
    else {
        if(left != NULL)
            left->add(value);
        else 
            left = new Node<T>(value);
    }
} 


template <class T>
void Node<T>:: toString(std::stringstream& aux, Node<T>* nodo, int cont) const{
    if (nodo == NULL)
        return;
    else{
        toString(aux, nodo->right, cont +  1);
        for(int i = 0; i< cont; i++){
            aux<<"  ";
        }
        aux<<nodo->val<<std::endl;
        toString(aux, nodo->left, cont + 1);
    }
}


template <class T>
void Node<T>:: preOrder(std::stringstream& aux) const{
    aux<< val << " ";
    if(left != NULL){
        left->preOrder(aux);
    }

    if(right != NULL){
        right->preOrder(aux);
    }
}

template<class T>
void Node<T>:: inOrder(std::stringstream& aux) const{
    if(left != NULL){
        left->inOrder(aux);
    }

    aux<< val<<" ";

    if(right != NULL){
        right->inOrder(aux);
    }


}

template <class T>
void Node<T>:: postOrder(std::stringstream& aux) const{
    if(left != NULL)
        left->postOrder(aux);
    if(right != NULL)
        right->postOrder(aux);
    aux<< val <<" ";
}

template <class T>
void Node<T>::removeChilds() {
	if (left != NULL) {
		left->removeChilds();
		delete left;
		left = NULL;
	}

	if (right != NULL) {
		right->removeChilds();
		delete right;
		right = NULL;
	}
}
// =================================================================
// Remove an elemento, putting a suc node in its place.
//
// param @val, the element to be removed.
// =================================================================

template <class T>
void Node<T>::remove(T target) {
	Node<T> * succ, *old;

	if (target < val) {
		if (left != NULL) {
			if (left->val == target) {
				old = left;
				succ = left->succesor();
				if (succ != NULL && (old->left != NULL || old->right != NULL)) {
					succ->left = old->left;
					succ->right = old->right;
				}
				left = succ;
				delete old;
			} else {
				left->remove(target);
			}
		}
	} else if (target > val) {
		if (right != NULL) {
			if (right->val == target) {
				old = right;
				succ = right->succesor();
				if (succ != NULL && (old->left != NULL || old->right != NULL)) {
					succ->left = old->left;
					succ->right = old->right;
				}
				right = succ;
				delete old;
			} else {
				right->remove(target);
			}
		}
	}
}

template <class T>
Node<T>* Node<T>::succesor() {
	Node<T> *le, *ri;

	le = left;
	ri = right;

	if (left == NULL && right == NULL) {
		return NULL;
	}

	if (right == NULL && left != NULL) {
		left = NULL;
		return le;
	}

	if (right != NULL && right->left == NULL) {
		right = ri->right;
		ri->right = NULL;
		return ri;
	}

	if (right != NULL && right->left != NULL) {
		Node<T> *parent, *child;
		parent = right;
		child = right->left;

		while (child->left != NULL) {
			parent = child;
			child = child->left;
		}
		parent->left = child->right;
		child->right = NULL;
		return child;
	}

	return NULL;
}




//BST class
template <class T>
class BST{
    private:
        Node<T>* root;

    public:
        BST();
        ~BST();

        bool empty() const;

        bool find(T);
        void add(T);


        void removeAll();


        std::string toString() const;
        std::string preOrder() const;
        std::string inOrder() const;
        std::string postOrder() const;

        void remove(T);

};

template<class T>
BST<T>:: BST(){
    this->root = NULL;
}

template<class T>
BST<T>:: ~BST(){
   removeAll();
}


template <class T>
bool BST<T>::empty() const{
    return (root == NULL);
}

template <class T>
bool BST<T>:: find(T target){
    if(empty())
        return false;
    else
        return root->find(target);  
}



template <class T>
void BST<T>:: add(T val){
    if(empty()){
        root = new Node<T>(val);
    }
    else{
        if (!root->find(val)) {
			root->add(val);
		}
    }
}



template <class T>
void BST<T>:: removeAll(){
    if (!empty()) {
		root->removeChilds();
		delete root;
		root = NULL;
	}
}

template <class T>
std::string BST<T>:: toString() const{
    std::stringstream aux;
    if (empty()){
        aux<<"Empty tree"<<std::endl;
        return aux.str();
    }
    root->toString(aux, root, 0);
    return aux.str();
}

template <class T>
std::string BST<T>:: preOrder() const{
    std::stringstream aux;
    if(empty()){
        aux<< "Empty tree"<<std::endl;
        return aux.str();
    } else{
        aux<< "[ ";
        root->preOrder(aux);
        aux<< "]";
        return aux.str();

    }
}

template <class T>
std::string BST<T>:: inOrder() const{
    std::stringstream aux;
    if(empty()){
        aux<< "Empty tree"<<std::endl;
        return aux.str();
    } else{
        aux<< "[ ";
        root->inOrder(aux);
        aux<< "]";
        return aux.str();

    }

}

template <class T>
std::string BST<T>:: postOrder() const{
    std::stringstream aux;
    if(empty()){
        aux<< "Empty tree"<<std::endl;
        return aux.str();
    } else{
        aux<< "[ ";
        root->postOrder(aux);
        aux<< "]";
        return aux.str();

    }

}


template <class T>
void BST<T>::remove(T target) {
	if (!empty()) {
		if (target == root->val) {
			Node<T> *succ = root->succesor();
			if (succ != NULL && (root->left != NULL || root->right != NULL)) {
				succ->left = root->left;
				succ->right = root->right;
			}
			delete root;
			root = succ;
		} else {
			root->remove(target);
		}
	}
}

#endif