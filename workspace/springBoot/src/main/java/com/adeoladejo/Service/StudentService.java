package com.adeoladejo.Service;

import java.util.Collection;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.stereotype.Service;

import com.adeoladejo.Dao.StudentDao;
import com.adeoladejo.Entity.Student;

@Service
public class StudentService {

	@Autowired
	@Qualifier("hibernateSql")
	private StudentDao studentDao;
	
	public Collection<Student> getAllStudents()
	{
		return studentDao.getAllStudents();
	}
	
	public Student getStudentById(int id)
	{
		return studentDao.getStudentById(id);
	}

	public void removeStudentById(int id) {
		// TODO Auto-generated method stub
		studentDao.removeStudentById(id);
	}
	
	public void updateStudent(Student student)
	{
		studentDao.updateStudent(student);
	}
	
	public void addStudent(Student student)
	{
		studentDao.addStudent(student);
		
	}
}
