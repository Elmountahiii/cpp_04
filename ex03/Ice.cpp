#include "Ice.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
}

Ice::~Ice(void)
{
}

Ice::Ice(const Ice& obj)
{
	*this = obj;
}

Ice& Ice::operator=(const Ice& obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return (*this);
}

AMateria *Ice::clone() const {
	return new Ice(*this);
}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
