#include <iostream>
#include <string>
#include<vector>
#include<random>
#include<cstdlib>
#include<time.h>
using namespace std;



// amirali amini -- 610399102
// matrixGame


class game{

public :
    int n ;
    int *matrix;
    game(int m ){
        n=m ;
        matrix=new int [n*n];
        srand(time(0));
        for (int i=0 ; i< n* n ; i++)matrix[i]=0;
        for (int i = 1 ; i< n*n ; i++){
            int t=rand()%(n*n);
            while (matrix[t%(n*n)]!=0)t++;
            matrix[t%(n*n)]=i;

        }
       // print (matrix);

    }




    void print (int arr[]){
    for (int i =0 ; i< n* n ; i++ ){
        cout << arr[i] << " " ;
        if (i%n==n-1)cout<< endl;
    }
    }



bool chek(int arr[]){
    for (int i =0 ; i<n*n-1 ; i++){
        if (matrix[i]!=i )return false;
    }
    return true;
}





int findd(int arr[] ){
    for(int i =0 ; i< n*n;i++){
        if (arr[i] == 0 )return i ;
    }
}

void swp(int arr[] , int i , int j){
    int t=arr[i];
    arr [i]=arr[j];
    arr [j]=t;
}


void copyy(int arr[] , int arr1[]){
for (int i =0 ; i< n*n ; i++){
    arr1[i]=arr[i];
}

}
void copymat(int arr[]){
for (int i =0 ; i< n*n ; i++){
    arr[i]=matrix[i];
}
}
void generateor(int arr[]  ){
int t=findd(arr);
if (chek (arr)==true)print(arr);
else {
    //cout << "NO\n";
    int nw[n*n];
    if (t%n>0){
        copyy(arr , nw);
        swp(nw,t,t+1);
        generateor(nw);
    }
    if (t%n<n-1){
        copyy(arr , nw);
        swp(nw,t,t-1);
        generateor(nw);
    }
    if (t/n>0){
        copyy(arr , nw);
        swp(nw,t,t-n);
        generateor(nw);
    }
    if (t/n<n-1){
        copyy(arr , nw);
        swp(nw,t,t+n);
        generateor(nw);
    }
}

}

};

int main(){
    int n ;
    cin >> n ;
    game  one(n);
    one.generateor(one.matrix);
    return 0;
}

