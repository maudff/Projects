package com.adeoladejo.Dao;

import java.util.Collection;

import com.adeoladejo.Entity.Student;

public interface StudentDao {

	Collection<Student> getAllStudents();

	Student getStudentById(int id);

	void removeStudentById(int id);

	void updateStudent(Student student);

	void addStudent(Student student);

}