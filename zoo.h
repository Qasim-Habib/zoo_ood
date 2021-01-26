//
// Created by kasim on 10/20/2020.
//

#ifndef MAMMLSPROJ_ZOO_H
#define MAMMLSPROJ_ZOO_H
#include <vector>
#include "animals.h"
class Zoo{
public:
    Zoo();
    void printAnimals();
    void add_animal(const Animal* new_animal);
    void remove_animal(const Animal* new_animal);
    ~Zoo();
private:
     std::vector<Animal*> m_zooAnimal;
};
#endif //MAMMLSPROJ_ZOO_H
