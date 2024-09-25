#include <iostream>
//#include <iostream.h>
#include <string>
#include<vector>
#include<string.h>
using namespace std;

int base(int a , int b){
    if (b==0)cout <<0;
    else {int sum=0;
    int t=1;
    vector <int>v;
    while (b>0){
        //sum+=(b%a)*t;
       // t*=10;
        //b =b/a;
        v.push_back(b%a);
        //cout <<b%a;
        b=b/a;
    }
    for (int i=v.size() -1 ; i>=0 ; i--){
        cout << v[i];
    }}
return 0;
    }

// amirali amini -- 610399102
// stringPal

int main(){

int a,b,c;
cin >>a >> b >> c ;
if (b<c){
    int d=b;
    b=c;
    c=d;
}
 base(a,b+c);
cout <<endl;
 base(a,b-c);
 cout <<endl;
 base(a,b*c);
 cout <<endl;
if (c!=0) base(a,b/c);
    return 0;
}
