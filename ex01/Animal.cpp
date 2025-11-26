#include"Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
}
Animal:: Animal(const std::string& type)
{
    this->type = type;
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

void Animal::makeSound()
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

