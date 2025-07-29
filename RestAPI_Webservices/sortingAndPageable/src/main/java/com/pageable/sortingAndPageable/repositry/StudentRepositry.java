package com.pageable.sortingAndPageable.repositry;

import org.springframework.data.jpa.repository.JpaRepository;

import com.pageable.sortingAndPageable.entity.Student;

public interface StudentRepositry extends JpaRepository<Student, Integer> {

}
