#ifndef RESEARCHEMPLOYEE_H
#define RESEARCHEMPLOYEE_H

#include "Employee.h"
#include "Institute.h"
#include "Project.h"

class ResearchEmployee : Employee {

private:
	Institute institute;
	Project project;

public:
	void setSpecialProject(Project p);

	Institute getInstitute();

	void setInstitute(Institute institute);
};

#endif
