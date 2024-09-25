#include <iostream>
#include <string>
using namespace std;



// amirali amini -- 610399102
// tensorMul

int main(){
    int a[2],b[2];
    cin>>a[0]>>a[1];
    cin >> b[0]>>b[1];
    int matrix1[a[0]][a[1]];
    int matrix2[b[0]][b[1]];
    for (int i =0 ; i<a[0]; i++){
        for (int j =0 ; j<a[1];j++){
            cin>>matrix1[i][j];
        }
    }
    for (int i =0 ; i<b[0]; i++){
        for (int j =0 ; j<b[1];j++){
            cin>>matrix2[i][j];
        }
    }
int s[2];
s[0]=a[0]*b[0];
s[1]=a[1]*b[1];
int matrix_sum[s[0]][a[1]*b[1]];
/*
for (int i=0 ; i<s[0];i++){
    for (int j =0 ; j<s[1];j++){
    matrix_sum[i][j]=0;

    }
    }
    */

for (int i=0 ; i<s[0];i++){
    for (int j =0 ; j<s[1];j++){
            matrix_sum[i][j]=matrix1[i/b[0]][j/b[1]] * matrix2[i%b[0]][j%b[1]];
            //cout << matrix1[i/b[0]][j/b[1]] << "  " <<  matrix2[i%a[0]][j%a[1]] << endl;
            //cout << i << "  " << j <<endl;
            //cout <<"a"<<i/b[0]<<"" <<j/b[1] << "*b" << i%b[0]<<""<<j%b[1]<<"    ";
    }
//cout <<endl;
}
for (int i=0 ; i<s[0];i++){
    for (int j =0 ; j<s[1];j++){
    cout <<matrix_sum[i][j]<<" ";

    }
    cout << endl;
    }

    return 0;
}

