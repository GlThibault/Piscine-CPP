/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:04:39 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/27 15:04:39 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void) {
    Pony *heapPony = new Pony();

    heapPony->setName("heapPony");
    std::cout << "Name : " << heapPony->getName() << std::endl;

    delete heapPony;
}

void ponyOnTheStack(void) {
    Pony stackPony;

    stackPony.setName("stackPony");
    std::cout << "Name : " << stackPony.getName() << std::endl;

}

int main(void) {
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}