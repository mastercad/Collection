#ifndef __NODE_TPP__
#define __NODE_TPP__

#include <string>
#include "Entity.h"

template<class T> class Node {
public:
  
  void setNext(Node*);
  
  Node* getNext(void);
  
  void setPrev(Node*);
  
  Node* getPrev(void);
  
  void setData(T);
  
  T& getData(void);
  
  std::string getStringKey();
  
  int getIntKey();
  
  void setKey(const std::string);
  
  void setKey(int);
  
  Node* add(Node*);
  
  Node();
  
  ~Node();

private:
  T _mData;
  int _iKey;
  std::string _sKey;
  Node *_pNext;
  Node *_pPrev;
};

template<typename T>void Node<T>::setNext(Node* pNextNode) {
  _pNext = pNextNode;
}

template<typename T>Node<T>* Node<T>::getNext() {
  return _pNext;
}

template<typename T>void Node<T>::setPrev(Node* pPrevNode) {
  _pPrev = pPrevNode;
}

template<typename T>Node<T>* Node<T>::getPrev() {
  return _pPrev;
}

template<typename T>void Node<T>::setData(T mData) {
  _mData = mData;
}

template<typename T>T& Node<T>::getData() {
  return _mData;
}

template<typename T>void Node<T>::setKey(const std::string sKey) {
  _sKey = sKey;
}

template<typename T>void Node<T>::setKey(int iKey) {
  _iKey = iKey;
}

template<typename T>std::string Node<T>::getStringKey() {
  return _sKey;
}

template<typename T>int Node<T>::getIntKey() {
  return _iKey;
}

template<typename T>Node<T>::Node() {
}

template<typename T>Node<T>::~Node() {
}
#endif
