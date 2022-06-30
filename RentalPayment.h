#ifndef RENTPAYMENT_H 
#define RENTPAYMENT_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class RentalPayment {
  private:
    string firstName;
    string lastName;
    int apartmentNumber;
    int month;
    float amount;

  public:
    RentalPayment();
    RentalPayment(string, string, int, int, float);
    string getMonth(int x);
    float getrent();
    int getaptnum();
    bool operator<(const RentalPayment& r) const;
    void displayRent();

};

#endif
