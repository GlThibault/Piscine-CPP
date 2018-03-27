#include <iosteam>
#include "Poney.hpp"

Pony::Pony(void) {
    std::cout << "Apparition of a pony" :: std::endl;
    return;
}

Pony::~Pony(void) {
    std::cout << "Death of a pony" :: std::endl;
    return;
}

void Pony::setName(std::string str) {
    this->_name = str;
    return ;
}

std::string Pony::getName(void) {
    return (this->_name);
}