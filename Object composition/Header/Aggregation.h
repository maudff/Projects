#pragma once
#include "Teacher.h"
#include <vector>

typedef std::vector< const Teacher*> TeacherPtr;
///////////////////////////////////////////////////////////

class Department
{
private :
	TeacherPtr	m_teachers;

public:
	int getDepartmentSize() const;
	void addTeacher(const Teacher* ptr);
	TeacherPtr getListOfTeachers() const;
	friend std::ostream& operator<<(std::ostream& out, const Department &creature);

};

///////////////////////////////////////////////////////////