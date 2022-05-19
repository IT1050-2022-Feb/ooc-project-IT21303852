class Order
  {
    private:
      char orderID[10];
      
      
    public:
      // default constructor
      Order();   

      // overloaded constructor
      Order( char porderID[] );      

      //setters
      void setorderID(char porderID); 
      
      //getters
      char getorderID();

      void deleteOrder(  );
      void culcAmount();

      //destructor
      ~Order();
    
  };
