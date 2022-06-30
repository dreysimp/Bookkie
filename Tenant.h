#ifndef TENANT_H 
#define TENANT_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Tenant{
  private:
    string firstName;
    string lastName;
    int apartmentNumber;

  public:
    Tenant();
    Tenant(string firstn, string lastn, int apt);
    string getFirstName();
    string getLastName();
    int getAptNumber();
    bool operator<(const Tenant& t) const;
    void displayTenant();
};
#endif
