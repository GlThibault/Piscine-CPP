/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 21:01:17 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 21:41:40 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string filename): _filename(filename) {
    return;
}

Logger::~Logger(void) {
    return;
}

void Logger::log(std::string const & dest, std::string const & message) {
    void (Logger::*destination[2])(std::string const & t) = { &Logger::logToConsole, &Logger::logToFile };
	std::string destinationNames[2] = { "console", "file" };
	for (int i = 0; i < 3; i++) {
		if (destinationNames[i] == dest)
			(this->*destination[i])(message);
	}
}

void Logger::logToConsole(std::string const & str) {
    std::cout << makeLogEntry(str) << std::endl;
}

void Logger::logToFile(std::string const & str) {
    std::ofstream ofs(this->_filename);
    ofs << str;
    ofs.close();
}

std::string Logger::makeLogEntry(std::string const & str) {
    time_t rawtime;
    char buffer[20];
    time( &rawtime );
    strftime(buffer, 20, "%Y%m%d_%H%d%S", localtime( &rawtime ));
    std::string t1 = "[";
    std::string t2 = "] ";
    return (t1 + buffer + t2 + str);
}
