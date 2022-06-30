#include "RentalPayment.h"

//constructor for an instance of rental payment
RentalPayment::RentalPayment() 
{
  firstName = "Jane";
  lastName = "Doe";
  month = 1;
  apartmentNumber = 0;
  amount = 0;
  
}

//constructor for rental payment
RentalPayment::RentalPayment(string f, string l, int apt, int m, float am)
{
  firstName = f;
  lastName = l;
  apartmentNumber = apt;
  month = m;
  amount = am;
}

//method to return the rent amount
float RentalPayment::getrent(){
  return amount;
}

//method to return the month of the rental payment
string RentalPayment::getMonth(int x){
  string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug","Sept","Oct","Nov", "Dec"};
  
  return months[x - 1];
}

//method to return the apartment number of the payment
int RentalPayment::getaptnum(){
  return apartmentNumber;
}
bool RentalPayment::operator<(const RentalPayment& t) const{
    if (apartmentNumber < t.apartmentNumber){
    return true;
  }
  return false;
}

//method to display the rental payment
void RentalPayment::displayRent(){

cout<<"\t"<<apartmentNumber<<"\t"<<this->getMonth(month)<<right<<setw(10)<<amount<<"\n";
}
