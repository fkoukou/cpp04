#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->type = "WrongCat";
}


WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat() {
}
void WrongCat::makeSound() const {
    std::cout << "WrongCat meows!" << std::endl;
}

