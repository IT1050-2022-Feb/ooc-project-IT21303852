#pragma once
class Guest
{
protected:
	char Name[50];
	char Gender[10];
	char Address[100];
	int MobileNo;
	char Email[50];

public:
	void guest();
	void guest(char gname[],char ggender[],char gaddress[], int gmobileno, char gemail[]);
	
	void setName(char gName[]);
	void setGender(char gGender[]);
	void setAddress(char gAddress[]);
	void setMobileno(int gMobileno);
	void setEmail(char gEmail[]);

	char getName();
	char getGender();
	char getAddress();
	int getMobileno();
	char getEmail();
	
	void Userregistration();

	~Guest();
};

