//created by IT21255106 Nelligahawaththa A.D.T.B
#include <iostream>
#define SIZE 5
class admin
{


private:
	char admin_Name[50];
	char admin_id[6];
	char admin_Email[30];
  healthyFood*healthyfood[SIZE];

	
public:
	admin();
	admin(char adEmail[], char adName[], char adId[]);
	void  operate_payment();
	void update_healthyfood();
	~admin();




};
