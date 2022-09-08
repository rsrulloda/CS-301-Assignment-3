//
// Created by Alexandro I. Milanez on 9/8/22.
//

#ifndef CS_301_ASSIGNMENT_3_UNSORTEDLIST_H
#define CS_301_ASSIGNMENT_3_UNSORTEDLIST_H

#endif //CS_301_ASSIGNMENT_3_UNSORTEDLIST_H

#include "ItemType.h"
#include <iostream>

const int MAX_ITEMS = 5;
class UnsortedType
{
private;
int length;
ItemType info[MAX_ITEMS];
int currentPos;
public:
    UnsortedType();
    void makeEmpty();
    bool isFull()const;
    int getLength()const;
    ItemType getItem(ItemType,bool &);
    void putItem(ItemType);
    void resetList();
    ItemType getNextItem();
    void PrintList(ofstream&, UnsortedType&);
};
#endif
