//
// Created by kasim on 10/20/2020.
//

#include "zoo.h"
#include "lion.h"
#include "monkey.h"
#include "goose.h"
#include "snowyOwl.h"
#include "shark.h"
#include "whale.h"
#include "dogs.h"
#include "clownFish.h"
void Zoo::remove_animal(const Animal *new_animal) {
    for(size_t i = 0; i < m_zooAnimal.size(); ++i){
        if(new_animal == m_zooAnimal[i]) {
            m_zooAnimal.erase(m_zooAnimal.cbegin() + i);
            break;
        }
    }
    throw std::invalid_argument("the animal not found in the zoo !!!");
}
void Zoo::add_animal(const Animal* new_animal) {
    m_zooAnimal.push_back(new_animal);
}
Zoo::Zoo() {
}
void Zoo::printAnimals()
{
    std::vector<Animal*>::iterator it;
    for ( it=m_zooAnimal.begin(); it != m_zooAnimal.end(); ++it) {
        (*it)->print();
    }
}
Zoo::~Zoo() {

}