class HealthReport {
protected:
  char reportId[6];
  char reportDetails[20];
  char reportDate[30];
  Dietitians *dietitians[2];
  

public:
  HealthReport();
  HealthReport(const char reID[], const char reDE[], const char reDate[]);
  void gethealthyReport();
  void viewhealthyReport();
  void displayDetails();

  void addDietitians(Dietitians *d1,Dietitians *d2){
    dietitians[0] = d1;
    dietitians[1] = d2;
  }
  ~HealthReport();
};