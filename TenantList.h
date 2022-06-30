#ifndef TENANTLIST_H 
#define TENANTLIST_H
#include "Tenant.h"
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class TenantList{
  private:
    int units;
    vector<Tenant> tenantList;

  public:
  TenantList();
  void addTenant();
  bool validate(Tenant t);
  bool search(Tenant t);
  void displayTenantList();

};
#endif
