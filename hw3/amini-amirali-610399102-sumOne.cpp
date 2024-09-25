#include <iostream>
#include <string>
using namespace std;



// amirali amini -- 610399102
// sumOne




int main(){
    int a,b,arr[100];
    cin>> a>>b;
    if (a<b){
        int c =a ;
        a=b;
        b=c;
    }
        if (a<0){
        cout <<"-";
        a=a*-1;
        b=b*-1;
        int c =a ;
        a=b;
        b=c;
    }
    int t=0;
    int c =0;
    if (b>=0){
        for (int i=0 ; (a+t)!=0 ;i++){
                    //cout <<i <<"**"<<endl;
        c = a%10+b%10 + t;
        arr[i]=c%10;
        if (c>=10)t=1;
        else t=0;
        a=a/10;
        b=b/10;
        c=i;
    }}
    if ((a>=0) && (b<0)){
        b=b*-1;
        //cout << a << "  " << b << endl;
        if (a<b){
            int c =a ;
            a=b;
            b=c;
            cout <<"-";
        }
        //cout << "---\n";
        for (int i=0 ; a!=0;i++){
                    //cout <<i <<"**"<<endl;
        if (a%10 > b%10+t){
             c = a%10-b%10-t;
             t=0;
        }
        else {
            c = a%10-b%10-t +10;
            t=1;
        }
        arr[i]=c%10;
        a=a/10;
        b=b/10;
        c=i;
    }
    }
    for (int i=c; i>=0;i--){
        cout << arr[i];
    }
    return 0;
}

