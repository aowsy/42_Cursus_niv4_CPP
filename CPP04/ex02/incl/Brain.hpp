/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:40:49 by mdelforg          #+#    #+#             */
/*   Updated: 2022/10/21 12:53:15 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

# include <iostream>

class Brain
{

	public:

	// constructors
		Brain(void);
		Brain(const Brain & src);

	// destructor
		~Brain(void);

	// assign operator
		Brain		& operator=(const Brain & rhs);

	// getter
		std::string	getIdea(int i) const;

	// setter
		void		setIdea(std::string idea);

	private:

		std::string	_ideas[100];

};

#endif
