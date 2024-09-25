// may 17 2021 10:10
#include <iostream>
#include <string>
#include<vector>
using namespace std;



// amirali amini -- 610399102
// nknight 2


void creat(int[] , int);
int chek (int[] , int  );
void print (int[],int);
int chek(int , int[] , int , int );

int main(){
    int sum=1;
    int n ;
    cin >> n ;
    int * table ;
    table = new int [n*n];
    for (int i =0 ; i < n ; i++){
        table [i]=i;
    }
    //print(table , n);
    do {
        creat(table,n);
        if (chek(table , n ) ==1 ){
            //cout << sum+1 << endl;
            //print (table,n);
            sum++;
        }
    }
    while (table[0]<n*n-n);
    cout<< sum;
    return 0;
}




void print (int arr[] , int n){
    int j =0;
    for (int i =0 ; i< n*n ; i++){
        if (i==arr[j]){
            cout << j+1 <<" ";
            j++;
        }
        else cout << 'O' << " ";
        if (i%n==n-1)cout << endl;
    }
    cout << "=========================================\n";
}

void creat(int arr[] , int n){
    int chek0=0;
    for ( int i=1 ; i<n &&chek0==0; i++){
        int chek1=0;
        if (arr[i]>=n*n-n+i){
            arr[i-1]++;
            chek0=1;
            chek1=1;
            for (int j =i ; j<n ; j++){
                arr[j]=arr[j-1]+1;
            }
        }
    if (chek1==0&&i==n-1)arr[n-1]=arr[n-1]+1;
    }
}


int chek(int arr[] , int n){

for (int i =1 ; i< n ; i++){
    if (chek(n,arr,arr[i],i)==0)return 0 ;
}
    return 1;
}


int chek (int n , int arr[] , int t , int j){
    //print(arr,n);
    //cout << endl;
    if (t/n==0)return 1;
    else {
        if (t/n==1){
            if (t%n>1){
                for (int i =0 ; i< j ; i++ ){
                    if (arr[i]==t-n-2){
                   // print (arr,n);
                    //cout << endl;
                    return 0;}
                }
            }
            if (t%n<n-2){
                for (int i =0 ; i< j ; i++ ){
                    if (arr[i]==t-n+2){
                    //print (arr,n);
                    return 0;}
            }
        }
    }
    if (t/n>1){
            if (t%n>1){
                for (int i =0 ; i< j ; i++ ){
                    if (arr[i]==t-n-2){
                    //print (arr,n);
                    //cout << endl;
                    return 0;}
                }
            }
            if (t%n<n-2){
                for (int i =0 ; i< j ; i++ ){
                    if (arr[i]==t-n+2){
                    //print (arr,n);
                   // cout << endl;
                    return 0;}
            }
        }
            if (t%n>0){
                for (int i =0 ; i< j ; i++ ){
                    if (arr[i]==t-n-n-1){
                    //print (arr,n);
                    return 0;}
    }}
            if (t%n<n-1){
                for (int i =0 ; i< j ; i++ ){
                    if (arr[i]==t-n-n+1){
                    //print (arr,n);
                    return 0;}
    }
    }
    }
    }
    //cout <<"pass\n";
return 1;
}
