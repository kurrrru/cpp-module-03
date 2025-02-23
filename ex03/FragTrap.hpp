#pragma once

#include <string>

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
 public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    virtual ~FragTrap();

    void attack(const std::string& target);
    void highFivesGuys(void);
};
