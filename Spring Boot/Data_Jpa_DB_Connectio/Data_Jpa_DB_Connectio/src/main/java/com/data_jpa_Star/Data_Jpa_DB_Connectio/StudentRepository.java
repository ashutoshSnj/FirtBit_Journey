package com.data_jpa_Star.Data_Jpa_DB_Connectio;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;

public interface StudentRepository extends JpaRepository <Student, Integer>{
       public List<Student> findByName(String name); 
       public List<Student> findByNameAndRollno(String name,int id); 
       
}
