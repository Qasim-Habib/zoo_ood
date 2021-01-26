//
// Created by kasim on 10/21/2020.
//

#ifndef MAMMLSPROJ_WHALE_H
#define MAMMLSPROJ_WHALE_H
#include "mamalSea.h"
class Whale:public MamalSea
{
public:
    Whale(const String& name);
    virtual void printAdditionAttributes();
    virtual bool operator==(const Whale& w1);
    virtual const unsigned char getLifeExpectance()const;
    virtual const unsigned char getSpeed()const;
    virtual  const std::list<Animal::m_Contients>& getContients()const;
    virtual const std::list<String>& getTypesFood()const;
    virtual const unsigned char getDurationPregnancy()const;
    virtual const unsigned int getNumberYoungBorn()const;
    virtual const unsigned int getLowestDepth()const;
    virtual ~Whale();
private:
    static const unsigned char m_speed = 33;
    static const unsigned char m_lifeExpectance = 40;
    static const std::list<Animal::m_Contients>m_WhaleContients;
    static const std::list<String> m_WhaleFoods;
    static const unsigned char m_durationPregnancy = 170;
    static const unsigned int m_numberYoungBorn = 3;
    static const unsigned int m_lowestDepth = 40;

};

#endif //MAMMLSPROJ_WHALE_H
