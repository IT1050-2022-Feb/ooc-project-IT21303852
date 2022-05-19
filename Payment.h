class Payment
  {
    private:
      char paymentID[10];
      double amount;
      char method[10];
      
    public:

      // default constructor
      Payment();   

      // overloaded constructor
      Payment(char ppaymentID[10] , double pamount , char pmethod[10]);          

      //setters
      void setpaymentID(char ppaymentID[10]) ;
      void setamount(double pamount) ;
      void setmethod(char pmethod[10]) ;

      //getters
      char getpaymentID() ;
      double getamount();
      char getmethod();

      //destructor
      ~payment();
      
  };