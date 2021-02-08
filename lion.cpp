//
// Created by kasim on 10/21/2020.
//

#include "lion.h"
#include "animals.h"
const std::list<Animal::m_Contients> Lion::m_lionContients = {Africa, NorthAmerica, Asia};

const std::list<String> Lion::m_LionFoods = {"meet"};

Lion::Lion(const String& name):Animal(name),Mammals(name){}

void Lion::printAdditionAttributes() {
    Mammals::printAdditionAttributes();
}

const unsigned char Lion::getSpeed() const {
    return m_speed;
}

const unsigned char Lion::getLifeExpectance() const {
    return m_lifeExpectance;
}

const std::list<Animal::m_Contients> & Lion::getContients()const {
    return m_lionContients;
}

const std::list<String> & Lion::getTypesFood() const {
    return m_LionFoods;
}

const unsigned char Lion::getDurationPregnancy() const {
    return m_durationPregnancy;
}

const unsigned int Lion::getNumberYoungBorn() const {
    return m_numberYoungBorn;
}

bool Lion::operator==(const Lion &w1) {
    std::list<m_Contients>::const_iterator it;

    std::list<m_Contients>::const_iterator iter;

    const std::list<m_Contients>& contList = getContients();

    const std::list<m_Contients>& contList1 = w1.getContients();

    it = contList.begin();

    iter = contList1.begin();

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

    if(getLifeExpectance() != w1.getLifeExpectance())
        return false;

    if(getNumberYoungBorn() != w1.getNumberYoungBorn() || getSpeed() != w1.getSpeed())
        return false;

    if(getTypesFood() != w1.getTypesFood() || getName() != w1.getName())
        return false;

    if(getSpecies() != w1.getSpecies())
        return false;

    return true;

}
Lion::~Lion(){}
