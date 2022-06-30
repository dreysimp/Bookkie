#include "ExpenseRecord.h"
#include<limits>
//constructor for expense record
ExpenseRecord::ExpenseRecord() {
  
}

//method to display expense record
void ExpenseRecord::displayExpenseRecord() {
    cout<<"Expense Record \n";
    cout<< "Month \t Day\tAmount \t Payee \t\t\t Budget Category "<<endl;
  //cout << setfill ('-') << setw (35)<<"\n"<<endl;
  for(auto x = expenseRecord.begin(); x != expenseRecord.end(); x++){
    x->displayExpense();
  }
  cout<<endl;
  
}

//method to calculate the sum of the expenses
float ExpenseRecord::sumOfExpense(){
  float sum = 0;
  for(auto i = expenseRecord.begin(); i != expenseRecord.end(); i++){
      sum += i->getAmount();
  }
  return sum;
}

//method to display the sum of expenses for each category
void ExpenseRecord::categoryExpense(){ 
  vector<string> category;
  for(Expense& c : expenseRecord){
    if(count(category.begin(), category.end(), c.getCategory())){
      continue;
    }
    else{
      category.push_back(c.getCategory());
    }
  } 
  float sum;
  for(auto& x : category){
    for(Expense& e : expenseRecord){
      if(e.getCategory() == x){
        sum+= e.getAmount(); 
      }
    }
    cout<<x<<"\t"<<sum<<"\n";
    sum = 0;
  }
}

//method to add an expense 
void ExpenseRecord::addExpense(){
  string addExpense = "y";
  while (addExpense == "y"){
    //availableUnits();

    cout<<"Enter the expense month(1-12): ";
    int emonth;
    cin>> emonth;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(cin.fail()){
      cin.clear();
      cin.ignore();
      cout << "Please enter a number: ";
      cin >> emonth;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout<<"Enter the expense day: ";
    int eday;
    cin>>eday;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    while(cin.fail()){
      cin.clear();
      cin.ignore();
      cout << "Please enter a number: ";
      cin >> eday;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout<<"Enter the expense payee: ";
    string epayee;
    getline(cin,epayee);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(cin.fail()){
      cin.clear();
      cin.ignore();
      cout << "Please enter a string: ";
      getline(cin,epayee);
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout<<"Enter the expense amount: ";
    float eamount;
    cin>>eamount;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(cin.fail()){
      cin.clear();
      cin.ignore();
      cout << "Please enter a number: ";
      cin >> eamount;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout<<"Enter the expense category: ";
    string ecategory;
    cin>>ecategory;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(cin.fail()){
      cin.clear();
      cin.ignore();
      cout << "Please enter a string: ";
      cin >> ecategory;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  
    Expense temp(emonth, eday, epayee, eamount, ecategory);
    expenseRecord.push_back(temp);
    cout<<"Expense has been succesfully inserted. \n";
    
    cout<<"Would you like to enter another Expense y/n: ";
    cin>>addExpense;
  }
}
