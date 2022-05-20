#include <iostream>
#include <cstring>
#include "Doctor.h"
using namespace std;

payment :: payment ()
{
    strcpy (Doctor_ID, " ");
    strcpy (Doctor_Name, " ");
    strcpy (Doctor_Qualification, " ");
    strcpy (Doctor_Email," ");
    
}
Doctor :: Doctor(const char DocID[],const char DocName,const char DocQualification,const char DocEmail)
{
     strcpy (Doctor_ID,DocID);
     strcpy (Doctor_Name,DocName);
     strcpy (Doctor_Date,DocQualification );
     strcpy (Doctor_Email,DocEmail );
   

}

	 
void  check_report(){
    
  }
    
  
   void Give_opinion(){
    
  }


