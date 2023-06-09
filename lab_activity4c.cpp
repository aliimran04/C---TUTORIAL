#include <iostream>
#include <string>

/*
struct Employee
{
char name[20];
int staffID;
float salary;
float OT1, OT2, OT3;
} staff;

int main()
{
std::cout<<"Input name : ";
std::cin>>staff.name;
std::cout<<"Input staff ID : ";
std::cin>>staff.staffID;
std::cout<<"Input salary : ";
std::cin>>staff.salary;
std::cout<<"Input OT 1 : ";
std::cin>>staff.OT1;
std::cout<<"Input OT 2 : ";
std::cin>>staff.OT2;
std::cout<<"Input OT 3 : ";
std::cin>>staff.OT3;
std::cout<<"\nName : "<<staff.name<<std::endl;
std::cout<<"Staff ID : "<<staff.staffID<<std::endl;
std::cout<<"Salary : RM "<<staff.salary<<std::endl;
std::cout<<"Overtime 1 : "<<staff.OT1<<std::endl;
std::cout<<"Overtime 2 : "<<staff.OT2<<std::endl;
std::cout<<"Overtime 3 : "<<staff.OT3<<std::endl;
return 0;
}
*/

/*
struct Employee
{
char name[20];
int staffID;
double salary;
double OT1, OT2, OT3;
} ;
Employee staff[2] = {{"Ahmad", 1234, 3500.65, 45.00, 25.00,
56.55},{"Albab", 3556, 2300.55, 45.45, 55.00, 65.20}};

int main()
{
for(int i=0; i<2; i++)
{
std::cout<<"\nName : "<<staff[i].name<<std::endl;
std::cout<<"Staff ID : "<<staff[i].staffID<<std::endl;
std::cout<<"Salary : RM "<<staff[i].salary<<std::endl;
std::cout<<"Overtime 1 : "<<staff[i].OT1<<std::endl;
std::cout<<"Overtime 2 : "<<staff[i].OT2<<std::endl;
std::cout<<"Overtime 3 : "<<staff[i].OT3<<std::endl<<std::endl;
}
return 0;
}
*/
/*

using namespace std;

struct Employee
{
string name;
int staffID;
float salary;
float OT1, OT2, OT3;
} info[10];




int main()
{

for (int i=0;i<10;i++)
{

cout<<"Input name for person "<<i+1<<": ";
cin>>ws;
getline(cin,info[i].name);
cout<<"staff ID : ";
cin >> info[i].staffID;
cout << "Salary: ";
cin>>info[i].salary;
cout << " OT 1 payment : ";
cin>>info[i].OT1;
cout << " OT 2 payment : ";
cin>>info[i].OT2;
cout << " OT 3 payment : ";
cin>>info[i].OT3;
}

for(int a=0; a<10; a++)
{
cout<<"Name : "<<info[a].name<<endl;
cout<<"Staff ID : "<<info[a].staffID<<endl;
cout<<"Salary : RM "<<info[a].salary<<endl;
cout<<"Overtime 1 : "<<info[a].OT1<<endl;
cout<<"Overtime 2 : "<<info[a].OT2<<endl;
cout<<"Overtime 3 : "<<info[a].OT3<<endl<<endl;
}
return 0;
}
*/


using namespace std;
struct Employee
  {
    string name;
    int staffID;
    float basicSalary;
    float allowance;
    float deductKWSP;
    float gross;

  }info[5];

int main() //4a iv
{
  
const double kwsp=0.1;
  
  

for (int i=0;i<5;i++)
{

cout<<"Input name for person "<<i+1<<": ";
cin>>ws;
getline(cin,info[i].name);
cout<<"staff ID : ";
cin >> info[i].staffID;
cout << "Salary: ";
cin>>info[i].basicSalary;

info[i].deductKWSP=info[i].basicSalary*kwsp;
cout << " Allowance : ";
cin>>info[i].allowance;

info[i].gross=(info[i].basicSalary+info[i].allowance)-info[i].deductKWSP;
}

for(int a=0; a<5; a++)
{
cout<<"Name : "<<info[a].name<<endl;
cout<<"Staff ID : "<<info[a].staffID<<endl;
cout<<"Salary : RM "<<info[a].basicSalary<<endl;
cout<<"KWSP Deduction : "<<info[a].deductKWSP<<endl;
cout<<"Allowance : "<<info[a].allowance<<endl;
cout<<"Gross Salary : "<<info[a].gross<<endl<<endl;
}
   
    return 0;
} 




