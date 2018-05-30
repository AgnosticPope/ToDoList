
/** @file Node.h
Listing 4-1 */
#ifndef NODE_
#define NODE_

template<class ItemType>
class Node
{
private:
	ItemType        description; // A data item
	Node<ItemType>* next; // Pointer to next node

public:
	Node();
	Node(const ItemType& desc);
	Node(const ItemType& desc, Node<ItemType>* nextNodePtr);
	void setDescription(const ItemType& desc);
	void setNext(Node<ItemType>* nextNodePtr);
	ItemType getDescription() const;
	Node<ItemType>* getNext() const;
}; // end Node

#endif
