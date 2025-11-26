#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"

int main()
{
 Animal* meta = new Animal();
 Animal* j = new Dog();
 Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); 
j->makeSound();
meta->makeSound();
return 0;
}