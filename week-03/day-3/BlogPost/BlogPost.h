#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H

#include <iostream>
#include <string>

class BlogPost {

public:
    BlogPost(std::string authorName, std::string title, std::string publicationDate, std::string text);

    std::string getAuthorName();

    std::string getTitle();

    std::string getPublicationDate();

    std::string getText();


private:
    std::string _authorName;
    std::string _title;
    std::string _publicationDate;
    std::string _text;

};


#endif
