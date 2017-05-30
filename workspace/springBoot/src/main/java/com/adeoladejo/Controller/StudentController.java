package com.adeoladejo.Controller;

import org.springframework.http.MediaType;
import java.util.Collection;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RestController;

import com.adeoladejo.Entity.Student;
import com.adeoladejo.Service.StudentService;

@RestController
@RequestMapping("/students")
public class StudentController {

	@Autowired  // Springboot finds a bean of type StudentService and injects it to the object
	private StudentService service;
	
	@RequestMapping(method = RequestMethod.GET)
	public Collection<Student> getAllStudents()
	{
		return service.getAllStudents();
	}
	
	@RequestMapping( value = "/{id}" , method = RequestMethod.GET)
	public Student getStudentById(@PathVariable("id")int id)
	{
		return service.getStudentById(id);
	}
	
	@RequestMapping( value = "/{id}" , method = RequestMethod.DELETE)
	public void deleteStudentById(@PathVariable("id")int id)
	{
		service.removeStudentById(id);
	}
	
	@RequestMapping( method = RequestMethod.PUT , consumes = MediaType.APPLICATION_JSON_VALUE)
	public void updateStudent(@RequestBody Student student)
	{
		service.updateStudent(student);
	}
	
	@RequestMapping(method = RequestMethod.POST , consumes = MediaType.APPLICATION_JSON_VALUE )
	public void addStudent(@RequestBody Student student)
	{
		service.addStudent(student);
	}
}
