#ifndef Person_H
#define Person_H
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;
class Person
{
public:
	Person(string fname , string lname , string username, string password,
		string mobile, string DateOfBirth);
	virtual void printPersonalInfo() = 0;
	virtual void setType() = 0;
	virtual void EditProfile(string fname, string lname, string mobile, string username, string date );
	virtual void getSoftDeletedUsers() = 0;

	void setPassword(string password);
	void setUsername(string username);
	void setMobile(string mobile);
	void setDatePerson(string strDate);
	void setSalary(float salary);
	void setSoftDeleted (int softDeleted);
	
	//get 
	int getID() { return id; }
	string getFname() { return fname; }
	string getLname() { return lname; }
	string getUsername() { return username; }
	string getPassword() { return password; }
	string getMobile() { return mobile; }
	int getType() { return type; }
	string getRule() { return rule; }
	float getSalary() { return salary; }
	int getSoftDeleted() { return softDeleted; }
protected:
	static int idCounter;
	int id;
	int type = 0; // 0 => Student , 1 => Teacher , 2 => Admin
	string fname, lname, mobile , username, password;
	Date date;
	string rule; //rules = owner-admin-moderator-writer
	float salary;
	int softDeleted = 0; // 0 => don't Deleted , 1 => Deleted
};


#endif // !Person_H


