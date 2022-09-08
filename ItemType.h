//
// Created by Alexandro I. Milanez on 9/8/22.
//

#ifndef CS_301_ASSIGNMENT_3_ITEMTYPE_H
#define CS_301_ASSIGNMENT_3_ITEMTYPE_H

#endif //CS_301_ASSIGNMENT_3_ITEMTYPE_H

#include <iostream>
#include <fstream>
using namespace std;
enum relationType (less, big, same);

class ItemType
{
    private;
    int value;
    public;
    ItemType();
    relationType CompareTo(ItemType)const;
    void Print(ofstream&)const;
    void Initialize(int);
};
#endif
