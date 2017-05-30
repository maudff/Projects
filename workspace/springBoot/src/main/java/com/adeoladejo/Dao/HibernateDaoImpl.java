package com.adeoladejo.Dao;

import java.util.Collection;
import java.util.List;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.stereotype.Repository;


import com.adeoladejo.Entity.Student;

@Repository 
@Qualifier("hibernateSql")
public class HibernateDaoImpl implements StudentDao {

	@Autowired
	private SessionFactory sessionFactory;
	
	@Override
	public Collection<Student> getAllStudents() {
		Session session = this.sessionFactory.openSession();
		List<Student> personList = session.createQuery("from student").list();
		session.close();
		return personList;
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
