#include "Product.h"
#include <iostream>
#include <cstring>
using namespace std;

//default constructor
Product::Product(){
  
      strcpy(productID, " ");
      strcpy(name, " ");
      strcpy(type, " ");
  	  amount = 0;
      quantity = 0;
  
}

//overloaded constructor
Product::Product(char pProductID[], char pName[], char pType[], double pAmount, int pQuantity){
  
      strcpy(productID, pProductID);
      strcpy(name, pName);
      strcpy(type, pType);
  	  amount = pAmount;
      quantity = pQuantity;
  
}

void Product::setProductID(char pProductID[]){

      //method implementation
  
}

void Product::setName(char pName[]){

      //method implementation
        
}

void Product::setType(char pType[]){

        //method implementation
        
}

void Product::setAmount(double pAmount){

        //method implementation
        
}

void Product::setQuantity(int pQuantity){

        //method implementation
        
}
      
char Product::getProductID(){

        //method implementation
        
}

char Product::getName(){
        
        //method implementation
        
}

char Product::getType(){

        //method implementation
        
}

double Product::getAmount(){

        //method implementation
        
}

int Product::getQuantity(){

        //method implementation
        
}

Product::~Product(){

        //method implementation
        
}