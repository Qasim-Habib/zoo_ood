//
// Created by kasim on 10/21/2020.
//

#include "mamalSea.h"

MamalSea::MamalSea(const String& name):Animal(name),SeaCreatuers(name),Mammals(name)
{

}

MamalSea::~MamalSea() {
    //cout<<"i am mamal and sea creature"<<endl;
}

void MamalSea::printAdditionAttributes()  {
    Mammals::printAdditionAttributes();
    SeaCreatuers::printAdditionAttributes();

}