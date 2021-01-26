//
// Created by kasim on 10/21/2020.
//

#ifndef MAMMLSPROJ_MONKEY_H
#define MAMMLSPROJ_MONKEY_H
#include "mamals.h"
class Monkey:public Mammals
{
public:
    Monkey(const String& name);
    virtual void printAdditionAttributes();
    virtual const unsigned char getLifeExpectance()const;
    virtual const unsigned char getSpeed()const;
    virtual  const std::list<Animal::m_Contients>& getContients()const;
    virtual const std::list<String>& getTypesFood()const;
    virtual const unsigned char getDurationPregnancy()const;
    virtual const unsigned int getNumberYoungBorn()const;
    virtual ~Monkey();
private:
    static const unsigned char m_speed=100;
    static const unsigned char m_lifeExpectance=20;
    static const std::list<Animal::m_Contients>m_MonkeyContients;
    static const std::list<String> m_MonkeyFoods;
    static const unsigned char m_durationPregnancy=95;
    static const unsigned int m_numberYoungBorn=3;

};
/*const unsigned char Monkey::m_speed=100;
const unsigned char Monkey::m_lifeExpectance=20;
const std::list<Animal::m_Contients> Monkey::m_MonkeyContients={Africa,NorthAmerica,Asia,Europe};
const std::list<String> Monkey::m_MonkeyFoods={"nuts","fruits"};
const unsigned char Monkey::m_durationPregnancy=95;
const unsigned int Monkey::m_numberYoungBorn=3;*/
#endif //MAMMLSPROJ_MONKEY_H
