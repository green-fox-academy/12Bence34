#include <iostream>

#include "Animal.h"

/*Create an "Animal" class.

Every animal has a "hunger" value, which is a whole number.
Every animal has a "thirst" value, which is a whole number.
When creating a new animal object these values are created with the default 50 value.
Every animal can "eat()" which decreases their hunger by one.
Every animal can "drink()" which decreases their thirst by one.
Every animal can "play()" which increases both by one. */





int main() {
    Animal Dog;
    Dog.play();
    std::cout << "\n" << std::endl;
    std::cout << "The dog started to play, so his hunger increased to " << Dog.getHunger()
              << ", and his thirst increased to " << Dog.getThirst() << " as well." << std::endl;

    std::cout << "\n" << std::endl;

    Animal Lion;
    Lion.drink();
    std::cout << "The lion drank some water, so his thirst decreases to " << Lion.getThirst() << "." << std::endl;
    std::cout << "\n" << std::endl;
    Animal Tiger;
    Tiger.eat();
    std::cout << "The tiger ate some meat, so his hunger decreased to " << Tiger.getHunger() << "." << std::endl;

    return 0;
}