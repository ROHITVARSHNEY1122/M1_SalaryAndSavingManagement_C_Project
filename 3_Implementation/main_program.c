#include <stdio.h>
#include <stdlib.h>
#include "salaryandsavingmanage.h"
int main()
{
   // To make multifile program , we call function inside main program and function definition is given in salaryandsavingmanage.c file
   struct involve;
   design();
   printf("\n\t\t\t Salary and Saving Detector  \n ");
   design();
   printf("\n");
   design();
   rawdata();
   sense();
   savepercent();
   expensepercent();
   /**
    * @brief Just do have a quick calculate over salary amount debit , credit and saving amount information
    *
    */
   system("cls");
   show();
   /**
    * @brief HERE MAINLY show WILL GIVE OUTPUT OF WHOLE ANALYSIS
    *
    */
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   return 0;
}
