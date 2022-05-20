#include<iostream>
#include<cstring>
#include "admin.h"
using namespace std;

admin::admin()
{
	strcpy(admin_Email, "");
	strcpy(admin_Name, "");
	strcpy(admin_id, "");
}

admin::admin(const char adEmail[],const char adname[],const char adID[])
{
	strcpy(admin_Email,adEmail); 
  strcpy(admin_Name,adID);
	strcpy(admin_id,adname);

};
void admin::operate_payment()
{
};
void admin::update_healthyfood()
{

};
admin::~admin()
{

};
//destructor