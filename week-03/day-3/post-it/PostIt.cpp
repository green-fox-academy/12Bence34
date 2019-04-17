#include "PostIt.h"

PostIt::PostIt(std::string backgroundColor, std::string textColor, std::string text) {

    _backgroundColor = backgroundColor;
    _textColor = textColor;
    _text = text;


}

std::string PostIt::getBackgroundColor() {
    return _backgroundColor;
}

std::string PostIt::getTextColor() {
    return _textColor;

}

std::string PostIt::getText() {
    return _text;

}