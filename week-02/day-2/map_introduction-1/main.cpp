#include <iostream>
#include <map>

int main() {
    std::map<int, char> myMap;                    // <---Create an empty map where the keys are integers and the values are characters

    if (myMap.empty()) {                            // <---Print out whether the Map is empty or not.
        std::cout << " Map is Empty!";
    } else {
        std::cout << "Map is not empty \n";
    }

    std::cout << "\n" << std::endl;

    myMap[97] = 'a';
    myMap[98] = 'b';
    myMap[99] = 'c';       // <---Adding key-value pairs to the map.
    myMap[65] = 'A';
    myMap[66] = 'B';
    myMap[67] = 'C';

    std::map<int, char>::iterator myMapIterator = myMap.begin();
    for (; myMapIterator != myMap.end(); myMapIterator++) {             // <---Print all the keys.
        std::cout << myMapIterator->first << std::endl;
    }
    std::cout << " " << std::endl;


    std::map<int, char>::iterator myMapIterator2 = myMap.begin();
    for (; myMapIterator2 != myMap.end(); myMapIterator2++) {             // <--- Print all the values.
        std::cout << myMapIterator2->second << std::endl;
    }
    myMap.insert(std::make_pair(68, 'D'));                         // <--- Add value D with the key 68.

    std::cout << " " << std::endl;

    std::cout << myMap.size() << std::endl;                   // <--- Print how many key-value pairs are in the map.

    std::cout << " " << std::endl;

    std::cout << myMap[99] << std::endl;                     // <--- Print the value that is associated with key 99.

    myMap.erase(myMap[97]);                               // <--- Remove the key-value pair where with key 97.

    std::cout << " " << std::endl;

    if (myMap[100] ==
        0) {                                  // <--- Print whether there is an associated value with key 100 or not.
        std::cout << " There is no associated value with key 100. " << std::endl;
    } else {
        std::cout << " There is an associated value with key 100. " << std::endl;
    }

    std::cout << " " << std::endl;

    myMap.clear();                                   // <-- Remove all the key-value pairs.

    std::cout << myMap.size() << std::endl;

    return 0;
}
