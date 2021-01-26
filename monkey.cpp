//
// Created by kasim on 10/21/2020.
//

#include "monkey.h"


#include "animals.h"
const std::list<Animal::m_Contients> Monkey::m_MonkeyContients = {Africa, NorthAmerica, Asia, Europe};

const std::list<String> Monkey::m_MonkeyFoods = {"nuts", "fruits"};

Monkey::Monkey(const String& name):Animal(name),Mammals(name){}

void Monkey::printAdditionAttributes() {
    Mammals::printAdditionAttributes();
}

const unsigned char Monkey::getSpeed() const {
    return m_speed;
}

const unsigned char Monkey::getLifeExpectance() const {
    return m_lifeExpectance;
}

const std::list<Animal::m_Contients> & Monkey::getContients()const {
    return m_MonkeyContients;
}

const std::list<String> & Monkey::getTypesFood() const {
    return m_MonkeyFoods;
}

const unsigned char Monkey::getDurationPregnancy() const {
    return m_durationPregnancy;
}

const unsigned int Monkey::getNumberYoungBorn() const {
    return m_numberYoungBorn;
}

Monkey::~Monkey(){}