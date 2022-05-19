#pragma once
#include "Guest.h"

class Customer : public Guest{

protected:
	char Username[15];
	char Password[15];

public:
	//Default Constructor
	void customer();

	//Overloaded Constructor
	void customer(char Cusername[], char Cpassword[], char name[], char gender[], char address[], int mobileno, char email[]);

	//Setters
	void setUsername(char Cusername[]);
	void setPassword(char Cpassword[]);

	//Getters
	char getUsername();
	char getPassword();

	void login(char Cusername[], char Cpassword[]);

	//Destructors
	~Customer();

};
