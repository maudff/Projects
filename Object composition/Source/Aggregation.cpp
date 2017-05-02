#include "Aggregation.h"

////////////////////////////////////////////////////////////////////////

void Department::addTeacher(const Teacher* teacher)
{
	m_teachers.push_back(teacher);
}

////////////////////////////////////////////////////////////////////////

int Department::getDepartmentSize() const
{
	return m_teachers.size();
}

////////////////////////////////////////////////////////////////////////

TeacherPtr Department::getListOfTeachers() const
{
	return m_teachers;
}

////////////////////////////////////////////////////////////////////////

std::ostream& operator<<(std::ostream& out, const Department &dept)
{
	int size = dept.getDepartmentSize();
	TeacherPtr teacher = dept.getListOfTeachers();

	out << "Department ";
	for (unsigned i = 0; i < size; ++i)
	{
		out << teacher[i]->getName() << " ";
	}
	out << "\n";
	return out;
}

////////////////////////////////////////////////////////////////////////