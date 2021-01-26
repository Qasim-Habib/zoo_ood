//
// Created by kasim on 10/21/2020.
//

#ifndef MAMMLSPROJ_CLOWNFISH_H
#define MAMMLSPROJ_CLOWNFISH_H
#include "seaCreatures.h"
class ClownFish:public SeaCreatuers
{
public:
    ClownFish(const String& name);
    virtual void printAdditionAttributes();
    virtual const unsigned char getLifeExpectance()const;
    virtual const unsigned char getSpeed()const;
    virtual  const std::list<Animal::m_Contients>& getContients()const;
    virtual const std::list<String>& getTypesFood()const;
    virtual const unsigned int getLowestDepth()const;
    virtual ~ClownFish();
private:
    static const unsigned char m_speed = 60;
    static const unsigned char m_lifeExpectance = 12;
    static const std::list<Animal::m_Contients>m_ClownFishContients;
    static const std::list<String> m_ClownFishFoods;
    static const unsigned int m_lowestDepth = 90;


};

#endif //MAMMLSPROJ_CLOWNFISH_H
