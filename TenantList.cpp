#include "TenantList.h"

int units = 20;

//constructor for an instrance of tenant list
TenantList::TenantList(){
  units = 20;

}

//method to display the tenant list
void TenantList::displayTenantList(){
  cout<< "Tenant Name \t Apt no. "<<endl;
  //cout << setfill ('-') << setw (35)<<"\n"<<endl;
  for(auto x = tenantList.begin(); x != tenantList.end(); x++){
    x->displayTenant();
  }
  cout<<endl;
} 

//method to add a tenant to the tenant list
void TenantList::addTenant(){
  string addtenant = "y";
  while (addtenant == "y"){
    cout<<"Enter the tenants first name: ";
    string firstn;
    cin>>firstn;

    while(cin.fail()){
      cin.clear();
      cin.ignore();
      cout << "Please enter a string: ";
      cin >> firstn;
    }
  
    cout<<"Enter the tenants last name: ";
    string lastn;
    cin>>lastn;

    while(cin.fail()){
      cin.clear();
      cin.ignore();
      cout << "Please enter a string: ";
      cin >> lastn;
    }
    
    cout<<"Enter their apartmentNumber: ";
    int aptN;
    cin>>aptN;

    while(cin.fail()){
      cin.clear();
      cin.ignore();
      cout << "Please enter an integer: ";
      cin >> aptN;
    }
  
    Tenant temp(firstn, lastn, aptN);
    if(validate(temp) == false){
      cout<<"Tenant could not be added. \n";
    }
    else{
      tenantList.push_back(temp);
      cout<<"Tenant has been succesfully added. \n";
      sort(tenantList.begin(), tenantList.end());
      units--;
    }
    cout<<"Would you like to enter another Tenant y/n: ";
    cin>>addtenant;
  }
}

//method to validate that a tenant is on the tenant list
bool TenantList::validate(Tenant t){
  for(auto x = tenantList.begin(); x != tenantList.end(); x++){
    if(x->getAptNumber() == t.getAptNumber()){
      cout<< "Apartment Number is not available. \n";
      return false;   
    }
    if(x->getFirstName() == t.getFirstName() && x->getLastName() == t.getLastName()){
      cout<<"Tenant Name already in Tenant List. \n";  
      return false;
    }
  }
  if(units == 0){
    cout<<"There are no more available units.\n";
    return false;
  }
  return true;
}

//method to search for a tenant on the tenant list
bool TenantList::search(Tenant t)
{
  for(auto x = tenantList.begin(); x != tenantList.end(); x++)
    {
      if(x->getAptNumber() == t.getAptNumber() && x->getFirstName() == t.getFirstName() && x->getLastName() == t.getLastName()){
        return true;
      }
    }
  return false;
}
