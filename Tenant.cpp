#include "Tenant.h"

//constructor for an instance of tenant
Tenant::Tenant(){
  firstName = "John";
  lastName = "Doe";
  apartmentNumber = 0;
}

//constructor for tenant
Tenant::Tenant(string firstn, string lastn, int apt){
  firstName = firstn;
  lastName = lastn;
  apartmentNumber = apt;
}

//method to return the first name of the tenant
string Tenant::getFirstName(){
  return firstName;
}

//method to return the last name of the tenant
string Tenant::getLastName(){
  return lastName;
}

//method to return the apartment number of the tenant
int Tenant::getAptNumber(){
  return apartmentNumber;
}
bool Tenant::operator<(const Tenant& t) const{
  if (apartmentNumber < t.apartmentNumber){
    return true;
  }
  return false;
}

//method to display the tenant information
void Tenant::displayTenant(){
  cout<<firstName<<" "<<lastName<<right<<setw(8)<<apartmentNumber<<"\n";
}
