#include "Cat.hpp"

Cat::Cat():Animal()
{
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
    brain = new Brain();
}


Cat::Cat(const Cat &other):Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
}


Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}


Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}


void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}


