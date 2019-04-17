#include "BlogPost.h"
#include <string>

BlogPost::BlogPost(std::string authorName, std::string title, std::string publicationDate, std::string text) {

    _authorName = authorName;
    _title = title;
    _publicationDate = publicationDate;
    _text = text;

}

std::string BlogPost::getAuthorName() {
    return _authorName;
}

std::string BlogPost::getTitle() {
    return _title;
}

std::string BlogPost::getPublicationDate() {
    return _publicationDate;

}

std::string BlogPost::getText() {
    return _text;

}