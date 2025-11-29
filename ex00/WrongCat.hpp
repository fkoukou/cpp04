#ifndef WORNGCAT_HPP
#define WORNGCAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>
#include <string>
class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat &operator=(const WrongCat &other);
        ~WrongCat();

        void makeSound() const;
};
#endif