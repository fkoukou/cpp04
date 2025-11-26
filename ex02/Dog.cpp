#include"Dog.hpp"
#include"Brain.hpp"
Dog::Dog() : Animal("Dog")
{
}

Dog::Dog(const std::string name) : Animal(name)
{
}


Dog::Dog(const Dog &other)
{
    this->type = other.type;
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

void Dog::setIdea(int index, const std::string& idea) {
    brain.setIdea(index, idea);
}

std::string Dog::getIdesetIdeaa(int index) const {
    return brain.getIdesetIdeaa(index);
}

