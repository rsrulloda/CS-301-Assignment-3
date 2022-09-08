//
// Created by Alexandro I. Milanez on 9/8/22.
//
#ifdef Itemtype_cpp
#define Itemtype_cpp

#include "ItemType.h"
{
    value = 0;
};
relationType ItemType::CompareTo(ItemType item)const
{
    if (value<item.value) return less;
    else
        if (value > item.value)
            return big;
        else
            return same;
}
void ItemType::Print(ostream& out)const
{
    out<<value;
}
void Itemtype::initialize(int number)
{
    void = number;
}
#endif

