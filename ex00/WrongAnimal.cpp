#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}


WrongAnimal::~WrongAnimal() {
}


void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal makes a sound!" << std::endl;
}


std::string WrongAnimal::getType() const {
    return this->type;
}

