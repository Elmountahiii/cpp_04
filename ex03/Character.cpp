#include "Character.hpp"

Character::Character(void)
{
	this->_name = "";
	this->list = new LinkedList();
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
	
}

Character::Character(const std::string name){
	this->_name = name;
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
	this->list = new LinkedList();
}

Character::~Character(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
 			delete this->inventory[i];
	}
	delete this->list;
}

Character::Character(const Character& obj)
{
	this->_name = obj._name;
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = obj.inventory[i]->clone();
	}
}

Character& Character::operator=(const Character& obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;

		for (size_t i = 0; i < 4; i++)
		{
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
		}

		for (size_t i = 0; i < 4; i++)
		{
			this->inventory[i] = obj.inventory[i]->clone();
		}
	}
	return (*this);
}


void	Character::equip(AMateria *obj){
	
	if (!obj)
		return ;
	for (int i = 0; i < 4 ; i++){

		if (this->inventory[i] == NULL){
			this->inventory[i] = obj->clone();
			break;
		}
	}
}


void Character::unquip(int index){
	
	for (int i = 0; i < 4; i++)
	{
		if (index == i && this->inventory[i] != NULL)
		{
			this->list->add(this->inventory[i]);
			this->inventory[i] = NULL;
		}
	}
}

void Character::use(int index, ICharacter &target){

	for (int i = 0; i < 4; i++)
	{
		if (index == i && this->inventory[i] != NULL)
			this->inventory[i]->use(target);
	}
}


std::string const & Character::getName() const{
	return this->_name;
}