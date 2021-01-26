//
// Created by kasim on 10/21/2020.
//

#ifndef MAMMLSPROJ_MAMALS_H
#define MAMMLSPROJ_MAMALS_H
#include "animals.h"
class Mammals: virtual public Animal
{
public:
    Mammals(const String& name );
    virtual void printAdditionAttributes();
    virtual const unsigned char getDurationPregnancy()const = 0;
    virtual const unsigned int getNumberYoungBorn()const = 0;
    virtual ~Mammals();
};
#endif //MAMMLSPROJ_MAMALS_H
