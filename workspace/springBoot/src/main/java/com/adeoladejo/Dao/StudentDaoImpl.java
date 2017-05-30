package com.adeoladejo.Dao;

import java.util.Collection;
import java.util.HashMap;
import java.util.Map;

import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.stereotype.Repository;

import com.adeoladejo.Entity.Student;

@Repository
@Qualifier("fakeData")
public class StudentDaoImpl implements StudentDao {

	
	static Map<Integer, Student> student;
	static 
	{
		student = new HashMap<Integer,Student>() {
					{
						put(1 , new Student(1, "Ade" , "Computer Science"));
						put(2 , new Student(2, "Said" , "Maths"));
						put(3 , new Student(3, "Monica" , "English"));
						put(4 , new Student(4, "Kunle" , "Chemistry"));
					}
				};
	}
	
	/* (non-Javadoc)
	 * @see com.adeoladejo.Dao.StudentDao#getAllStudents()
	 */
	@Override
	public Collection<Student> getAllStudents()
	{
		return student.values();
	}
	
	/* (non-Javadoc)
	 * @see com.adeoladejo.Dao.StudentDao#getStudentById(int)
	 */
	@Override
	public Student getStudentById(int id)
	{
		return student.get(id);
	}

	/* (non-Javadoc)
	 * @see com.adeoladejo.Dao.StudentDao#removeStudentById(int)
	 */
	@Override
	public void removeStudentById(int id) {
		// TODO Auto-generated method stub
		student.remove(id);
	}
	
	/* (non-Javadoc)
	 * @see com.adeoladejo.Dao.StudentDao#updateStudent(com.adeoladejo.Entity.Student)
	 */
	@Override
	public void updateStudent(Student student)
	{
		this.student.put(student.getId() , student);
	}
	
	/* (non-Javadoc)
	 * @see com.adeoladejo.Dao.StudentDao#addStudent(com.adeoladejo.Entity.Student)
	 */
	@Override
	public void addStudent(Student student)
	{
		this.student.put(student.getId(), student);
	}
	
}
