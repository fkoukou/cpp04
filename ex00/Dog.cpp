#include"Dog.hpp"
Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}
Dog& Dog::operator=(const Dog &other)
{
    if(this != &other)
    {
            this->type = other.type;
    }
    return *this;
}


Dog::~Dog()
{
    std::cout << "Dog destroyed" << std::endl;
}


void Dog::makeSound() 
{
    std::cout << "Woof Woof" << std::endl;
}

