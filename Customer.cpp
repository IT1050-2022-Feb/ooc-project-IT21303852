#include <iostream>
#include "customer.h"
#include <cstring>

using namespace std;

void Customer :: customer() {
	strcpy(Username, "");
	strcpy(Password, "");
	
}
void Customer :: customer(char Cusername[], char Cpassword[], char name[], char gender[], char address[], int mobileno, char email[]){
	
  strcpy(Username, Cusername);
	strcpy(Password, Cpassword);
	strcpy(Name, name);
	strcpy(Gender, gender);
	strcpy(Address, address);
	MobileNo = mobileno;
	strcpy(Email, email);
  
}

void Customer::setUsername(char uname[]) {
	//Implementations
}

void Customer::setPassword(char upass[]) {
	//Implementations
}

char Customer::getUsername() {
	//Implementations
}

char Customer::getPassword() {
	//Implementations
}

void login(char uname[], char upass[]) {
	//Implementations
}

Customer :: ~Customer() {

}
