//
// Created by kasim on 10/21/2020.
//

#ifndef MAMMLSPROJ_SHARK_H
#define MAMMLSPROJ_SHARK_H
#include "seaCreatures.h"
class Shark:public SeaCreatuers
{
public:
    Shark(const String& name);
    virtual void printAdditionAttributes();
    virtual const unsigned char getLifeExpectance()const;
    virtual const unsigned char getSpeed()const;
    virtual  const std::list<Animal::m_Contients>& getContients()const;
    virtual const std::list<String>& getTypesFood()const;
    virtual const unsigned int getLowestDepth()const;
    virtual ~Shark();
private:
    static const unsigned char m_speed=55;
    static const unsigned char m_lifeExpectance=25;
    static const std::list<Animal::m_Contients>m_SharkContients;
    static const std::list<String> m_SharkFoods;
    static const unsigned int m_lowestDepth=170;


};
/*const unsigned char Shark::m_speed=55;
const unsigned char Shark::m_lifeExpectance=25;
const std::list<Animal::m_Contients> Shark::m_SharkContients={Europe,Asia};
const std::list<String> Shark::m_SharkFoods={"fish","rays"};
const unsigned int Shark::m_lowestDepth=170;*/
#endif //MAMMLSPROJ_SHARK_H
