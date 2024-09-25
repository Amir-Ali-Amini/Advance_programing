#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;



// amirali amini -- 610399102
// matrixClass

class matrix{
    public:
        matrix(int m , int n){
            mat=new int *[m];
            for (int i =0 ; i<n ; i++ )mat[i] = new int [n];
            bb=n-1;
            aa=m-1;
            //cout << "***";
            read(aa,bb);
            //cout <<mat[0][1];
            write();

        }
    void read(int a , int b ,int t=0){

        if (b>0){
            cin >>mat[a][b];
            read(a,b-1);
            t=1;
           // cout << endl <<a <<" , "<<b<<endl;
        }

        if (b==0&&a>0 && t==0){
                cin >>mat[a][b];
                read(a-1,bb);
                t=1;
               // cout << endl <<a <<" , "<<b<<endl;
        }

        if (a==0&&b==0 &&t==0){
                cin >> mat[0][0];
               // cout << endl <<a <<" , "<<b<<endl;
    }
    }

    void write(){
    for (int i =aa ; i>=0 ; i--){
        for (int j =bb ; j >=0 ; j--){
            cout << mat[i][j];
        if (j!=0)cout <<" ";
    }if (i!=0)cout <<endl;
    }

    }
    private:
        int **mat;
        int a , b ,aa,bb;

};


int main(){
    int m,n;
    cin >> n >> m;
    matrix amir (n , m);

    return 0;
}

