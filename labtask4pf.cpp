#include <iostream>
#include <string>

int main(){
    const int NUM=3; //constant for "for loop " how many times it run
    int a[3]; //declare int datatype array named "a"
    int *b; //declare a pointer named "b"
    b=&a[0]; // pointer b value assigned to or linked to array named 'a'
    for (int c=0; c<NUM; c++) //loop the for loop for NUM times
    {
        std::cout<<"Enter a number :";
        std::cin>>a[c]; //user enter the input into array 'a' and c is used to how much times the data is input to the array
    }

    std::cout<<"Number entered :"<<std::endl;

    for (int d=0;d<NUM;d++)
    {
        
        std::cout<<*b<<std::endl; //output the data from the array "a" using the pointer "b"
        b++; //increment the pointer "b" because the if we dont increment it, the output will display the first index in array 'a' only.
    }
    return 0;
}


struct student{
        std::string name;
        int age;
        double cgpa;
    }p1;
int main(){
    student p2;
    std::cout<<"Please enter your name :";
    std::cin>>p1.name;
    std::cout<<"Please enter your age :";
    std::cin>>p1.age;
    std::cout<<"Please enter your CGPA : ";
    std::cin>>p1.cgpa;


    std::cout<<"Please enter your name :";
    std::cin>>p2.name;
    std::cout<<"Please enter your age :";
    std::cin>>p2.age;
    std::cout<<"Please enter your CGPA : ";
    std::cin>>p2.cgpa;

    std::cout<<"Student 1 info "<<std::endl;
    std::cout<<"Student 1 name : "<<p1.name<<std::endl;
    std::cout<<"Student 1 age : "<<p1.age<<std::endl;
    std::cout<<"Student 1 CGPA : "<<p1.cgpa<<std::endl;
    
    std::cout<<"Student 2 info "<<std::endl;
    std::cout<<"Student 2 name : "<<p2.name<<std::endl;
    std::cout<<"Student 2 age : "<<p2.age<<std::endl;
    std::cout<<"Student 2 CGPA : "<<p2.cgpa<<std::endl;

    return 0;

}
