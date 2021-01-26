//
// Created by kasim on 10/21/2020.
//

#include "shark.h"


#include "animals.h"
const std::list<Animal::m_Contients> Shark::m_SharkContients = {Europe, Asia};

const std::list<String> Shark::m_SharkFoods = {"fish","rays"};

Shark::Shark(const String& name):Animal(name),SeaCreatuers(name){}

void Shark::printAdditionAttributes() {
    SeaCreatuers::printAdditionAttributes();
}

const unsigned char Shark::getSpeed() const {
    return m_speed;
}

const unsigned char Shark::getLifeExpectance() const {
    return m_lifeExpectance;
}

const std::list<Animal::m_Contients> & Shark::getContients()const {
    return m_SharkContients;
}

const std::list<String> & Shark::getTypesFood() const {
    return m_SharkFoods;
}

const unsigned int Shark::getLowestDepth() const {
    return m_lowestDepth;
}

Shark::~Shark(){}