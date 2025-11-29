#ifndef WrongAnimal_CPP
#define WrongAnimal_CPP

#include <iostream>
#include <string>
class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal &operator=(const WrongAnimal &other);
        virtual ~WrongAnimal();

        void makeSound() const;
        std::string getType() const;
};
#endif