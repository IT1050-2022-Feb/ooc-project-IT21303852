Class Discount{
  private:
        int DiscountID;
        char Amount;
        int UnitDiscount;
 public:
  Discount();
    
  Discount(int pDiscountID , char pamount , int punitDiscount);
    
  void setDiscountID( int pDiscountID );
  void setAmount(char pamount) ;
  void setUnitDiscount(ppudiscount) ;

  int getDiscountID();
  char setAmount();
  int setUnitDiscount();

  ~Discount();
};