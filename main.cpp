#include <iostream>
using namespace std;

int main() {
   int n=0;
   int a=1;
   int b=1;
   int c=0;
   cin>>n;
   if (n<2) {
      cout<<"errore"<<endl;
   }
   else {
      int i=0;
      cout<<a<<endl;
      cout<<b<<endl;
      for (i=3; i<=n; i++) {
         c=a+b;
         cout<<c<<endl;
         a=b;
         b=c;
      }
   }
   
   return 0;
}
