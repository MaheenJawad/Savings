#include <iostream>
#include <string>
#include <iomanip>
#include <cmath> 
using namespace std;

int main()

{
  double principalAmount;
  double interestRate;
  double compoundRate;
  double interest;
  double savings;

  cout << "Please enter the principal amount: ";
  cin >> principalAmount;

  cout << "Please enter the interest rate: ";
  cin >> interestRate;

  cout << "Please enter the number of times compounded: ";
  cin >> compoundRate;

  savings = principalAmount * pow(1 + (interestRate / 100) / compoundRate, compoundRate);
  interest = savings - principalAmount;
  cout << "\n" << "\n";


  cout << "Interest Rate: " << setw(21) << right <<interestRate << "%" << endl;
  cout << "Times Compounded:" << setw(20) << right << compoundRate << endl;
  cout << "Principal:  " << setw(15) << right << "$" << setw(10) << right << fixed << setprecision(2)<< principalAmount << endl;
  cout << "Interest:  " << setw(16) << right << "$" << setw(10) << right << interest << endl;
  cout << "Amount in Savings:  " << setw(7) << right << "$" << setw(10) << right << savings << endl;

}