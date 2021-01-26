//
// Created by kasim on 10/21/2020.
//

#include "seaCreatures.h"

SeaCreatuers::SeaCreatuers(const String& name):Animal(name){
}

void SeaCreatuers::printAdditionAttributes()  {
    std::cout<<"the lowest depth they can reach is: "<<getLowestDepth()<<std::endl;
}

SeaCreatuers::~SeaCreatuers() {
    //cout<<"i am seacreature"<<endl;
}