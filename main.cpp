#include <iostream>
using namespace std;
int main() {
    int n=0;
    int a=1;
    int b=1;
    int c=0;
    cin >> n;
    cout<<a<<endl;
    cout<<b<<endl;
       do {
           c=a+b;
           if (c<=n) {
               cout << c << endl;
               a = b;
               b = c;
           }
        } while(c<=n);
    return 0;
}
