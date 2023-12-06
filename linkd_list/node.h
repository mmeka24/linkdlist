#ifndef NODE_H
#define NODE_H


#include <iostream>
#include "student.h"

using namespace std;

class Node {
public:
    Node(Student* myStudent);
    ~Node();
    Student* getStudent() const;
    void setNext(Node* next1);
    Node* getNext() const;

private:
    Student* student;
    Node* next;
};

#endif
