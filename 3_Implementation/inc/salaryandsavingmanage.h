#ifndef SALARYANDSAVINGMANAGE_DOT_H // Simple "include guard" as we all know
#define SALARYANDSAVINGMANAGE_DOT_H // prevents the file from being included twice.
// if we include same header files again and again then we have memory allocation issue
#define limit 10
#define m 70
#define EMPLOYEE_PERCENTAGE 12.5f
#define EMPLOYER_PERCENTAGE 12.0f
struct involve
{
    char NameOfPerson[50];
    float month;
};
float Rashion;
float Clothing;
float Study;
float Water;
float ElectronicGadgets;
float Trip;
float Car;
float PaidBills;
float PersonSal;
float Multi;
int j,n ;
float FinalCreditAmount;
float FinalDebitAmount;
float FinalAmount;
float SavingPercentage;
float ExpensePercentage;
char NameOfPerson[m];
char Month[m];
void show();
void rawdata();
void design();
void sense();
void savepercent();
void expensepercent();
#endif