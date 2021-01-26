#ifndef MAMMLSPROJ_ANIMALS_H
#define MAMMLSPROJ_ANIMALS_H

#include "string.h"
#include <list>

class Animal{

public:
    static const String& getContient(size_t index);
    enum m_Contients{Asia,Africa,Europe,NorthAmerica,SouthAmerica,Antractica,Australia};
    Animal(const String& name);
     virtual void print();
	 virtual void printAdditionAttributes() = 0;
    const String& getName()const;
    virtual ~Animal();
    friend std::ostream& operator<<(std::ostream& out, Animal& str);
    virtual const std::string getSpecies()const;
	virtual const unsigned char getLifeExpectance()const = 0;
	virtual const unsigned char getSpeed()const=0;
	virtual  const std::list<m_Contients>& getContients()const = 0;
	virtual  const std::list<String>& getTypesFood() const = 0;

private:
    const String m_name;

};
#endif