#include"Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "construct Animal" << std::endl;
}
Animal:: Animal(const Animal& other)
{
    this->type = other.type;
    std::cout << "copy construct Animal" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    std::cout << "assign Animal" << std::endl;
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

