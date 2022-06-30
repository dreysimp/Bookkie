#include "AnnualSummary.h"

AnnualSummary::AnnualSummary() {}

// method to display the annual summary
void AnnualSummary::displayAnnualSummary(ExpenseRecord e, RentRecord r) {

  cout << "YTD Annual Summary\n";
  e.categoryExpense();
  cout << "Annual Expenses: " << e.sumOfExpense() << "\n";
  cout << "Annual Payments: " << r.sumOfPayments() << "\n";
  totalBalance(e, r);
}

// method to calculate the total balance of the annual summary
void AnnualSummary::totalBalance(ExpenseRecord e, RentRecord r) {
  float x = e.sumOfExpense();
  float y = r.sumOfPayments();
  float total = y - x;
  if (total < 0) {
    cout << "You lost " << total << "\n";
  } else {
    cout << "You made $" << total << "\n";
  }
}
