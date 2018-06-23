
/** @file Node.h
Listing 4-1 */
#ifndef NODE_
#define NODE_

template<class ItemType>
class Node
{
protected:
	ItemType        description; // A data item
    Node<ItemType>* next=nullptr; // Pointer to next node

public:
	Node();
	Node(const ItemType& desc);
	Node(const ItemType& desc, Node<ItemType>* nextNodePtr);
	void setDescription(const ItemType& desc);
	void setNext(Node<ItemType>* nextNodePtr);
	ItemType getDescription() const;
	Node<ItemType>* getNext() const;
}; // end Node


//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** @file Node.cpp
Listing 4-2 */

#include "Node.h"

template<class ItemType>
Node<ItemType>::Node() : next(nullptr)
{
} // end default constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& desc) : description(desc), next(nullptr)
{
} // end constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& desc, Node<ItemType>* nextNodePtr) :
    description(desc), next(nextNodePtr)
{
} // end constructor

template<class ItemType>
void Node<ItemType>::setDescription(const ItemType& desc)
{
    description = desc;
} // end setItem

template<class ItemType>
void Node<ItemType>::setNext(Node<ItemType>* nextNodePtr)
{
    next = nextNodePtr;
} // end setNext

template<class ItemType>
ItemType Node<ItemType>::getDescription() const
{
    return description;
} // end getItem

template<class ItemType>
Node<ItemType>* Node<ItemType>::getNext() const
{
    return next;
} // end getNext

#endif
