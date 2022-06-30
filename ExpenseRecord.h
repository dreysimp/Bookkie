#ifndef EXPENSERECORD_H 
#define EXPENSERECORD_H
#include "Expense.h"
#include <string>
#include <iostream>
#include <cctype>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

class ExpenseRecord {
    private:

      vector<Expense> expenseRecord;

    public:
      ExpenseRecord();
      void displayExpenseRecord();
      void addExpense();
      void categoryExpense();
      float sumOfExpense();

};

#endif
