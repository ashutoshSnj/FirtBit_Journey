package EmployesHire;

public class Employee {
    String name;
    String Expertise;
    String Education;
    int passing_year;
    String known_languages;
    int Age;
    int candidate_experience;
	public Employee(String name, String expertise, String education, int passing_year, String known_languages, int age,
			int candidate_experience) {
		this.name = name;
		Expertise = expertise;
		Education = education;
		this.passing_year = passing_year;
		this.known_languages = known_languages;
		Age = age;
		this.candidate_experience = candidate_experience;
	}
	public Employee() {
		// TODO Auto-generated constructor stub
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getExpertise() {
		return Expertise;
	}
	public void setExpertise(String expertise) {
		
		Expertise = expertise;
	}
	public String getEducation() {
		return Education;
	}
	public void setEducation(String education) {
		Education = education;
	}
	public int getPassing_year() {
		return passing_year;
	}
	public void setPassing_year(int passing_year) {
		
			this.passing_year = passing_year;
		
		
	}
	public String getKnown_languages() {
		return known_languages;
	}
	public void setKnown_languages(String known_languages) {
		this.known_languages = known_languages;
	}
	public int getAge() {
		return Age;
	}
	public void setAge(int age) {
		Age = age;
	}
	public int getCandidate_experience() {
		return candidate_experience;
	}
	public void setCandidate_experience(int candidate_experience)  {
	   
		this.candidate_experience = candidate_experience;
	}
	
    
}
