#include<iostream>
#include<cstring>
#include  "healthyFood.h"
using namespace std;

 healthyFood::healthyFood()
{
	
	strcpy(food_name, "");
	strcpy(food_id, "");
}

 healthyFood::healthyFood( const chast fdID[], const char fdname[] ,admin *ad1)
{
	strcpy(food_id,fdID);
  strcpy(food_name,fdname);
  strcpy(ad,ad1)
};
void healthyfood:: dispayDetails()
{
cout<<"food ID"<< fdID[]<<endl;
cout<<"food name "<< fdname[] << endl;  
  
};
void healthyFood::foodinfo()
{
};


healthyFood::~healthyFood()
{//destructor
};
