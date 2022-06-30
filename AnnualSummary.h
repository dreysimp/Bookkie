#ifndef ANNUALSUMMARY_H
#define ANNUALSUMMARY_H
#include "ExpenseRecord.h"
#include "RentRecord.h"
#include "Expense.h"
#include "RentalPayment.h"
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class AnnualSummary {
private:
    float rentSum;
    float expenseSum;
    string year;
    float balance;

public:
    AnnualSummary();
    void totalBalance(ExpenseRecord e , RentRecord r);
    void displayAnnualSummary(ExpenseRecord e, RentRecord r);
};

#endif
