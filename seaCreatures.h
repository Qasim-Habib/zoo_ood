//
// Created by kasim on 10/21/2020.
//

#ifndef MAMMLSPROJ_SEACREATURES_H
#define MAMMLSPROJ_SEACREATURES_H
#include "animals.h"

class SeaCreatuers:virtual public Animal
{
public:
    SeaCreatuers(const String& name);
    virtual void printAdditionAttributes()=0;
    virtual const unsigned int getLowestDepth()const=0;
    virtual ~SeaCreatuers();

};
#endif //MAMMLSPROJ_SEACREATURES_H
