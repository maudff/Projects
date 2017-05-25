show databases;
use testdb;
create table person 
(
	ID INT NOT NULL ,
    NAME VARCHAR(30) NOT NULL ,
    AGE INT  NOT NULL , 
    ADDRESS CHAR(25) ,
    PRIMARY KEY (ID)
);

create table employer 
(
	ID INT NOT NULL, 
    NAME varchar(50) NOT null,
    ROLE varchar(40) not null,
    SALARY decimal(7,2) not null,
    primary key (ID)
);

DESC person;
show databases;
SELECT TABLE_NAME 
FROM INFORMATION_SCHEMA.TABLES
WHERE TABLE_TYPE = 'BASE TABLE' AND TABLE_SCHEMA='testdb';

desc person;

insert into person(id, name , age , address)
values(1 , "Ade Oladejo" ,21 , "51 Brayards road" );

insert into person(id, name , age , address)
values(2,"Manny Paki" , 21 , "51 Brayards road" );

desc employer;

  
insert into employer values(1 , "Webastian Edge Wolos", "Deowit internship" , 20000.00);
insert into employer values(2 , "Warren Windall", "Iwan advisor" , 0.00);
insert into employer values(3 , "Ade Oladejo", "Unemployed" , 0.00);
insert into employer values(4 , "cunt", "Human Resource" , 33000.00);
insert into employer values(5 , "Ade", "Software engineer" , 34000.00);

select * from employer
where salary > 20000;

select* from employer
where role = "Software Engineer";

select * from employer 
where 
salary <= 20000 OR salary >= 10000;

update employer 
set role = "Financial Director" , salary = 52000.00
where id = 2;

select * from employer;

update employer 
set role = "Entry level Salary"
where id = 6;

select * from employer;

create table customers
(
	ID int not null,
    first_name varchar(60) ,
    last_name varchar(60) ,
    age int,
    primary key(ID) 
);

create table ORDERS
(
	ID int not null , 
    order_numer int not null,
    customer_ID int,
    primary key(ID) ,
    FOREIGN KEY(customer_ID) REFERENCES CUSTOMERS(ID)
);








