#include <iostream>
#include <string>
using namespace std;
int main()
{
	string nameE,employeeID;
	double grossI,allowance,overtime,incomeT,loan,amountS;
	const double BONUS=0.05;

	cout<<"*********************************************************"<<endl;
	cout<<"      Welcome to Infinity Design Solution Sdn. Bhd. "<<endl;
	cout<<"                      Payroll System "<<endl;
	cout<<"*********************************************************"<<endl;
	
	cout<<"Please enter your name: "<<endl;
	getline(cin ,nameE);
	
	cout<<"Please enter your employee ID: "<<endl;
	getline(cin ,employeeID);
	
	cout<<"Please enter your gross income:RM "<<endl;
	cin>>grossI;
	
	cout<<"Please enter your allowance:RM "<<endl;
	cin>>allowance;
	
	cout<<"Please enter your overtime: RM "<<endl;
	cin>>overtime;
	
	cout<<"Please enter your income tax: RM "<<endl;
	cin>>incomeT;
	
	cout<<"Please enter your loan: RM "<<endl;
	cin>>loan;
	
	cout<<"Please enter your amount sale: RM"<<endl;
	cin>>amountS;
	
	cout<<"*********************************************************" <<endl;
	cout<<" Your details information are:"<<endl;
	cout<<" Name: "<< nameE <<endl;
	cout<<" Employee ID: "<< employeeID <<endl;
	cout<<" Gross Income: "<< grossI <<endl;
	cout<<" Allowance: "<< allowance <<endl;
	cout<<" Overtime: "<< overtime <<endl;	
	cout<<" Income Tax: "<< incomeT <<endl;	
	cout<<" Loan: "<< loan <<endl;	
	cout<<" Amount Sale: "<< amountS <<endl;
	
	amountS=amountS*BONUS;
	cout<<"Bonus Sale :"<<amountS<<endl;
	
	cout<<"*********************************************************" <<endl;
	
	return 0;	
}

