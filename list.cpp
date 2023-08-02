#include <iostream>
using namespace std;

char stackS[3];
int idx=3,top=-1;
int ohio[3]={0,1,2};

void push(char S){
  if(top<=idx-1)
  {
      top++;
    stackS[top]=S;
  }
  else
  {
    cout<<"Stack Overflow"<<endl;
  }
}


/*
void push (char S){
  top++
  stackS[top]=S;
  
  if(top<=idx-1)
  {
    cout<<"Stack Overflow"<<endl;
    continue;
  }
}
*/


/*
  int z=-1;
    for(int y=idx-1;y>=0;y--)
    {
      cout<<"Index here is: "<<++z<<endl;  
    }
*/
void dpy1(){
  if(top>=0)
  {
    for(int x=top;x>=0;x--)
    {
      cout<<"Stack S: "<<stackS[x]<<endl;
      cout<<"Index here is: "<<ohio[x]<<endl;
    }
  }
  else
    cout<<"Stack S is empty";
    cout<<"The top value is "<<top<<endl<<endl;
}

void poop()
{
  if(top<=-1)
  {
    cout<<"Stack Underflow"<<endl;
  }
  else
  {
    cout<<"Popped element: "<<stackS[top]<<endl;
    top--;
  }
}

void dpy2()
{
  if(top>=0)
  {
    for(int x=top;x>=0;x--)
    {
      cout<<"Stack S: "<<stackS[x]<<endl;
      cout<<"Index here is: "<<ohio[x]<<endl;
    }
  }
  else
    cout<<"Stack S is empty"<<endl;;
    cout<<"The top value is "<<top<<endl<<endl;
}



int main()
{
  char input;
  for(int x=3;x>=1;x--)
  {
    cout<<"Enter "<<x<<" character to push into stack: ";
    cin>>input;
    cout<<endl;
    push(input);
    dpy1();
  }
  
  for(int y=3;y>=1;y--)
  {
    poop();
    dpy2();
  }
  
}