#include <iostream>
#include "BlogPost.h"

int main() {

    BlogPost Post1("John Doe", "Lorem Ipsum", "2000.05.04", "Lorem ipsum dolor sit amet.");

    BlogPost Post2("Tim Urban", "Wait but why", "2010.10.10.",
                   "A popular long-form, stick-figure-illustrated blog about almost everything.");

    BlogPost Post3("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump", "2017.03.28.",
                   "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.");

    std::cout << "\n" << std::endl;
    std::cout << " '" << Post1.getTitle() << "' written by " << Post1.getAuthorName() << "," << " released in "
              << Post1.getPublicationDate() << "." << "\n" << "\t" << Post1.getText() << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << " '" << Post2.getTitle() << "' written by " << Post2.getAuthorName() << "," << " released in "
              << Post2.getPublicationDate() << "\n" << "\t" << Post2.getText() << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << " '" << Post3.getTitle() << "' written by " << Post3.getAuthorName() << "," << " released in "
              << Post3.getPublicationDate() << "\n" << "\t" << Post3.getText() << std::endl;

    return 0;
}