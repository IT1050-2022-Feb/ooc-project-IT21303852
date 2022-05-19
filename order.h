class order
  {
    private:
      char orderID[10];
  
    public:
      // default constructor
      order();   

      // overloaded constructor
      order( char porderID[] );      

      //setters
      void setorderID(char porderID); 
      //getters
      char getorderID();

      void deleteOrder(  );
      void culcAmount();

      //destructor
      ~order();
      
  };
