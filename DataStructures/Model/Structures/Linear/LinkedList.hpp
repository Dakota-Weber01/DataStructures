//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Weber, Dakota on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "List.hpp"

using namespace std;
#ifndef LinkedList_hpp
#define LinkedList_hpp

{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList(); // Virtual so it can be overridden.
    //Helper methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    //Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
    //Type setAtIndex(int index, Type item);
    //Bool contains(Type item);
};

LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this-> end = nullptr;
    this->size = 0;
}

void LinkedList<Type> :: add(Type item)
{
    LinearNode<Type> * newData = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this->front = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    this->end = newData;
    
    this->size += 1;
}






#endif /* LinkedList_hpp */
