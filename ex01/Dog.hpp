#ifndef DOG_HPP
#define DOG_HPP

#include<iostream>
#include<string>
#include"Animal.hpp"
#include"Brain.hpp"



class Dog : public Animal
{
    private:
        Brain *brain;
    public:
    Dog();
    Dog(const std::string name);
    Dog(const Dog &other);
    Dog& operator=(const Dog &other);

    ~Dog();
    void    setIdea(int index, const std::string& idea);
    std::string getIdesetIdeaa(int index) const;
    void makeSound() const;

};

#endif