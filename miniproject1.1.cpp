#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {

  // create a stack of strings
  stack<string> S;

  // push elements into the stack
  S.push("P");
  S.push("U");
  S.push("O");
  
  cout << "Stack: ";

  // print elements of stack
   while(!S.empty()) {
    cout << S.top() << ", ";
    S.pop();
  }

  // create a queue of string
  queue<string> Q;


  // push elements into the queue
  Q.push("P");
  Q.push("U");
  Q.push("O");

  
  cout << "Queue: ";

  // print elements of queue
  // loop until queue is empty
  while(!Q.empty()) {

    // print the element
    cout << Q.front() << ", ";

    // pop element from the queue
    Q.pop();
  }

  cout << endl;
 
  return 0;
}