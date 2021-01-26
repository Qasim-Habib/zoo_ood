//
// Created by kasim on 10/21/2020.
//

#include "snowyOwl.h"
#include "animals.h"
const std::list<Animal::m_Contients> SnowyOwl::m_SnowyContients = {Antractica};

const std::list<String> SnowyOwl::m_SnowyFoods = {"fish"};

SnowyOwl::SnowyOwl(const String& name):Birds(name){}

void SnowyOwl::printAdditionAttributes() {
    Birds::printAdditionAttributes();
}

const unsigned char SnowyOwl::getSpeed() const {
    return m_speed;
}

const unsigned char SnowyOwl::getLifeExpectance() const {
    return m_lifeExpectance;
}

const std::list<Animal::m_Contients> & SnowyOwl::getContients()const {
    return m_SnowyContients;
}

const std::list<String> & SnowyOwl::getTypesFood() const {
    return m_SnowyFoods;
}

const unsigned int SnowyOwl::getTypicalHeight() const  {
    return m_typicalHeight ;
}

const unsigned int SnowyOwl::getWingSpan() const  {
    return m_wingSpan;
}

SnowyOwl::~SnowyOwl(){}