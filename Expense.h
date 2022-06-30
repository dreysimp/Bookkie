#ifndef EXPENSE_H 
#define EXPENSE_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Expense {
    private:
      int month;
      int day;
      string payee;
      float amount;
      string budgetCategory;

    public:
      Expense();
      Expense(int m, int d, string p, float a, string c);
      float getAmount();
      string getCategory();
      //void insertExpense(Expense t);
      void displayExpense();
};

#endif
