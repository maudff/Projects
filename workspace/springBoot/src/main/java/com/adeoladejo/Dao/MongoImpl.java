package com.adeoladejo.Dao;

import java.util.Collection;

import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.stereotype.Repository;

import com.adeoladejo.Entity.Student;

@Repository
@Qualifier("mongoDb")
public class MongoImpl implements StudentDao{

	@Override
	public Collection<Student> getAllStudents() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public Student getStudentById(int id) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public void removeStudentById(int id) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void updateStudent(Student student) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void addStudent(Student student) {
		// TODO Auto-generated method stub
		
	}

}
