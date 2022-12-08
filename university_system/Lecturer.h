#ifndef LECTURER_H
#define LECTURER_H

#include "ResearchEmployee.h"
#include "Course.h"

class Lecturer : ResearchEmployee {

public:
	Course course;

	void setCourse(Course c);
};

#endif
