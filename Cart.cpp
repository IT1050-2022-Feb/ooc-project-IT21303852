#include "cart.h"
#include<iostream>
#include<cstring>

using namespace std;

// default constructor implementation
cart::cart()
{
	strcpy(CartID, "");
	strcpy(ProductID, "");
}

// overloaded constructor implementation
cart::cart(char ccartID[], char pproductID[])
{
	strcpy(CartID, ccartID);
	strcpy(ProductID, pproductID);
}

void cart::setCartID(char ccartID[])
{
  //Implementations
}

void cart::setProductID(char pproductId[])
{
 //Implementations
}

char cart::AddItems()
{
  //Implementations
}

char cart::RemoveItems()
{
  //Implementations
}