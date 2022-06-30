#ifndef LANDLORD_H 
#define LANDLORD_H
#include <string>
#include <iostream>
using namespace std;

class Landlord{
  private:
    string user; 
    string pass;
  public:
    Landlord();
    Landlord(string user, string pass);
    void homepage();
    bool loginAttempt(string u, string p);
};


#endif
