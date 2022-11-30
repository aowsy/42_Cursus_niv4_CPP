/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:12:35 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/15 17:37:46 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*							- Constructors -							*/

// default
Convert::Convert() : _ch('0'), _in(0), _fl(0.0f), _db(0.0), _type(0)
{
	return ;
}

// by string
Convert::Convert(std::string str)
{
	char	*pEnd;
	long	lg_tmp;
	double	db_tmp;

	if (str.empty())
		throw Convert::WrongInput();

	if (str.size() == 1)
	{
		if (isdigit(str[0]))
		{
			this->_in = static_cast<int>(strtol(str.c_str(), &pEnd, 10));
			this->_type = 1;
		}
		else
		{
			this->_ch = str[0];
			this->_type = 0;
		}
	}

	else
	{
		lg_tmp = strtol(str.c_str(), &pEnd, 10);
		if (!pEnd[0])
		{
			if (lg_tmp < INT_MIN || lg_tmp > INT_MAX)
				throw Convert::WrongInput();
			else
			{
				this->_in = lg_tmp;
				this->_type = 1;
			}
		}
		else
		{
			db_tmp = strtod(str.c_str(), &pEnd);
			if (pEnd[0])
			{
				if (pEnd[0] == 'f')
				{
					this->_fl = static_cast<float>(db_tmp);
					this->_type = 2;
				}
				else
					throw Convert::WrongInput();
			}
			else
			{
				this->_db = db_tmp;
				this->_type = 3;
			}
		}
	}
}

// copy
Convert::Convert(const Convert & rhs)
{
	*this = rhs;

	return ;
}



/*							- Destructor -								*/

Convert::~Convert()
{
	return ;
}



/*							- Assign operator -							*/

Convert	& Convert::operator=(const Convert & rhs)
{
	this->_ch = rhs._ch;
	this->_in = rhs._in;
	this->_fl = rhs._fl;
	this->_db = rhs._db;

	this->_type = rhs._type;

	return (*this);
}



/*							- Getters -									*/

char	Convert::getChar() const
{
	switch (this->_type)
	{
		case 0:
			return (this->_ch);
		case 1:
			if (this->_in < 0 || this->_in > 126)
				throw Convert::Impossible();
			if (this->_in >= 0 && this->_in <= 31)
				throw Convert::Undisplayable();
			else
				return (static_cast<char>(this->_in));
		case 2:
			if (this->_fl < 0 || this->_fl > 126 || isnan(this->_fl) || isinf(this->_fl))
				throw Convert::Impossible();
			if (this->_fl >= 0 && this->_fl <= 31)
				throw Convert::Undisplayable();
			else
				return (static_cast<char>(this->_fl));
		case 3:
			if (this->_fl < 0 || this->_fl > 126 || isnan(this->_db) || isinf(this->_db))
				throw Convert::Impossible();
			if (this->_db >= 0 && this->_db <= 31)
				throw Convert::Undisplayable();
			else
				return (static_cast<char>(this->_db));
		default:
			break ;
	}
	return ('0');
}

int	Convert::getInt() const
{
	switch(this->_type)
	{
		case 0:
			return (static_cast<int>(this->_ch));
		case 1:
			return (this->_in);
		case 2:
			if (isnan(this->_fl) || isinf(this->_fl) || this->_fl < INT_MIN || this->_fl > INT_MAX)
				throw Convert::Impossible();
			else
				return (static_cast<int>(this->_fl));
		case 3:
			if (isnan(this->_db) || isinf(this->_db) || this->_db < INT_MIN || this->_db > INT_MAX)
				throw Convert::Impossible();
			else
				return (static_cast<int>(this->_db));
		default:
			break ;
	}
	return (0);
}

float	Convert::getFloat() const
{
	switch (this->_type)
	{
		case 0:
			return (static_cast<float>(this->_ch));
		case 1:
			return (static_cast<float>(this->_in));
		case 2:
			return (this->_fl);
		case 3:
			return (static_cast<float>(this->_db));
		default:
			break ;
	}
	return (0);
}

double	Convert::getDouble() const
{
	switch (this->_type)
	{
		case 0:
			return (static_cast<double>(this->_ch));
		case 1:
			return (static_cast<double>(this->_in));
		case 2:
			return (static_cast<double>(this->_fl));
		case 3:
			return (this->_db);
		default:
			break ;
	}
	return (0);
}

std::ostream	& operator<<(std::ostream & o, const Convert & rhs)
{
	try
	{
		o << "char : " << rhs.getChar() << std::endl;
	}
	catch (const std::exception & e)
	{
		o << e.what() << std::endl;
	}

	try
	{
		o << "integer : " << rhs.getInt() << std::endl;
	}
	catch (const std::exception & e)
	{
		o << e.what() << std::endl;
	}

	o << "float : " << rhs.getFloat() << "f" << std::endl;
	o << "double : " << rhs.getDouble() << std::endl;

	return (o);
}
