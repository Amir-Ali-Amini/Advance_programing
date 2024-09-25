#include <iostream>
#include <string>
using namespace std;



// amirali amini -- 610399102
// idPer

void f(int a[] , int n , int m){

    int d = a[m];
    a[m]=a[n];
    a[n]=d;

}


int main(){
    int n ;
    cin >> n ;
    int arr[n];
    for (int i = 0 ; i< n ; i++ ){
        cin >> arr[i];
    }
    for (int i =0 ; i< n ; i++){
        if (arr[i]!=i+1){
            f(arr,i,arr[i]-1);
            i--;
        }
    }
    for (int i =0 ; i<n ; i++){
        cout << arr[i];
        if (i!=n-1)cout << " ";
    }
    return 0;
}

