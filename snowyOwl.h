//
// Created by kasim on 10/21/2020.
//

#ifndef MAMMLSPROJ_SNOWYOWL_H
#define MAMMLSPROJ_SNOWYOWL_H
#include "birds.h"
class SnowyOwl:public Birds
{
public:
    SnowyOwl(const String& name);
    virtual void printAdditionAttributes();
    virtual const unsigned char getLifeExpectance()const;
    virtual const unsigned char getSpeed()const;
    virtual  const std::list<Animal::m_Contients>& getContients()const;
    virtual const std::list<String>& getTypesFood()const;
    virtual const unsigned int getTypicalHeight()const;
    virtual const unsigned int getWingSpan()const;
    virtual ~SnowyOwl();
private:
    static const unsigned char m_speed = 45;
    static const unsigned char m_lifeExpectance = 9;
    static const std::list<Animal::m_Contients>m_SnowyContients;
    static const std::list<String> m_SnowyFoods;
    static const unsigned int m_typicalHeight = 250;
    static const unsigned int m_wingSpan = 8;

};

#endif //MAMMLSPROJ_SNOWYOWL_H
