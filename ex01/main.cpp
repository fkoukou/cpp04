#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"Brain.hpp"

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // std::cout << "=== Test destructeurs ===" << std::endl;
    // {
    //     const Animal* j = new Dog();
    //     const Animal* i = new Cat();
        
    //     std::cout<< j->getType() << " " << std::endl;
    //     std::cout<< i->getType() << " " << std::endl;

    //     i->makeSound(); 
    //     j->makeSound();
    //     delete j; 
    //     delete i; 
    // }

    std::cout << "\n=== Test tableau d'Animals ===" << std::endl;
    {
        const int size = 4;
        const Animal* animals[size];

        for (int i = 0; i < size; i++)
        {
            if (i < size / 2)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }

        for (int i = 0; i < size; i++)
            delete animals[i];
    }

    std::cout << "\n=== Test deep copy Dog ===" << std::endl;
    {
        Dog dog1;
        dog1.setIdea(0, "I love bones");

        Dog dog2 = dog1; 
        dog2.setIdea(0, "I want to play");

        std::cout << "Dog1 idea: " << dog1.getIdesetIdeaa(0) << std::endl;
        std::cout << "Dog2 idea: " << dog2.getIdesetIdeaa(0) << std::endl;

    }



    return 0;
}
