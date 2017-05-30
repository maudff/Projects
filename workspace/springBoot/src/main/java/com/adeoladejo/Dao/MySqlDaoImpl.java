package com.adeoladejo.Dao;

import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Collection;
import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.jdbc.core.RowMapper;
import org.springframework.stereotype.Repository;

import com.adeoladejo.Entity.Student;

@Repository
@Qualifier("MysqlDb")
public class MySqlDaoImpl implements StudentDao {

	@Autowired
	private JdbcTemplate jdbcTemplate;
	
	private static class StudentMapper implements RowMapper<Student>
	{
		@Override
		public Student mapRow(ResultSet arg0, int arg1) throws SQLException {
			// TODO Auto-generated method stub
			Student student = new Student();
			student.setId(arg0.getInt("ID"));
			student.setName(arg0.getString("NAME"));
			student.setCourse(arg0.getString("COURSES"));
			return student;
		}
		
	}

	@Override
	public Collection<Student> getAllStudents() {
		
		final String sql = "Select * from Student";
		List<Student> student= jdbcTemplate.query(sql , new StudentMapper()); 
		
		return student;
	}

	@Override
	public Student getStudentById(int id) {
		String sql = "Select * from student where ID = ?";
		Student student = jdbcTemplate.queryForObject(sql, new StudentMapper() , id);
		return student;
	}

	@Override
	public void removeStudentById(int id) {
		String sql = "DELETE FROM Student where ID =?";
		jdbcTemplate.update(sql, id);
	}

	@Override
	public void updateStudent(Student student) {
		String sql = "UPDATE student set name =? , courses = ? where id =?";
		int id = student.getId();
		String name = student.getName();
		String course = student.getCourse();
		jdbcTemplate.update(sql , new Object[] {name , course , id});
	}

	@Override
	public void addStudent(Student student) {
		String sql = "insert into student(name,courses) values(?,?)";
		String name = student.getName();
		String course = student.getCourse();
		jdbcTemplate.update(sql , new Object[] {name , course});
		//jdbcTemplate.(sql, new StudentMapper() , student.getName() , student.getCourse());
	}

}
