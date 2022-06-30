#ifndef RENTRECORD_H
#define RENTRECORD_H
#include "RentalPayment.h"
#include "TenantList.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

class RentRecord {
  private:

    vector<RentalPayment> rentRecord;
    vector<RentalPayment>::iterator it;
    

  public:
    RentRecord();
    void addRentPayment(TenantList);
    void displayRentRecord();
    float sumOfPayments();
};

#endif
