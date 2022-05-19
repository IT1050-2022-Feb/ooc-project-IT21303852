#include<iostream>
#include<cstring>

using namespace std;

///class cart implementation
class cart
{
private:
	char CartID[10];
	char ProductID[10];

public:

	// default constructor
	 cart();

	 // overloaded constructor
	 cart(char ccartID[], char pproductID[]);

	 //setters
	 void setCartID(char ccartID);
	 void setProductID(char pproductId);

	 //getters
	 char AddItems();
	 char RemoveItems();
	
	 //destructor
	 ~cart();

};
