#include"Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
}
Animal:: Animal(const Animal& other)
{
    this->type = other.type;
}

Animal& Animal::operator=(const Animal &other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "destroy" << std::endl;
}


std::string Animal::getType()
{
    return type;
}

