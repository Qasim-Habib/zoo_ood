//
// Created by kasim on 10/21/2020.
//

#include "goose.h"


#include "animals.h"
const std::list<Animal::m_Contients> Goose::m_GooseContients = {Australia, SouthAmerica};

const std::list<String> Goose::m_GooseFoods = {"roots", "shoots", "stems"};

Goose::Goose(const String& name):Birds(name){}

void Goose::printAdditionAttributes() {
    Birds::printAdditionAttributes();
}

const unsigned char Goose::getSpeed() const {
    return m_speed;
}

const unsigned char Goose::getLifeExpectance() const {
    return m_lifeExpectance;
}

const std::list<Animal::m_Contients> & Goose::getContients()const {
    return m_GooseContients;
}

const std::list<String> & Goose::getTypesFood() const {
    return m_GooseFoods;
}

const unsigned int Goose::getTypicalHeight() const  {
    return m_typicalHeight ;
}

 const unsigned int Goose::getWingSpan() const  {
    return m_wingSpan;
}

Goose::~Goose(){}