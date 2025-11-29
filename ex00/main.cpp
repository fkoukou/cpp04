#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
int main()
{
 Animal* meta = new Animal();
 Animal* j = new Dog();
 Animal* i = new Cat();
std::cout << j->getType() << std::endl;
std::cout << i->getType() << std::endl;
std::cout << meta->getType()  << std::endl;

i->makeSound(); 
j->makeSound();
meta->makeSound();
// delete meta;
// delete j;
// delete i;
return 0;
}

// int main()
// {
//     const WrongAnimal* meta = new WrongAnimal();
//     const WrongAnimal* i = new WrongCat();
//     std::cout << meta->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;

//     meta->makeSound();
//     i->makeSound();
//     delete meta;
//     delete i;
//     return 0;
// }