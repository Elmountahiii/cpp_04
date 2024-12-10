#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->_data[i] = NULL;
	}
	
}

MateriaSource::~MateriaSource(void)
{

	for (size_t i = 0; i < 4; i++)
	{
		delete this->_data[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->_data[i] = obj._data[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	if (this != &obj)
	{
		for (size_t i = 0; i < 4; i++)
		{
			delete this->_data[i];
		}
		
		for (size_t i = 0; i < 4; i++)
		{
			this->_data[i] = obj._data[i]->clone();
		}
		
	}
	return (*this);
}


void	MateriaSource::learnMateria(AMateria *obj){

	for (size_t i = 0; i < 4; i++)
	{
		if (this->_data[i] == NULL)
		{
			this->_data[i] = obj;
			return ;
		}
	}
	
}

AMateria * MateriaSource::createMateria(std::string const & type){
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_data[i] && this->_data[i]->getType() == type)
			return (this->_data[i]->clone());
	}
	return NULL;
}