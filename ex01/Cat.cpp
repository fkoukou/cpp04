#include "Cat.hpp"
Cat::Cat() : Animal("Cat")
{
}

Cat::Cat(const std::string name) : Animal(name)
{
}

Cat::Cat(const Cat &other)
{
    this->type = other.type;
}


Cat& Cat::operator=(const Cat &other)
{
    if(this != &other)
    {
            this->type = other.type;
    }
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
