#include <stdio.h>
#include <stdlib.h>
#include "salaryandsavingmanage.h"
/**
 * @brief We have line function for graphic designing so to have proper console formation for better look
 *
 */
void design()
{
    for (j = 0; j <= m; j++)
    {
        printf("*");
    }
}
/**
 * @brief  Here below we will take all information of person to make our task successful
 *
 */
void rawdata()
{
    printf("Please Enter Your Name \t");
    fgets(NameOfPerson,m,stdin);

    printf("\n AMOUNT PAID FOR FOOD ITEMS \t\t");
    scanf("%f", &Rashion);

    printf("\n AMOUNT PAID FOR CLOTHES \t\t");
    scanf("%f", &Clothing);

    printf("\n AMOUNT PAID FOR STUDY \t\t\t");
    scanf("%f", &Study);

    printf("\n AMOUNT PAID FOR WATER BILLS \t\t");
    scanf("%f", &Water);

    printf("\n AMOUNT PAID FOR ELECTRONIC ITEM \t ");
    scanf("%f", &ElectronicGadgets);

    printf("\n AMOUNT PAID FOR TOURISM \t\t  ");
    scanf("%f", &Trip);
    printf("\n AMOUNT PAID FOR VEHICLE \t\t  ");
    scanf("%f", &Car);

    printf("\n AMOUNT PAID FOR OTHERS \t\t ");
    scanf("%f", &PaidBills);

    printf("\n  Enter Your Monthly Salary \t\t");
    scanf("%f", &PersonSal);

    printf("\n MONEY CREDITED FROM OTHER SOURCE \t\t ");
    scanf("%f", &Multi);
}

/**
 * @brief  saving calculation for person is given in void sense()
 *
 */

void sense()
{

    FinalDebitAmount = Rashion + ElectronicGadgets + Trip + Car + PaidBills + Water + Study + Clothing ;
    FinalCreditAmount = PersonSal + Multi;
    FinalAmount = FinalCreditAmount - FinalDebitAmount;
}

/**
 * @brief  Show fuction will give the Analysis of the Total Income and Total Expenditure 
 *
 */

void show()
{
    design();

    printf("\n Salary and Saving Detector\n");

    design();

    printf("\n");

    printf("\t\t\t\t TOTAL EXPENSE \t\t\t  TOTAL EARNING \n");

    printf("\nAMOUNT PAID FOR FOOD ITEMS\t\tRs% .2f", Rashion);
    printf("\nAMOUNT PAID FOR CLOTHES\t\t\tRs% .2f", Clothing);
    printf("\nAMOUNT PAID FOR STUDY\t\t\tRs% .2f", Study);
    printf("\nAMOUNT PAID FOR WATER BILLS\t\tRs% .2f", Water);
    printf("\nAMOUNT PAID FOR ELECTRONICS ITEM\tRs% .2f", ElectronicGadgets);
    
    printf("\nAMOUNT PAID FOR TOURISM   \t\tRs% .2f", Trip);
    printf("\n AMOUNT PAID FOR VEHICLE\t\tRs% .2f", Car);
    printf("\n  AMOUNT PAID FOR OTHERS\t\tRs% .2f", PaidBills);

    printf("\n");

    printf("\n\n MONEY CREDITED FROM OTHER SOURCE \t\t\t\tRs% .2f", Multi);

    printf("\n\nEnter Your Monthly Salary\t\t\t\t\tRs% .2f", PersonSal);

    printf("\n\n");

    design();

    printf("\n");

    printf("Total(INCOME and EXPENSE)\t\tRs%.2f\t\tRs%.2f", FinalCreditAmount, FinalDebitAmount);
    printf("\n");

    printf("\n ANALYSIS OF SAVINGS \t\tRs%.2f", FinalAmount);

    printf("\n");
    printf("\n");
    design();

}
void savepercent(){
      SavingPercentage = (FinalAmount / FinalCreditAmount)*100;
      printf("\n SAVING PERCENTAGE = %.2f",SavingPercentage);
      if (SavingPercentage<=0)
      {
          printf("\nPLEASE DONT EXPEND MORE BECAUSE YOU HAVE NO SAVING");
      }
      else if (SavingPercentage>=0 && SavingPercentage<=10)
      {
          printf("\n VERY LESS SAVING ! EARN MORE ! EXPEND LESS");
      }
      else if (SavingPercentage>=10 && SavingPercentage<=20)
      {
          printf("\n YOU HAVE LESS SAVING ! EARN MORE ! EXPEND LESS");
      }
      else if (SavingPercentage>=20 && SavingPercentage<=30)
      {
          printf("\n  LESS SAVING ! EARN MONEY  MORE ! EXPEND LITTLE LESS");
          }
      else if (SavingPercentage>=30 && SavingPercentage<=40)
      {
          printf("\n  SAVING IS QUITE GOOD ! EARN MONEY  MORE ! EXPEND LITTLE LESS");
      }
      else if (SavingPercentage>=40 && SavingPercentage<=50)
      {
          printf("\n  SAVING IS QUITE ENOUGH GOOD ! EARN MONEY  MORE AND MORE ! EXPEND LITTLE LESS");
      }
      else if (SavingPercentage>=50 && SavingPercentage<=60)
      {
          printf("\n  HURRAY SAVING IS  GOOD !");
      }
      else if (SavingPercentage>=60 && SavingPercentage<=70)
      {
          printf("\n  YOU ARE SAVING 60-70 PERCENT ! KEEP IT UP");
      }
      else if (SavingPercentage>=70 && SavingPercentage<=80)
      {
          printf("\n  SAVING IS BETTER NOW ! ");
          }

      else if (SavingPercentage>=80 && SavingPercentage<=90)
      {
          printf("\n  SAVING IS GOING BEST NOW ! ");
      }
      else 
      printf("\n WOW NICE ! YOU HAVE COMPLETE GREAT SAVINGS ! ENJOY LIFE ");
      
      
}
void expensepercent(){
      ExpensePercentage = (FinalDebitAmount / FinalCreditAmount)*100;
      printf("\n EXPENSE PERCENTAGE = %.2f",ExpensePercentage);
       if (ExpensePercentage<=0)
      {
          printf("\nPLEASE  EXPEND MORE ");
      }
      else if (ExpensePercentage>=0 && ExpensePercentage<=10)
      {
          printf("\n NICE EXPENDITURE ! EARN MORE ! EXPEND MORE");
      }
      else if (ExpensePercentage>=10 && ExpensePercentage<=20)
      {
          printf("\n EXPENDITURE IS LITTLE LESS OF YOU");
      }
      else if (ExpensePercentage>=20 && ExpensePercentage<=30)
      {
          printf("\n EXPENDITURE IS NOW ALSO LITTLE LESS OF YOU");
      }
      else if (ExpensePercentage>=30 && ExpensePercentage<=40)
      {
          printf("\n YOU SPEND BEST NOW IN RANGE OF 30-40 PERCENT");
      }
      else if (ExpensePercentage>=40 && ExpensePercentage<=50)
      {
          printf("\n OHH! EXPENDITURE GOING ABOVE 40 PERCENT");
      }
      else if (ExpensePercentage>=50 && ExpensePercentage<=60)
      {
          printf("\n OHH! EXPENDITURE GOING ABOVE 50 PERCENT");
      }
      else if (ExpensePercentage>=60 && ExpensePercentage<=70)
      {
          printf("\n OHH! EXPENDITURE GOING ABOVE 60 PERCENT");
      }
      else if (ExpensePercentage>=70 && ExpensePercentage<=80)
      {
          printf("\n OHH! EXPENDITURE GOING ABOVE 70 PERCENT");
      }
      else if (ExpensePercentage>=80 && ExpensePercentage<=90)
      {
          printf("\n OHH! EXPENDITURE GOING ABOVE 80 PERCENT, STOP EXPENDITURE NOW TO MAKE SAVINGS");
      }
      else 
      printf("\n PLEASE DONT EXPEND MORE BECAUSE YOU HAVE LESS THAN 10 PERCENT  SAVING NOW  ");
      design();
}
