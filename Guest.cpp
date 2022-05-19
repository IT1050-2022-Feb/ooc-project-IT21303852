#include <iostream>
#include "Guest.h"
#include <cstring>

using namespace std;

//Default Constructor
void Guest::guest() {
	strcpy(Name, "");
	strcpy(Gender, "");
	strcpy(Address, "");
	MobileNo = 0;
	strcpy(Email, "");
}
//Overloaded Constructor
void Guest::guest(char gname[],char ggender[], char gaddress[], int gmobileno, char gemail[]) {
	strcpy(Name, gname);
	strcpy(Gender, ggender);
	strcpy(Address, gaddress);
	MobileNo = gmobileno;
	strcpy(Email, gemail);

}
void Guest::setName(char gName[]) {
	//Implementations
}
void Guest:: setGender(char gGender[]) {
	//Implementations
}
void Guest:: setAddress(char gAddress[]) {
	//Implementations

}
void Guest:: setMobileno(int gMobileno) {
	//Implementations

}
void Guest:: setEmail(char gEmail[]){
	//Implementations

}

char Guest:: getName(){
	//Implementations
}

char Guest:: getGender() {
	//Implementations
}

char Guest:: getAddress() {
	//Implementations
}

int Guest:: getMobileno() {
	//Implementations
}

char Guest:: getEmail(){
	//Implementations
}

void Guest::Userregistration() {
	//Implementations
}

Guest:: ~Guest() {

}
