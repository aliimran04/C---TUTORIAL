#include <iostream>

/* int main()
{

int markah[2][3];




for(int i=0;i<=1;i++)
{
    

    for(int a=0;a<=2;a++)
{
    std::cout<<"Sila masukkan markah quiz anda : ";
    std::cin>>markah[i][a];
    std::cout<<markah[i][a];
}
}





return 0;
} */

/*int main (){
    const int NUM=10;
    int salary[NUM] = {2000, 3400, 1900, 2500, 3300, 1238, 3200, 2700,
3600, 4500};
std::cout<<"Staff ID \tSalary"<<std::endl;
for (int i=0; i<NUM; i++)
{
std::cout<<i<<"\t\t"<<salary[i]<<std::endl;
}
}*/

//Soalan 4(aii)//
/*int main(){

const int NUM=11;
int salary[NUM];
for (int i=0;i<NUM;i++)
{
std::cout<<"Input salary for staff ID "<<i<<" : ";
std::cin>>salary[i];
}
std::cout<<"Staff ID \tSalary"<<std::endl;
for (int z=0;z<NUM;z++)
{
std::cout<<z<<"\t\t"<<salary[z]<<std::endl;
}
} */
/*int main(){
int OT[10][3];
for (int i=0; i<=9; i++)
{
for (int j=0; j<=2; j++)
{
std::cout<<"Input OT payment "<<j+1<<" for staff ID "<<i+1<<" : ";
std::cin>>OT[i][j];
}
}



std::cout<<"Staff ID \tOT 1 \t\tOT 2 \t\tOT 3"<<std::endl;
for (int i=0; i<=9; i++)
{
std::cout<<i+1<<"\t";
for (int j=0; j<=2; j++)
{
std::cout<<"\t"<<OT[i][j]<<" \t";
}
std::cout<<std::endl;
}
return 0;
}*/

int main() //4a iv
{
  double staff[5][4];
  const double kwsp=0.1;
  
  
  for(int a=0;a<5;a++)
  {
  std::cout<<"Staff #"<<a+1<<" Enter basic salary: RM";
  std::cin>>staff[a][0];
  
  staff[a][1]=staff[a][0]*kwsp;
  
  
  std::cout<<"Enter allowance RM:";
  std::cin>>staff[a][2];
  
  staff[a][3]=staff[a][0]-staff[a][1]+staff[a][2];
  
    }
    
    std::cout<<"Staff # \tBasic\t \tKWSP Deduction\tAllowance\tGross"<<std::endl;
    for(int a=0;a<5;a++)
    {
      std::cout<<a+1<<"\t";
      for(int b=0;b<4;b++)
      {
        std::cout<<"\t"<<staff[a][b]<<"\t";
    }
    std::cout<<std::endl;
    }
    return 0;
} 

/*using namespace std; //4a iii 1
int main()
{
int OT[10][3];
for (int i=0; i<10; i++)
{
for (int j=0; j<3; j++)
{
cout<<"Input OT payment "<<j+1<<" for staff ID "<<i<<" : ";
cin>>OT[i][j];
}
}
cout<<"Staff ID \tOT 1 \t\tOT 2 \t\tOT 3"<<endl;
for ( int i=0; i<10; i++)
{
cout<<i<<"\t";
for (int j=0; j<3; j++)
{
cout<<"\t"<<OT[i][j]<<" \t";
}
cout<<endl;
}
}*/

/*int main(){
    int OT[10][3];
    double average;
    double total=0;
    
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<3;j++)
        {
            std::cout<<"Input OT payment "<<j+1<<" for staff ID "<<i<<" : ";
            std::cin>>OT[i][j];
            total=total+OT[i][j];
        }
    }

    average=total/30;
    std::cout<<"Staff ID \tOT 1 \t\tOT 2 \t\tOT 3"<<std::endl;
    for (int i=0;i<10;i++)
    {
        std::cout<<i<<"\t";
        for (int j=0;j<3;j++)
        {
            std::cout<<"\t"<<OT[i][j]<<" \t";
        }
        std::cout<<std::endl;

    }
    std::cout<<"Average OT payment is : RM "<<average<<std::endl;
    return 0;
} */

/*#define ID 10
using namespace std;
int main()
{
  double total=0;
  int OT [10][3];
  double avg;
  
  for(int a=0;a<10;a++)
  {
    for(int b=0;b<3;b++)
    {
      cout<<"Input OT payment #"<<b+1<<" for staff ID "<<a+1<<": ";
      cin>>OT[a][b];
      total=total+OT[a][b];
      
    }
  }
  avg=total/30;
  
  cout<<"Staff ID \tOT 1 \tOT 2 \tOT 3"<<endl;
  for(int a=0;a<10;a++)
  {
    cout<<a<<"\t";
    for(int b=0;b<3;b++)
    {
      cout<<"\t"<<OT[a][b];
    }
    cout<<endl;
  }
  cout<<"average OT payment of staff: RM"<<avg<<endl;
}*/


