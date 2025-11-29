#include"Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "constructor animal" << std::endl;
}
Animal:: Animal(const Animal& other)
{
    this->type = other.type;
    std::cout << "copy constructor animal" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    std::cout << "assignement operator animal" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "destroy" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

