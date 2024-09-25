#include <iostream>
#include <string>
using namespace std;

void creat(int ** mat , int n , int t=1 , int i=0 , int j=0 ){

    if (t==1 ){
        i=n/2+n*n;
        j= n-1 +n*n;
        mat[i%n][j%n]=1;
    }
    else {
        i-=1;
        j+=1;
        if(mat[i%n][j%n]!=0){
            i+=1;
            j-=2;
        }
        if (i%n==n-1 && i%n == 0 ) {
            i+=1;
            j-=2;
        }
        mat[i%n][j%n]=t;



    }

    //cout << i%n << " " << j%n << "  " << t << endl;
    if (t<n*n)creat(mat,n,t+1,i,j);
}

// amirali amini -- 610399102
// magicMat



int main(){
    int n ;
    cin >> n ;
    int ** mat ;
    mat=new int *[n];
    for (int i =0 ; i< n ; i++) mat[i]=new int [n];
    for (int i=0 ; i< n*n ; i++){
        mat[i/n][i%n]=0;
    }
    creat(mat , n);

    for (int i=0 ; i< n*n ; i++){
        if (i>0 && i%n==0)cout << endl;
        cout <<mat[i/n][i%n];
        if (i%n!=n-1)cout << " ";

    }
    return 0;
}

