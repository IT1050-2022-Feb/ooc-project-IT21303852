#pragma once

class Guest{
protected:
	char Name[50];
	char Gender[10];
	char Address[100];
	int MobileNo;
	char Email[50];

public:
//Default Constructor
	void guest();

//Overloaded Constructor
	void guest(char gname[],char ggender[],char gaddress[], int gmobileno, char gemail[]);

//Setters
	void setName(char gName[]);
	void setGender(char gGender[]);
	void setAddress(char gAddress[]);
	void setMobileno(int gMobileno);
	void setEmail(char gEmail[]);

//Getters
	char getName();
	char getGender();
	char getAddress();
	int getMobileno();
	char getEmail();
	
	void Userregistration();

//Destructors
	~Guest();
};

