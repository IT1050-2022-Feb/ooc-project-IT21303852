#include "Payment.h"
#include<iostream>
#include<cstring>

using namespace std;

Payment :: Payment()
{
  strcpy("paymentID","");
  amount = 0 ;
  strcpy("method","");
}

Payment :: Payment(char ppaymentID[10] , double pamount , char pmethod[10])
{
  strcpy("paymentID","ppaymentID");
  pamount = amount;
  strcpy("method","pmethod");
}

void Payment :: setpaymentID(char ppaymentID[10]) 
{
  
}
void Payment :: setamount(double pamount) 
{
  
}
      
void Payment :: setmethod(char pmethod[10]) 
{
  
}

char Payment :: getpaymentID() 
{
  