/* Print the Nth term of a Fibonacci series */
#include<iostream>
using namespace std;
int main() {
   int p=0,q=1,n,i,fterm;
   cin>>n;//enter the Nth number
   for ( i =2; i <= n; i++) {
   fterm = p+q ;
   p = q;
   q = fterm;

   }
   cout<<n<<"th term of a Fibonacci series is "<<q<<endl;
   return 0;
}
