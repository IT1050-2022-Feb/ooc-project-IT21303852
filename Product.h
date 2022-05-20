class Product{
//private attributes
  private:
      char productID[5];
      char name[20];
      char type[20];
  	  double amount;
      int quantity;

  public:
      Product(); //default constructor
      Product(char pProductID[], char pName[], char pType[], double pAmount, int pQuantity); //overloaded constructor

// setters
      void setProductID(char pProductID[]);
      void setName(char pName[]);
      void setType(char pType[]);
      void setAmount(double pAmount);
      void setQuantity(int pQuantity);

//getters
      char getProductID();
      char getName();
      char getType();
      double getAmount();
      int getQuantity();
//destructor
      ~Product();
};