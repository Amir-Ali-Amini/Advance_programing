#include <iostream>
using namespace std;



// amirali amini -- 610399102
// sqrt

float sqr(float n , float t=0.00001){
     float a = 1;
     for (a ;(n/a-a>t) || (n/a-a<-t);a = (a+ (n/a) )/2){
        //cout << 1<<endl;
     }
     return a;
}
int main(){
    int n ;
    cin >> n ;
    cout<<sqr(n);
    return 0;
}
