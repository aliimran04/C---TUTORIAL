#include <iostream>
/*
const float pi=3.142;
float area;
float radius;

float circle(float radius){
    area=pi*(radius*radius);
    return area;
}

int main(){
   
    std::cout<<"Please enter your desired radius : ";
    std::cin>>radius;
    std::cout<<"Your circle area according to your inputed radius is :"<<circle(radius);
    return 0;
}
*/
int a=2;
int b=5;
int sum;
int addition(int a, int b);//function prptotype

int main(){
    std::cout<<addition(a,b);
    return 0;
}
int addition (int a,int b){ 
    sum=a+b;
    return sum;
}