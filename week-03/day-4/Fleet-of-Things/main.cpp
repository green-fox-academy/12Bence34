#include <iostream>

#include "fleet.h"

int main(int argc, char *args[]) {
    Fleet fleet;

    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch

    fleet.add(Thing("Get milk"));
    fleet.add(Thing("Remove the obstacles"));

    Thing complete1 = Thing("Stand up");
    complete1.complete();
    fleet.add(Thing(complete1));

    Thing complete2 = Thing("Eat lunch");
    complete2.complete();
    fleet.add(Thing(complete2));

    std::cout << fleet.toString() << std::endl;

    return 0;
}