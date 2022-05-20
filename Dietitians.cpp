#include <iostream>
#include <cstring>
#include "Dietitians.h"
using namespace std;

//Defualt


Dietitians::Dietitians(){
  strcpy(dietitianId,"");
  strcpy(dietitianName,"");
  strcpy(dietitianEmail,"");
  strcpy(dietitianQualification,"");
  
}
//overlord implementation
Dietitians::Dietitians(const char dieId[], const char dieName[], const char dieEmail[], const char dieQuali[] ){
  strcpy(dietitianId,dieId);
  strcpy(dietitianName,dieName);
  strcpy(dietitianEmail,dieEmail);
  strcpy(dietitianQualification,dieQuali);
}
void Dietitians::updateDietPlan(){
  
}
void Dietitians::displayDetails(){
  cout <<"Dietitian ID : "<< dietitianId <<endl;
  cout <<"Dietitian Name : "<<dietitianName <<endl;
  cout <<"Dietitian Email : "<<dietitianEmail <<endl;
  cout <<"Dietitian Qualification : "<<dietitianQualification<<endl;
}
Dietitians::~Dietitians(){
  //Destructor
}

int main() {
  Dietitians G3 ("11","Vishwa","Vishwa12@gmail.com","Good");
  G3.displayDetails();

  return 0;
};