#include "Student.h"
#include "Date.h"

//operator
Student& Student::operator=(Student c) {
	//string yearsOfStart
	this->id = c.id;
	this->fname = c.fname;
	this->lname = c.lname;
	this->mobile = c.mobile;
	this->username = c.username;
	this->password = c.password;
	this->dateOfEnter = c.dateOfEnter;
	this->date = c.date;
	this->type = c.type;
	return c;
}

int Student::StudentNumbercounter = 401133100;
Student::Student(string fname, string lname, string username, string password, string moible, string DateOfBirth, string yearsOfStart)
	: Person(fname, lname, username, password, moible, DateOfBirth) {
	studentNumber = StudentNumbercounter++;

	dateOfEnter.converStringToInt(yearsOfStart);
}
void Student::printPersonalInfo()
{
	if (getSoftDeleted() == 0) {
		int passLen = size(password);
		cout << endl << "|*  ID : " << id
			<< endl << "|*  First Name : " << fname
			<< endl << "|*  Last Name : " << lname
			<< endl << "|*  mobile : " << mobile
			<< endl << "|*  Student Number : " << getStudentNumber()
			<< endl << "|*  Date Of Birth : " << date.getFullDate()
			<< endl << "|*  Date Of Enter To Univercity : " << dateOfEnter.getFullDate()
			<< endl << "|*  Email : " << username
			<< endl << "|*  password : ";
		for (int i = 0; i < passLen; i++)
		{
			cout << "*";
		}
		cout << endl << endl;
	}

}
void Student::setType() {
	this->type = 0;
}
void Student::getSoftDeletedUsers() {
	if (getSoftDeleted() == 1) {
		int passLen = size(password);
		cout << endl << "|*  ID : " << id
			<< endl << "|*  First Name : " << fname
			<< endl << "|*  Last Name : " << lname
			<< endl << "|*  mobile : " << mobile
			<< endl << "|*  Date Of Birth : " << date.getFullDate()
			<< endl << "|*  rule : " << rule
			<< endl << "|*  Email : " << username
			<< endl << "|*  password : ";
		for (int i = 0; i < passLen; i++)
		{
			cout << "*";
		}
		cout << endl << endl;
	}
};
