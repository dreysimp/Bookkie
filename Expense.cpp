#include "Expense.h"

//constructor for expense
Expense::Expense() {

}
//constructor for expense
Expense::Expense(int m, int d, string p, float a, string c){
  month = m;
  day = d;
  payee = p;
  amount = a;
  budgetCategory = c;
}

//method to return expense amount
float Expense::getAmount(){
  return amount;
}
//method to return category of budget
string Expense::getCategory(){
  return budgetCategory;
}

//method to display expenses
void Expense::displayExpense(){
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug","Sept","Oct","Nov", "Dec"};
  
  cout<<months[month -1]
    <<setw(8)<<right<<day
    <<setw(8)<<right<<amount
    <<setw(19)<<right<<payee
    <<setw(15)<<right<<budgetCategory<<"\n";
}
