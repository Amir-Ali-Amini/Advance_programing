#include <iostream>
#include <string>
using namespace std;



// amirali amini -- 610399102
// reverseStr



int main(){
   char str[100];
   cin.get (str , 100 , '\n');
   int a,b,n;
   cin >>a >>b;
  // --a;
   //--b;
   //n=str.length();
   for ( int i=0 ; str[i]!='\0' ;i++){
    if (i>=a && i<= b ){
        cout << str [ b-(i-a)] ;
    }
    else cout << str [i];
   }
    return 0;
}
