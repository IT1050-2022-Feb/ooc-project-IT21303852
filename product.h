class Product{
  private:
      char productID[5];
      char name[20];
      char type[20];
  	  double amount;
      int quantity;

  public:
      Product();
      Product(char pProductID[], char pName[], char pType[], double pAmount, int pQuantity);
      void setProductID(char pProductID[]);
      void setName(char pName[]);
      void setType(char pType[]);
      void setAmount(double pAmount);
      void setQuantity(int pQuantity);
      
      char getProductID();
      char getName();
      char getType();
      double getAmount();
      int getQuantity();

      ~Product();
};