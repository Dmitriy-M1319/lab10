#include "ResearchEmployee.h"

void ResearchEmployee::setSpecialProject(Project p) {
    this->project = p;
}

Institute ResearchEmployee::getInstitute() {
	return this->institute;
}

void ResearchEmployee::setInstitute(Institute institute) {
	this->institute = institute;
}
