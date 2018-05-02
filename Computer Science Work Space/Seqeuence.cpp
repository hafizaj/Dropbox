// implementation file
//
//  Sequence.cpp
//  nodeStruct
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 4/21/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "Sequence.h"

Sequence::Sequence() : m_size(0)
{
    head = nullptr;
    tail = nullptr;
    
}

Sequence::~Sequence()
{
    Node* tmpPtr;
    //what if you have only zero elements in the sequence
    if(size()==0) {}
    else
    {
        while(head != nullptr)
        {
            tmpPtr = head;
            if(head->next != nullptr)
            {
                head = head-> next;
            }
            
            
            delete tmpPtr;
        }
    }
    

}

Sequence::Sequence(const Sequence& otherList) 
{
    head = nullptr;
    copyList(otherList);
}

Sequence& Sequence::operator=(const Sequence& rhs)
{
    if (this != &rhs) //avoid self-copy
    {
        copyList(rhs);
    }
    return *this;
}

bool Sequence::empty() const
{
    return(m_size == 0);
}

int Sequence::size() const
{
    return m_size;
}
bool Sequence::insert(int pos, const ItemType& value)
{
    
}

int Sequence::insert(const ItemType& value)
{
    
}
bool Sequence::erase(int pos)
{
    
}
int Sequence::remove(const ItemType& value){
    
}
bool Sequence::get(int pos, ItemType& value) const
{
    
}
bool Sequence::set(int pos, const ItemType& value){
    
}

int Sequence::find(const ItemType& value) const{
    int count = 0;
    Node* p;
    for(p = head; p!= nullptr && p->data != value ; p=p->next,count++)
    {
    }
    if (p!=nullptr)
    {
        return count;
    }
    else
        return -1;
}

void Sequence::swap(Sequence& other){
    
}
//Auxilliary Functions
void Sequence::dump()
{
    for(Node* p = head; p!=nullptr; p=p->next)
    {
        std::cout << p->data << std::endl;
    }
}

void Sequence::copyList(const Sequence& otherList)
{
    Node* newNode; //pointer to create a node
    Node* current; //pointer to traverse the list
    if (head != nullptr) //if the list is nonempty, make it empty
        {
            Node *temp;
            while (head != nullptr) //while there are nodes in the list
            {
                temp = head; //set temp to the current node
                head = head->next; //advance first to the next node
                delete temp; //deallocate the memory occupied by temp
            }
            tail = nullptr; //initialize last to nullptr; first has already
            //been set to nullptr by the while loop
            m_size = 0;
        }
    if (otherList.head == nullptr) //otherList is empty
    {
        head = nullptr;
        head = nullptr;
        m_size = 0;
    }
    else
    {
        current = otherList.head; //current points to the
        //list to be copied
        m_size = otherList.m_size;
        //copy the first node
        head = new Node; //create the node
        head->data = current->data; //copy the info
        head->next = nullptr; //set the link field of
        //the node to nullptr
        tail = head; //make last point to the
        //first node
        current = current->next; //make current point
        //copy the remaining list
        while (current != nullptr)
        {
            newNode = new Node; //create a node
            newNode->data = current->data; //copy the info
            newNode->next = nullptr; //set the link of
            //newNode to nullptr
            tail->next = newNode; //attach newNode after last
            tail = newNode; //make last point to
            //the actual last node
            current = current->next; //make current point
            //to the next node
        }//end while
    }//end else
}//end copyList


void remove(int val, Node* head) {
  if (head == nullptr) {
    return;
  } else if (head->m_value == val) {
    head->m_prev->m_next = head->m_next;
    head->m_next->m_prev = head->m_prev;
    delete head;
    return;
  }
  
  Node* p = head->m_next;
  for (; p != head; p = p->m_next) {  // for a circular linked list
    if (p == nullptr) {
      return;
    } else if (p->m_value == val) {
      p->m_prev->m_next = p->m_next;
      p->m_next->m_prev = p->m_prev;
      delete p;
      return;
    }
  }
}

void insertValue(Node* &head, int value, int position) {
  if (head == nullptr)
    return;  // Check if list is empty
  if (position < 0)
    return;  // Check if position is negative
  
  if (position == 0) {  // If it just wants us to insert at head of the list
    Node *insert = new Node;
    insert->value = value;
    insert->next = head;
    insert->prev = NULL;
    head->prev = insert;
    head = insert;
    return;
  }
  
  // Iterate through list until position is reached
  Node* ptr = head;
  int count = 0;
  while (ptr != nullptr && count != position) {  
    // Go until at desired position OR hit end of list
    ptr = ptr->next;  // Set to next position
    count++;
  }
  if (ptr == nullptr) {  // If true, then we hit the end of the list
    return;
  } else {  // If here, then the loop broke because we are at the correct position
    Node* insert = new Node;
    insert->value = value;
    insert->next = ptr;
    insert->prev = ptr->prev;
    ptr->prev->next = insert;
    ptr->prev = insert;
  }
}

//Backup
//{
//    int keepPos = find(value);
//    if (keepPos == -1)
//        return 0;
//    int count = 1;
//    for (Node* examinePos = keepPos+1; examinePos < size(); examinePos++)
//    {
//        if (m_data[examinePos] == value)
//            count++;
//        else
//        {
//            m_data[keepPos] = m_data[examinePos];
//            keepPos++;
//        }
//    }
//    m_size -= count;
//    return count;
//}
//{
//    Node *current; //pointer to traverse the list
//    Node *trailCurrent; //pointer just before current
//    int counter =0;
//    bool found;
//    if (head == nullptr) //Case 1 : List is empty and cannot delete from it.
//        std::cout << "Cannot delete from an empty list."
//        << std::endl;
//    else
//        {
//            if (head->data == value) //Case 2
//            {
//                current = head;
//                head = head->next;
//                m_size--;
//                if (head == nullptr) //the list has only one node
//                    tail = nullptr;
//                delete current;
//            }
//            else //search the list for the node with the given info
//            {
//                found = false;
//                trailCurrent = head; //set trailCurrent to point
//                //to the first node
//                current = head->next; //set current to point to
//                //the second node
//                while (current != nullptr && !found)
//                {
//                    if (current->data != value)
//                    {
//                        trailCurrent = current;
//                        current = current-> next;
//                    }
//                    else
//                        found = true;
//                }//end while
//                if (found) //Case 3; if found, delete the node
//                {
//                    trailCurrent->next = current->next;
//                    m_size--;
//                    if (tail == current) //node to be deleted
//                        //was the last node
//                        tail = trailCurrent; //update the value
//                    //of last
//                    delete current; //delete the node from the list
//                }
//                else
//                    std::cout << "The item to be deleted is not in "
//                    << "the list." << std::endl;
//            }//end else
//        }//end else
//}//end deleteNode


