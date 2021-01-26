//
// Created by kasim on 10/21/2020.
//

#ifndef MAMMLSPROJ_DOGS_H
#define MAMMLSPROJ_DOGS_H
#include "mamals.h"
class Dog:public Mammals
{
public:
    Dog(const String& name);
    virtual void printAdditionAttributes();
    virtual const unsigned char getLifeExpectance()const;
    virtual const unsigned char getSpeed()const;
    virtual  const std::list<Animal::m_Contients>& getContients()const;
    virtual const std::list<String>& getTypesFood()const;
    virtual const unsigned char getDurationPregnancy()const;
    virtual const unsigned int getNumberYoungBorn()const;
    virtual ~Dog();
private:
    static const unsigned char m_speed =100;
    static const unsigned char m_lifeExpectance = 20;
    static const std::list<Animal::m_Contients>m_DogContients;
    static const std::list<String> m_DogFoods;
    static const unsigned char m_durationPregnancy = 200;
    static const unsigned int m_numberYoungBorn = 5;

};

#endif //MAMMLSPROJ_DOGS_H
