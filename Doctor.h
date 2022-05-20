#include <iostream>
using namespace std;

class Doctor
{
protected :

  Payment *Pay[2] ;

	char Doctor_ID[6];
	char Doctor_Name[];
	char Doctor_Qualification[];
	char Doctor_Email[];
	
public :
  Payment(){};
void addPayment(Payment *pay1, Payment *pay2)

pay[0] = pay1;
pay[1] = pay2;

	Doctor();
	Doctor(char DocID[],char DocName,char DocQualification,char DocEmail[]);
	void check_report():
	void Give_opinion();
	
		
}