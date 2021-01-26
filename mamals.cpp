//
// Created by kasim on 10/21/2020.
//

#include "mamals.h"



Mammals::Mammals(const String& name):Animal(name)

{

}


void Mammals::printAdditionAttributes()  {
    std::cout<<"the duration of the pregnancy is: "<<int(getDurationPregnancy())<<std::endl;
    std::cout<<"the number of young born in each litter is: "<<int(getNumberYoungBorn())<<std::endl;
}

Mammals::~Mammals() {
    //cout<<"i am mamal"<<endl;
}