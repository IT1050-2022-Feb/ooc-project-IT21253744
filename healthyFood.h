#include<iostream>
#define SIZE 3
class healthyFood
{

	
private:
	char food_id[5];
	char food_name[30];
  admin *ad;

public:
	healthyFood();
	healthyFood(char fname[], char fid[],admin *ad1);
	void foodinfo();
  void displayDetails();
	~healthyFood();

};

