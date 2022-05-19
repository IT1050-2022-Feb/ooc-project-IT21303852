#include "payment.h"
#include<iostream>
#include<cstring>

using namespace std;

payment :: payment()
{
  strcpy("paymentID","");
  amount = 0 ;
  strcpy("method","");
}

payment :: payment(char ppaymentID[10] , double pamount , char pmethod[10])
{
  strcpy("ppaymentID","paymentID");
  pamount = amount;
  strcpy("pmethod","method");
}

void payment :: setpaymentID(char ppaymentID[10]) 
{
  
}
void payment :: setamount(double pamount) 
{
  
}
      
void payment :: setmethod(char pmethod[10]) 
{
  
}

char payment :: getpaymentID() 
{
  