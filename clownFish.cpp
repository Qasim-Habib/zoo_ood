//
// Created by kasim on 10/21/2020.
//

#include "clownFish.h"
#include "animals.h"

const std::list<Animal::m_Contients> ClownFish::m_ClownFishContients = {Europe, Africa};

const std::list<String> ClownFish::m_ClownFishFoods = {"algae", "plankton", "mollusks"};

ClownFish::ClownFish(const String& name):Animal(name),SeaCreatuers(name){}

void ClownFish::printAdditionAttributes() {
    SeaCreatuers::printAdditionAttributes();
}

const unsigned char ClownFish::getSpeed() const {
    return m_speed;
}


const unsigned char ClownFish::getLifeExpectance() const {
    return m_lifeExpectance;
}

const std::list<Animal::m_Contients> & ClownFish::getContients()const {
    return m_ClownFishContients;
}

const std::list<String> & ClownFish::getTypesFood() const {
    return m_ClownFishFoods;
}

const unsigned int ClownFish::getLowestDepth() const {
    return m_lowestDepth;
}

ClownFish::~ClownFish(){}