#include "Teacher.h"

//////////////////////////////////////////////////////////////////////////

Teacher::Teacher(const char* name) : m_name(name)
{

}

//////////////////////////////////////////////////////////////////////////

const char* Teacher::getName() const
{
	return &m_name[0];
}

//////////////////////////////////////////////////////////////////////////