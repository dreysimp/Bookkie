#include "RentRecord.h"

//constructor for an instance of rent record
RentRecord::RentRecord() {
  
}

//method to add a rental payment to the rent record
void RentRecord::addRentPayment(TenantList tl){
  string addRent = "y";
  while(addRent == "y")
    {

      cout << "Enter the tenant's first name: ";
      string firstn;
      cin >> firstn;

      while(cin.fail()){
      cin.clear();
      cin.ignore();
      cout << "Please enter a string: ";
      cin >> firstn;
      }

      cout << "Enter the tenant's last name: ";
      string lastn;
      cin >> lastn;

      while(cin.fail()){
      cin.clear();
      cin.ignore();
      cout << "Please enter a string: ";
      cin >> lastn;
      }

      cout << "Enter the tenant's apartment number: ";
      int aptnumber;
      cin >> aptnumber;

      while(cin.fail()){
      cin.clear();
      cin.ignore();
      cout << "Please enter an integer: ";
      cin >> aptnumber;
      }

      Tenant temp(firstn, lastn, aptnumber);
      if(tl.search(temp) == false)
      {
        cout << "That tenant does not exist in the system. \n";
      }
      else{

        cout << "Enter the payment month(1-12): ";
        int m;
        cin >> m;

        while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout << "Please enter a number(1-12): ";
        cin >> m;
        }
  
        cout << "Enter the payment amount: ";
        float a;
        cin >> a;

        while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout << "Please enter a number: ";
        cin >> a;
        }
  
        RentalPayment rent(firstn, lastn, aptnumber, m, a);
        rentRecord.push_back(rent);
        sort(rentRecord.begin(), rentRecord.end());
        cout << "Rental Payment has been successfully added \n";}
      
      cout << "Would you like to add another rental payment? y/n: ";
      cin >> addRent;
    }
}

//method to display the rental record
void RentRecord::displayRentRecord() {
  cout<<"AptNo   Month  \t Amount\n";
  for(auto it = rentRecord.begin(); it != rentRecord.end(); it++){
    it->displayRent();
  }
}

float RentRecord::sumOfPayments(){
  float sum = 0;
  for(RentalPayment & r: rentRecord){
    sum += r.getrent();
  }
  return sum;
}


