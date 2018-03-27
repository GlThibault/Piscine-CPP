

#include <iostream>
#include "Pony.hpp"

ponyOnTheHeap(void) {
    Pony *heapPony = new Pony();

    heapPony->setName("heapPony");
    std::count << "Name : " << heapPony->getName() << std::endl;
}

ponyOnTheStack(void) {
    Pony stackPony;

    stackPony.setName("stackPony");
    std::count << "Name : " << stackPony->getName() << std::endl;

}

int main(void) {
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}