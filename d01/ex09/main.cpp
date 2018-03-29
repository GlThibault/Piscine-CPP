/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 21:01:26 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/29 08:43:40 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void) {
    Logger log("test.log");

    log.log("console", "test of console log");
    log.log("file", "test of file log");
    log.log("console", "test of console log2");
    log.log("file", "test of file log2");
    log.log("console", "test of console log3");
    log.log("file", "test of file log3");
    log.log("console", "test of console log4");
    log.log("file", "test of file log4");
    return 0;
}