//
// Created by kasim on 10/21/2020.
//

#ifndef MAMMLSPROJ_BIRDS_H
#define MAMMLSPROJ_BIRDS_H
#include "animals.h"
class Birds: public Animal
{
public:
    Birds(const String& name);
    virtual void printAdditionAttributes() = 0;
    //virtual const String& getSpecies()const=0;
    virtual const unsigned int getTypicalHeight()const = 0;
    virtual const unsigned int getWingSpan()const = 0;
    virtual ~Birds();


};
#endif //MAMMLSPROJ_BIRDS_H
