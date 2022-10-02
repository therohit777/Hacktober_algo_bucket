/*
The Tower of Hanoi is a mathematical puzzle which consists of three rods and N disks. The task is to move all disks to another rod. There are certain rules for the same:

1. Only one disk can be moved at a time.
2. Only the uppermost disk can be moved from one stack to the top of another stack or to an empty rod.
3. Larger disks cannot be placed on top of smaller disks.

*/

#include<iostream>
using namespace std;

void move(int n, char src, char helper, char destination){
   //base case
   if(n==0){
    return;
   }
   
   //recursive case
   //move n-1 discs from src to helper
   move(n-1,src,destination,helper);
   cout<<"shift disc "<<n<<" from "<<src<<" to "<<destination<<endl;
   move(n-1,helper,src,destination);

}

int main(){
    int n;
    cout<<"Enter the number of disks"<<endl;
    cin>>n;
    move(n, 'A','B','C');
    return 0;
}