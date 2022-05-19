Class Discount{
  private:
        int DiscountID;
        string Amount;
        int UnitDiscount;
 public:
void DisplayDiscount(int discid, float amt, float udis);
void calBalanceAfterDiscount(int amt, float udis);
};
void Discount::calBalanceAfterDiscount (float amt, float udis)
{
    Return Amount – UnitDiscount;
}
void Discount::DisplayDiscount(int discid, float amt, float udis)
{
cout << " DiscountID =" << Discount ID << endl
<< " Amount =" << Amount << endl
<< " UnitDiscount =" << UnitDiscount << endl << endl;
}
int main()
{
Discount D1, D2, D3, D4;
D1. calBalanceAfterDiscount ();
D2. calBalanceAfterDiscount ();
D3. calBalanceAfterDiscount ();
D4. calBalanceAfterDiscount ();
D1. DisplayDiscount ();
D2. DisplayDiscount ();
D3. DisplayDiscount ();
D4. DisplayDiscount ();
cout << endl;
return 0;
}
