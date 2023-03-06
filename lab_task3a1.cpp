#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ID;
    const double bonus=0.05;
    double grossI,allowance,overtime,incomeT,loan,sale_amount;
   

    
    
    
    
    cout<<"Please enter your employee ID: "<<endl;
    getline(cin ,ID);
    
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

    cout<<"Please enter your sales amount: RM "<<endl;
    cin>>sale_amount;

    double deduct=incomeT+loan;
    double total_income=(grossI+allowance+overtime);
    double net_salary=total_income-deduct;
    
    
    
    
    cout<<" Your details information are:"<<endl;
    
    cout<<" Employee ID: "<< ID <<endl;
    cout<<" Gross Income RM: "<< grossI <<endl;
    cout<<" Allowance RM: "<< allowance <<endl;
    cout<<" Overtime RM: "<< overtime <<endl;   
    cout<<" Income Tax RM: "<< incomeT <<endl;  
    cout<<" Loan RM: "<< loan <<endl;   
    cout<<" Total Deduction RM: "<< deduct<<endl;
    cout<<" Total Income RM: "<< total_income <<endl;
    cout<<" Net Salary RM: "<< net_salary <<endl;   

    
    
    
    
    return 0;   
}
