//
// Created by kasim on 10/21/2020.
//

#include "dogs.h"
#include "animals.h"
const std::list<Animal::m_Contients> Dog::m_DogContients={Asia,Africa,Europe,NorthAmerica,SouthAmerica,Australia};

const std::list<String> Dog::m_DogFoods = {"caned", "wet"};

Dog::Dog(const String& name):Animal(name),Mammals(name){}

void Dog::printAdditionAttributes() {
    Mammals::printAdditionAttributes();
}

const unsigned char Dog::getSpeed() const {
    return m_speed;
}

const unsigned char Dog::getLifeExpectance() const {
    return m_lifeExpectance;
}

const std::list<Animal::m_Contients> & Dog::getContients()const {
    return m_DogContients;
}

const std::list<String> & Dog::getTypesFood() const {
    return m_DogFoods;
}

const unsigned char Dog::getDurationPregnancy() const {
    return m_durationPregnancy;
}

const unsigned int Dog::getNumberYoungBorn() const {
    return m_numberYoungBorn;
}

Dog::~Dog()  {}