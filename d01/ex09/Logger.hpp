/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 21:01:20 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 21:36:27 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <ctime>

class Logger {
    public:
        Logger(std::string filename);
        ~Logger(void);
        void log(std::string const & dest, std::string const & message);
    private:
        void logToConsole(std::string const & str);
        void logToFile(std::string const & str);
        std::string makeLogEntry(std::string const & str    );
        std::string _filename;
};

#endif