//
// Created by kasim on 10/21/2020.
//

#include "birds.h"

Birds::Birds(const String& name):Animal(name)

{

}

void Birds::printAdditionAttributes()  {
    std::cout<<"the typical height they can reach is: "<<getTypicalHeight()<<std::endl;
    std::cout<<"their wing-span is: "<<getWingSpan()<<std::endl;
}










Birds::~Birds() {
    //cout<<"i am Birds"<<endl;
}