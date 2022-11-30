/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:43:02 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/06 15:36:44 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*							- Constructors -							*/

// default
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", "default", 145, 137)
{
	return ;
}

// string
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", target, 145, 137)
{
	return ;
}

// copy
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) : AForm("Shrubbery", src.getTarget(), 145, 137)
{
	return ;
}



/*							- Destructor -								*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}



/*							- Assign operator -							*/

ShrubberyCreationForm	& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
	this->getTarget() = rhs.getTarget();

	return (*this);
}



/*							- Function -								*/

void	ShrubberyCreationForm::execAction(const Bureaucrat & executor) const
{
	this->execute(executor);

	std::ofstream file(this->getTarget().append("_shrubbery"), std::ofstream::out);

	file << "                                               .     " << std::endl;
	file << "                                    .         ;      " << std::endl;
	file << "       .              .              ;%     ;;       " << std::endl;
	file << "         ,           ,                :;%  %;        " << std::endl;
	file << "          :         ;                   :;%;'     ., " << std::endl;
	file << " ,.        %;     %;            ;        %;'    ,;   " << std::endl;
	file << "   ;       ;%;  %;;        ,     %;    ;%;    ,%'    " << std::endl;
	file << "    %;       %;%;      ,  ;       %;  ;%;   ,%;'     " << std::endl;
	file << "     ;%;      %;        ;%;        % ;%;  ,%;'       " << std::endl;
	file << "      `%;.     ;%;     %;'         `;%;;.%;'         " << std::endl;
	file << "       `:;%.    ;;%. %@;        %; ;@%;%'            " << std::endl;
	file << "          `:%;.  :;bd%;          %;@%;'              " << std::endl;
	file << "            `@%:.  :;%.         ;@@%;'               " << std::endl;
	file << "              `@%.  `;@%.      ;@@%;                 " << std::endl;
	file << "                `@@%. `@@%    ;@@%;                  " << std::endl;
	file << "                  ;@%. :@@%  %@@%;                   " << std::endl;
	file << "                    %@bdb%;bd%;:;                    " << std::endl;
	file << "                      #@@@@%:;;                      " << std::endl;
	file << "                      %@@@@%::;                      " << std::endl;
	file << "                      %@@@%(o);  . '                 " << std::endl;
	file << "                      %@@@o%;:(.,'                   " << std::endl;
	file << "                  `.. %@@@o%::;                      " << std::endl;
	file << "                     `)@@@o%::;                      " << std::endl;
	file << "                      %@@(o)::;                      " << std::endl;
	file << "                     .%@@@@%::;                      " << std::endl;
	file << "                     ;%@@@@%::;.                     " << std::endl;
	file << "                    ;%@@@@@%:;;;.                    " << std::endl;
	file << "                ...;%@@@@@%@%:;;;;,..                " << std::endl;

	file.close();

	return ;
}
