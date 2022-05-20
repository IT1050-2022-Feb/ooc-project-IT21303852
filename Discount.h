Class Discount{
  private:
        char DiscountID[10];
        double Amount;
        double UnitDiscount;
 public:
  Discount();
    
  Discount(int pDiscountID , char pamount , int punitDiscount);
    
  void setDiscountID( char pDiscountID );
  void setAmount(double pamount) ;
  void setUnitDiscount(double unitDiscount) ;

  char getDiscountID();
  double setAmount();
  double setUnitDiscount();

  ~Discount();
};