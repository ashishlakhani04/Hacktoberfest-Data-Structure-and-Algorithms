#include <iostream>
#include <queue>
using namespace std;
int main()
{
  queue<int> q; // Initializing a Queue of Integers
  q.push(10);
  q.push(20);
  q.push(30);
  cout<<q.front()<<endl; // Prints 10 
  q.pop() // It will pop out 10 from the Queue;
 
 return 0;
}
