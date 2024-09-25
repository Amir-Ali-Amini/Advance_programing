#include <iostream>
#include <string>
#include<vector>
#include<new>
using namespace std;



// amirali amini -- 610399102
// maxMinArray




int main(){
    int n , maxx[2] , minn [2];
    maxx [1]=0;
    cin >> n ;
    int * arr ;
    arr=new int [n];
    for (int i =0 ; i<n ; i++ ){
        cin >> arr[i];
    }
    minn[1]=0;
    maxx[1]=0;
    for (int i =0; i<n;i++){
        int maxx_el =0;
        for (int j = 0 ; j<n ; j++){
            if (arr[i]==arr[j])maxx_el ++;


        }
        if (i==0)minn[1]=maxx_el;
        if (maxx_el > maxx[1]){
            maxx[0]=arr[i];
            maxx[1]=maxx_el;
        }
        if (maxx_el <= minn[1]){
            minn[1]=maxx_el;
            minn[0]=arr[i];
        }

    }
    cout<< maxx[0] << endl;
    cout << minn[0];
    return 0;
}

