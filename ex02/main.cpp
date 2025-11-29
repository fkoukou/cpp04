#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"Brain.hpp"

int main()
{
    // const Animal* meta = new Animal(); 
    const Animal* dog1 = new Dog();
    const Animal* cat1 = new Cat();

    dog1->makeSound();
    cat1->makeSound();

    delete dog1;
    delete cat1;

    return 0;
}