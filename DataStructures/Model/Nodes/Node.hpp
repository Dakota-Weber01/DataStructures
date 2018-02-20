//
//  Node.hpp
//  DataStructures
//
//  Created by Weber, Dakota on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

/**
 Class template header
 */

template <class Type>
class Node

{
    //This section is avalible to ALL the subclasses of Node
    
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

/**
 Class implementation section
 */
template <class Type>
Node<Type> :: Node()
{
    //Needed for default constructor compilation
    //Since when we create a structure it does not have an item to store yet.
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}
template <class Type>
Type Node<Type> :: getData()
{
    return data;
}











#endif /* Node_hpp */
