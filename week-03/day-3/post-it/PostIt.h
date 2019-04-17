#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H

#include<string>
#include<iostream>

class PostIt {

public:
    PostIt(std::string backgroundColor, std::string textColor, std::string text);

    std::string getBackgroundColor();

    std::string getTextColor();

    std::string getText();


private:
    std::string _backgroundColor;
    std::string _textColor;
    std::string _text;

};


#endif
