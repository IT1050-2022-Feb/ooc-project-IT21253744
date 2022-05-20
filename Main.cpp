#include "Guest.h"
#include "User.h"
#include "Dietitians.h"
#include "health.h"
#include "Doctor.h"
#include "Payment.h"
#include "Healthyfood.h"
#include "Admin.h"

#include <iostream>
#include <cstring>

#include "admin.h"
#include "healthyFood.h"
using namespace std;

int main ()
{
  Guest G1 ("Missaka","@Jpl#ba&vb", "missaka.abeyrathne@gmail.com", "Male", 21, 1.674, 65.0);
  User U1 ("A00001");
  
  U1.Display_UID();
  G1.Display_Details();
  
  cout << "Your BMI value : ";
  cout << G1.Calculate_BMI();
HealthReport G2 ("12","Blood shuger","2020/2/2");
 G2.displayDetails();
 
 Dietitians G3 ("11","Vishwa","Vishwa12@gmail.com","Good");
  G3.displayDetails();

admin * admin1 =new
  admin("dushan","AD0001","dushanbandara@gamail.com");
 
healthyFood *healfood =new healthyFood("FD001","healthyfood1");
  admin1->displayDetails();

Doctor*ABC = new Doctor();
Payment *p1 = new Payment
Payment *p2 = new payment
ABC->addPayment(p1, p2);
ABC->displayDoctor();
delete ABC;
p1->displayPayment();
p2->displayPayment();

  Return 0;
};
