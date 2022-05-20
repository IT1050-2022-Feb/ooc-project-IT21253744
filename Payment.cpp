
#include <iostream>
#include <cstring>
#include "payment.h"
using namespace std;

payment :: payment ()
{
    strcpy (Payment_Id, " ");
    strcpy (Payment_Type, " ");
    strcpy (Payment_Date, " ");
    strcpy (Payment_Amount," ");
    
};
payment::payment(const char PayID[],const char PayType[],const char PayDate[],const char PayAmount[])
{
     strcpy (Payment_Id,PayID);
     strcpy (Payment_Type,PayType);
     strcpy (Payment_Date,PayDate );
     strcpy (Payment_Amount,PayAmount );
   

};

	void payment :: SetPaymentdetails(){
    
  }
	void payment :: DisplayPaymentdetails(){
    
  };

