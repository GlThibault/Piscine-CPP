/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 21:01:26 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 21:35:21 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void) {
    Logger log("test.log");

    log.log("console", "test of console log");
    log.log("file", "test of file log");
    return 0;
}