/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:17:22 by tglandai          #+#    #+#             */
/*   Updated: 2018/03/28 21:52:34 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

std::string     toupper(std::string str) {
    for (int i = 0; i < str.length(); i++)
            str[i] = std::toupper(str[i]);
    return str;
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Usage : ./replace filename s1 s2" << std::endl; 
    } else {
        std::ifstream ifs(argv[1]);

        if (ifs.is_open()) {
            std::string s1 = argv[2];
            std::string s2 = argv[3];
            std::string file;

            std::stringstream buffer;
            buffer << ifs.rdbuf();
            ifs.close();

            file = buffer.str();
            unsigned int i = 0;
            while ((i = file.find(s1, i)) != file.length() && i != UINT_MAX) {
                file.replace(i, s1.length(), s2);
                i += s2.length();
            }

            std::ofstream ofs(toupper(argv[1]) += ".replace");
            ofs << file;
            ofs.close();
        } else {
            std::cout << "Error with file." << std::endl; 
        }
    }
    return 0;
}