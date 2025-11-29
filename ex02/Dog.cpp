#include"Dog.hpp"
#include"Brain.hpp"


Dog::Dog():Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    brain = new Brain();
    this->type = "Dog";
}


Dog::Dog(const Dog &other):Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
}


Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}


Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::setIdea(int index, const std::string& idea)
{
    brain->setIdea(index, idea);
}

std::string Dog::getIdesetIdeaa(int index) const
{
    return brain->getIdesetIdeaa(index);
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}

