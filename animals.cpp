#include "animals.h"
#include "myException.h"

 const String& Animal::getContient(size_t index)
{
    static String contents[7] = {"Asia","Africa","Europe","NorthAmerica","SouthAmerica","Antractica","Australia"};
    return contents[index];
}

Animal::Animal(const String& name):m_name(name){


    if(name == "")
        throw MyException("the name should not be NULL ");

}

const String & Animal::getName() const {
    return m_name;
}

const std::string Animal::getSpecies()const
{
    const std::string temp = typeid(*this).name();
    const char* t = temp.c_str();
    t++;
    std::string new_t(t);
    return new_t;
}

void Animal::print()
{
    std::cout<<"the name is: "<<m_name<<std::endl;

   std::cout<<"the species is: "<<getSpecies()<<std::endl;

    std::cout<<"the life expectance is: "<<int(getLifeExpectance())<<std::endl;

    std::list<m_Contients>::const_iterator it;

    std::list<String>::const_iterator iter;

     const std::list<m_Contients>& contList = getContients();

     const std::list<String>& foodList = getTypesFood();

    for ( it = contList.begin(); it != contList.end(); ++it) {
        std::cout<<"this animal can live in "<<getContient(*it)<<std::endl;
    }

    for ( iter = foodList.begin(); iter != foodList.end(); ++iter) {
        std::cout<<"this animal can eat "<<*iter<<std::endl;
    }

    std::cout<<"the speed of this animal is : "<<int(getSpeed())<<std::endl;
    printAdditionAttributes();
}
Animal::~Animal() {
    // cout<<"i am animal"<<endl;
}

std::ostream& operator<<(std::ostream& out, Animal& str)
{
    str.print();
    //str.printAdditionAttributes();
    return out;
}