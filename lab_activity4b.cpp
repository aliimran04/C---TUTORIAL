#include <iostream>

/*int main()
{
int x; // A normal integer
int *p; // A pointer to an integer
p = &x; // Read it, "assign the address of x to p"
std::cout<<"Insert a value:";
std::cin>> x; // Put a value in x, we could also use *p here
std::cout<< *p <<"\n"; // Note the use of the * to get the value
system("pause");

return 0;
} */

/*int main(){

    int var=20; //actual var declaration
    int *ip;  //pointer var itself

    ip=&var; //store address of var in pointer var
    std::cout << "Value of var variable: ";
    std::cout << var << std::endl;
    // print the address stored in ip pointer variable
    std::cout << "Address stored in ip variable: ";
    std::cout << ip << std::endl;
    // access the value at the address available in pointer
    std::cout << "Value of *ip variable: ";
    std::cout << *ip << std::endl;
    system("pause");
    return 0;
} */

/*int main(){
    float *fptr;
    float num1,num2;
    num1=100.20;
    fptr=&num1;
    std::cout<<"Value of *fptr is : "<<*fptr<<std::endl;
    num2=*fptr;
    std::cout<<"Value of num2 is : "<<num2<<std::endl;
    std::cout<<"Address of num1 is :"<<&num1<<std::endl;
    std::cout<<"Address stored in fptr pointer is :"<<fptr;
    return 0;
} */

/*#include <cstring>
using namespace std;
int main()
{
int n;
cout << "Enter total number of students: ";
cin >> n;
float* ptr;
ptr = new float[n]; // memory allocation for n number of floats
cout << "Enter GPA of students." <<endl;
for (int i = 0; i < n; ++i)
{
cout << "Student" << i+1 << ": ";
cin >> *(ptr + i);
}
cout << "\nDisplaying GPA of students." << endl;
for (int i = 0; i < n; ++i)
{
cout << "Student" << i+1 << " :" << *(ptr + i) << endl;
}
delete [] ptr; // ptr memory is released
system("pause");
return 0;
}*/

#define NUM 10
int main()
{
int salary[NUM] = {2000, 3400, 1900, 2500, 3300, 1238, 3200, 2700,
3600, 4500};
int *ptr;
ptr = salary;

int OT[NUM];
int *ptrOT;
ptrOT=OT;
for (int a=0; a<NUM; a++)
{
    std::cout<<"Please enter OT payment"<<std::endl;
    std::cin>>*(ptrOT+a);
}

std::cout<<"Staff ID \tSalary \tOT"<<std::endl;
for (int i=0; i<NUM; i++)
{
std::cout<<i<<"\t\t"<<*ptr<<"\t"<<*(ptrOT+i)<<std::endl;
ptr++;
}
return 0;
}