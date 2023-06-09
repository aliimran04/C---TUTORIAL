#include <iostream>
#include <cmath>
using namespace std;
# define PI 3.142

double  rec(double x,double y);
double tri(double y, double h);
double hcir(double x);

int main()
{
  double x,y,h;
  cout<<"Enter value of X: ";
  cin>>x;
  
  cout<<"Enter value of Y: ";
  cin>>y;
  
  cout<<"Enter value of H: ";
  cin>>h;
  
  cout<<endl;
  cout<<"The area of Rectangle is "<<rec(x,y)<<endl;
  cout<<"The area of Triangle is "<<tri(y,h)<<endl;
  cout<<"The area of Half Circle is "<<hcir(x)<<endl<<endl;
  cout<<"The total area is "<<rec(x,y)+tri(y,h)+hcir(x);
  return 0;
}
double rec(double x, double y)
{
  double area_rec= x*y;
  return area_rec;
}
double tri(double y, double h)
{
  double area_tri=0.5*h*y;
  return area_tri;
}
double hcir(double x)
{
  double rad=x/2;
  double area_hcir=0.5*(PI*pow(rad,2));
  return area_hcir;
}

