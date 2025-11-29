#include"Dog.hpp"
#include"Brain.hpp"


Dog::Dog():Animal()
{
    this->type = "Dog";
    brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}



Dog::Dog(const Dog &other):Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called" << std::endl;
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
    return brain->getIdea(index);
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}

