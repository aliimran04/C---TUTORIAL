#include <iostream>
using namespace std;
char queueQ [3];
int idx[3]={0,1,2};
int nidx=sizeof(idx)/sizeof(int),rear=0,front=0;


void enqueue(char Q)
{
  if(rear>=nidx)
  {
    cout<<"The queue is FULL!"<<endl;
  }
  else
  {
    queueQ[rear]=Q;
    rear++;
  }  
}

void dpy1()
{
  for(int x=0;x<3;x++)
  {
    cout<<"Queue Q: "<<queueQ[x]<<endl;
    cout<<"Index here is: "<<idx[x]<<endl;
  }
  cout<<"The value of rear is "<<rear<<endl;
  cout<<"The value of front is "<<front<<endl;
}

void dequeue()
{
  for(int x=0;x<nidx;x++)
  {
  cout<<"Pooped(dequeue) element: "<<queueQ[x]<<endl;
  front++;
    }
    cout<<"The value of rear is "<<rear<<endl;
  cout<<"The value of front is "<<front<<endl;
  if(rear>=nidx)
  {
    cout<<"The queue is FULL!"<<endl;
  }
}

int main()
{
  char input;
  for(int x=3;x>=1;x--)
  {
    cout<<"Enter "<<x<<" character(s) to push into queue: ";
    cin>>input;
    enqueue(input);
    dpy1();
    cout<<endl;
  }
  dequeue();  
}