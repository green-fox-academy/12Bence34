#include <iostream>
#include  <vector>
#include <string>


int main() {
    std::vector<std::string> NameVector = {};
    for (int i = 0; i < NameVector.size(); ++i) {        // <--Check the size of the Vector.
        std::cout << NameVector.at(i) << std::endl;
    }
    std::cout << NameVector.size() << std::endl;            // <--Print the size of the vector.

    NameVector.emplace_back("William");                    // <--Add William to the list.

    if (NameVector.empty()) {                            // <--Print out whether the list is empty or not.
        std::cout << " Vector is Empty!";
    } else {
        std::cout << "Vector is not empty \n";
    }

    NameVector.emplace_back("John");                      //Add John to the list.

    NameVector.emplace_back("Amanda");                    //Add Amanda to the list.

    std::cout << NameVector.size() << std::endl;            //Print out the number of elements in the list.

    std::cout << NameVector[2] << "\n" << std::endl;            //Print out the 3rd element.


    std::vector<std::string>::iterator elso = NameVector.begin();  //Iterate through the list and print out each name.
    for (; elso != NameVector.end(); ++elso) {
        std::cout << *elso << std::endl;                           //Iterate through the list and print.
    }
    std::cout << "\n" << std::endl;

    NameVector.erase(NameVector.begin() + 1);                      //Remove the 2nd element.

    std::vector<std::string>::iterator reverse;                 //Iterate through the list in a reversed order and print out each name .
    for (reverse = NameVector.end(); reverse >= NameVector.begin(); reverse--) {
        std::cout << *reverse << std::endl;
    }

    std::cout << std::endl;

    NameVector.clear();                                        //Remove all elements.

    std::cout << NameVector.size() << std::endl;
    return 0;
}