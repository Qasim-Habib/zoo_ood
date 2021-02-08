//
// Created by kasim on 10/21/2020.
//

#include "whale.h"
#include "animals.h"

const std::list<Animal::m_Contients> Whale::m_WhaleContients = {Asia, Africa, Europe, NorthAmerica};

const std::list<String> Whale::m_WhaleFoods = {"meat", "fish"};

Whale::Whale(const String& name):Animal(name),MamalSea(name){}

void Whale::printAdditionAttributes() {
    MamalSea::printAdditionAttributes();
}

const unsigned char Whale::getSpeed() const {
    return m_speed;
}

const unsigned char Whale::getLifeExpectance() const {
    return m_lifeExpectance;
}

const std::list<Animal::m_Contients> & Whale::getContients()const {
    return m_WhaleContients;
}

const std::list<String> & Whale::getTypesFood() const {
    return m_WhaleFoods;
}

const unsigned char Whale::getDurationPregnancy() const {
    return m_durationPregnancy;
}

const unsigned int Whale::getNumberYoungBorn() const {
    return m_numberYoungBorn;
}

const unsigned int Whale::getLowestDepth() const {
    return m_lowestDepth;
}

bool Whale::operator==(const Whale &w1) {
    std::list<m_Contients>::const_iterator it;

    std::list<m_Contients>::const_iterator iter;

    const std::list<m_Contients>& contList = getContients();

    const std::list<m_Contients>& contList1 = w1.getContients();

    it=contList.begin();

    iter=contList1.begin();

    while(it != contList.end() && iter != contList1.end())
    {
        if(*it != *iter)
            return false;
        it++;
        iter++;
        if((it == contList.end() && iter != contList1.end()) || (it != contList.end() && iter==contList1.end()))
            return false;
    }
    if(getDurationPregnancy() != w1.getDurationPregnancy())
        return false;

    if(getLifeExpectance() != w1.getLifeExpectance() || getLowestDepth() != w1.getLowestDepth())
        return false;

    if(getNumberYoungBorn() != w1.getNumberYoungBorn() || getSpeed() != w1.getSpeed())
        return false;

    if(getTypesFood() != w1.getTypesFood() || getName() != w1.getName())
        return false;

    if(getSpecies() != w1.getSpecies()){
        return false;}

        return true;

}

Whale::~Whale()  {}
