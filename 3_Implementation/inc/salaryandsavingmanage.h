/**
 * @file salaryandsavingmanage.h
 * @ROHIT VARSHNEY
 * @brief Header file for SalaryAndSavingManagement application with user defined datatypes and functions calls for including functions with this header file
 *
 */

#ifndef SALARYANDSAVINGMANAGE_DOT_H // Simple "include guard" as we all know
#define SALARYANDSAVINGMANAGE_DOT_H // prevents the file from being included twice.
// if we include same header files again and again then we have memory allocation issue
#define limit 10
#define m 70
#define EMPLOYEE_PERCENTAGE 12.5f
#define EMPLOYER_PERCENTAGE 12.0f
/**
* @brief taking input from user as name and montly salary in struct involve function
*/
struct involve
{
    char NameOfPerson[50];
    float month;
};
/**
* @brief defining all float variables to take input by user
* @param[in] operand1 as float Rashion
* @param[in] operand2 as float Clothing;
* @param[in] operand3 as float Study;
* @param[in] operand4 as float Water;
* @param[in] operand5 as float ElectronicGadgets;
* @param[in] operand6 as float Trip;
* @param[in] operand7 as float Car;
* @param[in] operand8 as float PaidBills;
* @param[in] operand9 as float PersonSal;
* @param[in] operand10 as float Multi;
* @return results of function definition after calling it from header file
*/
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
int j, n;
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
void bonus();
void penalty();
void perks();
void allowances();
#endif
