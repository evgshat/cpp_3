#ifndef	FRAG_TRAP_HPP
#define	FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(FragTrap &trap);
		FragTrap &operator=(const FragTrap &trap);
		~FragTrap();

		FragTrap(std::string name);
		void highFivesGuys(void);
};

#endif
