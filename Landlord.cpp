#include "Landlord.h"
#include "TenantList.h"
#include "ExpenseRecord.h"
#include "RentRecord.h"
#include "AnnualSummary.h"

//constructor for landlord that aks for the landlords login credentials
Landlord::Landlord(){
  user = "john";
  pass = "nguyen";

  for(int x = 0; x < 3; x++){
   
    cout << "Please enter your username: ";
    string u;
    getline(cin, u);
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    
    cout << "Please enter your password: ";
    string p;
    getline(cin, p);
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (loginAttempt(u, p) == true){
      cout << "Welcome John Nguyen!\n";
      homepage();  
      break;
    }
    if(x == 2){
      cout<<"Account Locked. Try again Later";
    }
    else {
      cout << "Invalid login attempt. Please try again.\n" << '\n';
    }
  }
}

//constructor for landlord that creates a username and password for landlord
Landlord::Landlord(string u, string p){
  user= u;
  pass = p;
}
// methos to validate login credentials
bool Landlord::loginAttempt(string u, string p){
  user = "john";
  pass = "nguyen";
  if (user != u || pass != p){
    return false;
    }
 return true; 
}

//method for the homepage that the landlord can access in order to use the program
void Landlord::homepage(){
  TenantList tenantList;
  ExpenseRecord expenseRecord;
  RentRecord rentRecord;
  AnnualSummary annualSummary;

  int choice;
  while(choice != 8){
    cout << "1) Display Tenant List " << endl;
    cout << "2) Display Rent Record " << endl;
    cout << "3) Display Expense Record " << endl;
    cout << "4) Display Annual Summary " << endl;
    cout << "5) Add a tenant " << endl;
    cout << "6) Add a expense " << endl;
    cout << "7) Add a rental payment " << endl;
    cout << "8) Exit " << endl;
    
    
    cout << "Enter a option number: ";
    cin >> choice;

    while(cin.fail()){
      cin.clear();
      cin.ignore();
      cout << "Please enter a number: ";
      cin >> choice;
      }
    
    switch(choice){
      case 1:
      {
        // tenant list
        tenantList.displayTenantList();
        break;
      }
      case 2: 
      {
        // rent record
        rentRecord.displayRentRecord();
        break;
      }
      case 3:
      {
        // expense record
        expenseRecord.displayExpenseRecord();
        break;
      }
      case 4:
      {
      //annual summary
        annualSummary.displayAnnualSummary(expenseRecord, rentRecord);
        //annualSummary.totalBalance(expenseRecord, rentRecord);
        break;
      }
      case 5:
      {
        // add tenant
        tenantList.addTenant();
        break;
      }
      case 6:
      {
        // add expense
        expenseRecord.addExpense();
        break;
      }
      case 7:
      {
        // add rental payment
        rentRecord.addRentPayment(tenantList);
        break;
      }
      case 8:
        {
          cout<<"Goodbye...";
          break;
        }
      default:
      {
        cout<<"Error..";
        break;
      }
    }
  }
}
