/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BtcEx.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:50:15 by mdelforg          #+#    #+#             */
/*   Updated: 2023/07/17 14:27:55 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BTCEX_HPP_
# define _BTCEX_HPP_

#include <fstream>
#include <iostream>
#include <exception>
#include <map>
#include <iterator>


class BtcEx
{

	public:

	// constructors
		BtcEx();
		BtcEx(const BtcEx &src);

	// destructor
		~BtcEx();

	// assign operator
		BtcEx	&operator=(const BtcEx &rhs);

	// functions
		void	exchange(const char *fileName);

	// exception
		class myEx : public std::exception
		{
		  virtual const char* what() const throw()
		  {
			return "Error: input file.";
		  }
		};


	private:

		std::map<std::string, double>	dtBase_map;

		void	collect_database(std::string dtbase_name);
		void	read_infile(char buf[256]);


};

#endif
