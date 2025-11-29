#include "Cat.hpp"
Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other) 
{
    this->type = other.type;
    std::cout << "Cat copy constructed" << std::endl;
}


Cat& Cat::operator=(const Cat &other)
{
    if(this != &other)
    {
            this->type = other.type;
    }
    std::cout << "Cat assigned" << std::endl;
    return *this;
}



Cat::~Cat()
{
    std::cout << "Cat destroyed" << std::endl;
}



void Cat::makeSound()
{
    std::cout << "Meow Meow" << std::endl;
}   
