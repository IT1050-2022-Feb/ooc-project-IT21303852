#include <iostream>
#include <cstring>
#include "product.h"
#include "order.h"
#include "Discount.h"
#include "Guest.h"
#include "Customer.h"
#include "pustomer.h"
#include "Feedback.h"
using namespace std;

int main(){

  Guest *g1, *g2;
  g1 = new Guest();
  c2 = new Guest("M. B. M Mushtaq", "Male", "101, Anuradhapura", 0777909315, "mushtaq123@gmail.com");
  
  Customer *c1, *c2;
  c1 = new Customer();
  c2 = new Customer("Mushtaq", "Burhan123", "M. B. M Mushtaq", "Male", "101, Anuradhapura", 0777909315, "mushtaq123@gmail.com");

  Product *p1, *p2;
  p1 = new Product();
  p2 = new Product("101", "Acoustic Guitar", "Guitar", 10000, 12);

  Order *o1, *o2;
  o1 = new Order();
  o2 = new Order("1000");

  Payment *p1, *p2;
  o1 = new Payment();
  o2 = new Payment("A200", 8000, "Credit card");

  Cart *cart1, *cart2;
  o1 = new Cart();
  o2 = new Cart("103", "101");

  Feedback *f1, *f2;
  f1 = new Feedback();
  f2 = new Feedback("A01" , char "Quality product but packaging can improve ");
  
  Discount *d1, *d2;
  d1 = new Discount();
  d2 = new Discount("104", 200, 100);

}
