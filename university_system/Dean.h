#ifndef DEAN_H
#define DEAN_H

#include "Employee.h"
#include "Faculty.h"

class Dean : Employee {

public:
	Faculty faculty;

	void controlFaculty(Faculty f);
};

#endif
