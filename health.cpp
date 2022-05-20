#include "health.h"
#include <cstring>
#include <iostream>
using namespace std;
HealthReport::HealthReport() {
  strcpy(reportId, "");
  strcpy(reportDetails, "");
  strcpy(reportDate, "");
}
HealthReport::HealthReport(const char reID[], const char reDE[],
                           const char reDate[]) {
  strcpy(reportId, reID);
  strcpy(reportDetails, reDE);
  strcpy(reportDate, reDate);
}
void HealthReport::gethealthyReport() {
  
}
void HealthReport::viewhealthyReport() {
  
}
void HealthReport::displayDetails(){
  cout<<"Report ID : "<< reportId <<endl;
  cout<<"Report Details : "<< reportDetails <<endl;
  cout<<"Report Date : "<< reportDate <<endl;
}
HealthReport::~HealthReport() {
  
}
