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

insert into employer values(1 , "Reacy Beaker", "Software engineer" , 15000.00);
insert into employer values(2 , "cunt Beaker", "Human Resource" , 23000.00);
insert into employer values(3 , "Reacy", "Software engineer" , 13000.00);
insert into employer values(4 , "cunt", "Human Resource" , 33000.00);
insert into employer values(5 , "Ade", "Software engineer" , 34000.00);

select * from employer
where salary > 20000;







