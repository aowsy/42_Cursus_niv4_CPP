/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:52:20 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/16 14:35:29 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BASE_HPP_
# define _BASE_HPP_

class Base
{
	public:
		virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};


Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
