//
// Created by kasim on 10/21/2020.
//

#ifndef MAMMLSPROJ_GOOSE_H
#define MAMMLSPROJ_GOOSE_H
#include "birds.h"

class Goose:public Birds
{
public:
    Goose(const String& name);
    virtual void printAdditionAttributes();
    virtual const unsigned char getLifeExpectance()const;
    virtual const unsigned char getSpeed()const;
    virtual  const std::list<Animal::m_Contients>& getContients()const;
    virtual const std::list<String>& getTypesFood()const;
    virtual const unsigned int getTypicalHeight()const;
    virtual const unsigned int getWingSpan()const;
    virtual ~Goose();
private:
    static const unsigned char m_speed = 70;
    static const unsigned char m_lifeExpectance = 15;
    static const std::list<Animal::m_Contients>m_GooseContients;
    static const std::list<String> m_GooseFoods;
    static const unsigned int m_typicalHeight = 50;
    static const unsigned int m_wingSpan = 3;

};

#endif //MAMMLSPROJ_GOOSE_H
