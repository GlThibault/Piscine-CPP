/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tglandai <tglandai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:54:06 by tglandai          #+#    #+#             */
/*   Updated: 2018/04/02 17:48:01 by tglandai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
    this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("ShrubberyCreationForm", 145, 137)
{
    *this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &)
{
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::string name = this->getTarget() + "_shrubbery";
    const char *fileName = name.c_str();
    if (executor.getGrade() <= 137 && this->getIsSigned() == true)
    {
        std::ofstream ofs(fileName);
        if (ofs)
        {
            ofs << "              _{\\ _{\\{\\/}/}/}__" << std::endl
                << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl
                << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl
                << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl
                << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl
                << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl
                << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl
                << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl
                << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl
                << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl
                << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl
                << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl
                << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl
                << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl
                << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl
                << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl
                << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl
                << "              {){/ {\\/}{\\/} \\}\\}" << std::endl
                << "              (_)  \\.-'.-/" << std::endl
                << "          __...--- |'-.-'| --...__" << std::endl
                << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__" << std::endl
                << " -\"    ' .  . '    |.'-._| '  . .  '   jro" << std::endl
                << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl
                << "          ' ..     |'-_.-|" << std::endl
                << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl
                << "              .'   |'- .-|   '." << std::endl
                << "  ..-'   ' .  '.   `-._.-´   .'  '  - ." << std::endl
                << "   .-' '        '-._______.-'     '  ." << std::endl
                << "        .      ~," << std::endl
                << "    .       .   |\\   .    ' '-." << std::endl;
        }
        ofs.close();
    }
    else if (this->getIsSigned() == false)
        std::cout << "The form isn't signed." << std::endl;
    else
        throw Form::GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}
