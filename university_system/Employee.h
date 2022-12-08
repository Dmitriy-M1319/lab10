#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {

private:
	int social_security_number;
    std::string name;
    std::string email;

public:
	int getSocial_security_number();

	void setSocial_security_number(int social_security_number);

    std::string getName();

	void setName(std::string name);

    std::string getEmail();

	void setEmail(std::string email);
};

#endif
