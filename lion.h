//
// Created by kasim on 10/21/2020.
//

#ifndef MAMMLSPROJ_LION_H
#define MAMMLSPROJ_LION_H
#include "mamals.h"

class Lion:public Mammals
{
public:
    Lion(const String& name);
    virtual void printAdditionAttributes();
    virtual const unsigned char getLifeExpectance()const;
    virtual const unsigned char getSpeed()const;
    virtual  const std::list<Animal::m_Contients>& getContients()const;
    virtual const std::list<String>& getTypesFood()const;
    virtual bool operator==(const Lion& w1);
    virtual const unsigned char getDurationPregnancy()const;
    virtual const unsigned int getNumberYoungBorn()const;
    virtual ~Lion();
private:
    static const unsigned char m_speed = 100;
    static const unsigned char m_lifeExpectance = 20;
    static const std::list<Animal::m_Contients>m_lionContients;
    static const std::list<String> m_LionFoods;
    static const unsigned char m_durationPregnancy = 80;
    static const unsigned int m_numberYoungBorn = 4;

};
#endif //MAMMLSPROJ_LION_H
