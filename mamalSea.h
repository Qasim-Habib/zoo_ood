//
// Created by kasim on 10/21/2020.
//

#ifndef MAMMLSPROJ_MAMALSEA_H
#define MAMMLSPROJ_MAMALSEA_H
#include "seaCreatures.h"
#include "mamals.h"
class MamalSea: public SeaCreatuers, public Mammals
{
public:
    MamalSea(const String& name);
    virtual void printAdditionAttributes();
    virtual ~MamalSea();
};
#endif //MAMMLSPROJ_MAMALSEA_H
