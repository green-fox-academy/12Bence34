#include <iostream>
#include "Sharpie.h"


/*Create "Sharpie" class.

We should know about each sharpie their "color" (which should be a string).
"width" (which will be a floating point number).
"inkAmount" (another floating point number).
When creating one, we need to specify the color and the width.
Every sharpie is created with a default 100 as inkAmount.
We can use() the sharpie objects which decreases inkAmount. */


int main() {

    Sharpie Pen("black", 0.50);
    Pen.use();
    std::cout << "\n" << std::endl;
    std::cout << " The pen's color is " << Pen.getColor() << ", the width is " << Pen.getWidth()
              << ", and the amount of the ink is " << Pen.getInkAmount() << "." << std::endl;


    return 0;
}