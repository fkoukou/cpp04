#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"Brain.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; // should not create a leak
    delete i;

    std::cout << "----- Deep Copy Test -----" << std::endl;
    Dog dog1;
    dog1.setIdea(0, "Chasing cats");
    Dog dog2 = dog1; // Calls copy constructor

    std::cout << "Dog1 Idea[0]: " << dog1.getIdesetIdeaa(0) << std::endl;
    std::cout << "Dog2 Idea[0]: " << dog2.getIdesetIdeaa(0) << std::endl;

    dog2.setIdea(0, "Playing fetch");

    std::cout << "After modifying Dog2's idea:" << std::endl;
    std::cout << "Dog1 Idea[0]: " << dog1.getIdesetIdeaa(0) << std::endl;
    std::cout << "Dog2 Idea[0]: " << dog2.getIdesetIdeaa(0) << std::endl;

    return 0;
}