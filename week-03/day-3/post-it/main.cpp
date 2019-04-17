#include <iostream>
#include "PostIt.h"

/* TASK */

/*Create a PostIt class that has:
a backgroundColor.
a text on it.
a textColor.

Create a few example post-it objects:
an orange with blue text: "Idea 1"
a pink with black text: "Awesome"
a yellow with green text: "Superb!"

 */


int main() {
    PostIt First("orange", "blue", "Idea 1.");
    PostIt Second("pink", "black", "Awesome!");
    PostIt Third("yellow", "green", "Superb!");

    std::cout << " " << std::endl;
    std::cout << "backgroundColor: " << First.getBackgroundColor() << "," << " textColor: " << First.getTextColor()
              << "," << " text: "
              << First.getText() << std::endl;
    std::cout << " " << std::endl;
    std::cout << "backgroundColor: " << Second.getBackgroundColor() << "," << " textColor: " << Second.getTextColor()
              << "," << " text: "
              << Second.getText() << std::endl;
    std::cout << " " << std::endl;
    std::cout << "backgroundColor: " << Third.getBackgroundColor() << "," << " textColor: " << Third.getTextColor()
              << "," << " text: "
              << Third.getText() << std::endl;


    return 0;
}