// function example
#include <iostream>
using namespace std;
/*int addition (int a, int b)
{ int r;
r=a+b;
return r;
}
int main ()
{
int z;
z = addition (5,3);
cout << "The result is " << z;
return 0;
}
*/

/*
int sum (int x, int y);//declaring function
int main()
{
int a = 10;
int b = 20;
int c = sum (a, b); //calling function
cout << c;
return 0;
}
int sum (int x, int y) //defining function
{
return (x + y);
}
*/

// function declaration
/*
int max(int num1, int num2);
int main ()
{
// local variable declaration:
int a = 100;
int b = 200;
int ret;
// calling a function to get max value.
ret = max(a, b);
cout << "Max value is : " << ret <<
endl;
return 0;
}
// function returning the max between two numbers
int max(int num1, int num2)
{
// local variable declaration
int result;
if (num1 > num2)
result = num1;
else
result = num2;
return result;
}
*/
/*
int sum(int a, int b = 20) {
int result;
result = a + b;
return (result);
}
int main () {
// local variable declaration:
int a = 100;
int b = 200;
int result;
// calling a function to add the values.
result = sum(a, b);
cout << "Total value is :" << result << endl
;
// calling a function again as follows.
result = sum(a);
cout << "Total value is :" << result << endl
;
return 0;
}
*/
int Add(int output1, int output2)
{
return output1 + output2;
}
int main()
{
int answer, input1, input2;
cout << "Give a integer number:";
cin >> input1;
cout << "Give another integer number:";
cin >> input2;
answer = Add(input1,input2);
cout << input1 << " + " << input2
<< " = " << answer;
return 0;
}