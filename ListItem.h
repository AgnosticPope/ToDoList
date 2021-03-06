#ifndef LISTITEM_H
#define LISTITEM_H

#include "Node.h"

template<class ItemType>
class ListItem : public Node<ItemType>
{
private:
	int priorityValue;		//indicates item�s priority in the list
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

//default constructor
template <class ItemType>
ListItem<ItemType>::ListItem() : completed(0)
{
}//end default constructor

//parameterized constructor
template <class ItemType>
ListItem<ItemType>::ListItem(int value, ItemType &desc) : Node<ItemType>(desc),priorityValue(value),completed(0)
{
}//end constructor

//return the list item�s priority value
template <class ItemType>
int ListItem<ItemType>::getPriorityValue() const
{
    return priorityValue();
}//end getPriorityValue

//update the list item�s priority value
//return true if updated
template <class ItemType>
bool ListItem<ItemType>::setPriorityValue(int value)
{
    priorityValue = value;
}//end setPriorityValue

//return true if the task has been completed
template <class ItemType>
bool ListItem<ItemType>::getCompleted() const
{
    return completed;
}//end getCompleted

//set completed to true if task has been completed.
//return true if updated
template <class ItemType>
bool ListItem<ItemType>::setCompleted()
{
    if (completed == 0)
        completed = true;
    else
        completed = false;
    return true;
}//end setCompleted

//overloads the == operator for priority comparisons
template <class ItemType>
bool ListItem<ItemType>::operator==(const ListItem &li)
{
    bool isEqual = true;

    if (priorityValue != li.getPriorityValue())
            isEqual = false;

    return isEqual;
}//end operator==

//overloads the <= operator for priority comparisions
template <class ItemType>
bool ListItem<ItemType>::operator<=(const ListItem &li)
{
    bool isLessThan = true;

    if (priorityValue > li.getPriorityValue())
        isLessThan = false;

    return isLessThan;
}//end operator <=

//overloads the >= operator for priority comparisions
template <class ItemType>
bool ListItem<ItemType>::operator>=(const ListItem &li)
{
    bool isGreaterThan = true;

    if (priorityValue < li.getPriorityValue())
        isGreaterThan = false;

    return isGreaterThan;
}//end operator>=

//overloads the != operator for priority comparisions
template <class ItemType>
bool ListItem<ItemType>::operator!=(const ListItem &li)
{
    bool isNotEqual = true;

    if (priorityValue == li.getPriorityValue())
        isNotEqual = false;

    return isNotEqual;
}//end operator!=
#endif
