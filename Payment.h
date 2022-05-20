class payment
{

protected :
	char Payment_Id [6];
	char Payment_Type [8];
	char Payment_Date [10];
	char Payment_Amount[5];
	
public :

	payment();
	payment(const char PayID[],const char PayType,const char PayDate,const char PayAmount);
	void SetPaymentdetails();
	void DisplayPaymentdetails();
};