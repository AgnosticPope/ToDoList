#ifndef LISTITEM_H
#define LISTITEM_H

#include "Node.h"

template<class ItemType>
class ListItem : public Node<ItemType>
{
private:
	int priorityValue;		//indicates item’s priority in the list
	bool completed;		//check mark for if the task has been completed yet

public:
	
	ListItem();
	ListItem(int value, ItemType &desc);
	int getPriorityValue() const;
	bool setPriorityValue(int value);
	bool getCompleted() const;
	bool setCompleted();
	bool operator==(const ListItem &li);
	bool operator<=(const ListItem &li);
	bool operator>=(const ListItem &li);
	bool operator!=(const ListItem &li);

	//inherited from Node
	void setItem(const ItemType& anItem);
	void setNext(Node<ItemType>* nextNodePtr);
	ItemType getItem() const;
	Node<ItemType>* getNext() const;

}; // end ListItem

#endif
