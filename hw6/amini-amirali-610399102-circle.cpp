#include <iostream>
#include <string>
#include<vector>
using namespace std;



// amirali amini -- 610399102
// circle


int main(){
    int n ;
    cin >> n ;
    double circles[n][3];
    for (int i=0 ; i<n*3 ; i++)cin >> circles[i/3][i%3];
    double x[4];
    x[0]=circles[0][2]+circles[0][0];
    x[1]=circles[0][1]+circles[0][0];
    x[2]=circles[0][2]-circles[0][0];
    x[3]=circles[0][1]-circles[0][0];
    for (int i =1 ; i< n ; i++){
        if (x[0]>circles[i][2]+circles[i][0])x[0]=circles[i][2]+circles[i][0];
        if (x[1]>circles[i][1]+circles[i][0])x[1]=circles[i][1]+circles[i][0];
        if (x[2]<circles[i][2]+circles[i][0])x[2]=circles[i][2]-circles[i][0];
        if (x[3]<circles[i][1]+circles[i][0])x[3]=circles[i][1]-circles[i][0];
    }
    if (x[0]<=x[2] || x[1]<=x[3]){
       cout << 0 ;
        return 0 ;
    }
    double sum=0;
    for (double i =x[3]; i<=x[1] ; i+=0.0001){
        for (double j = x[2] ; j<= x[0] ; j+= 0.0001){
            bool chek =false;
            for (int k =0 ; k<n ; k++){
                double rx = (i-circles[k][1]);
                double ry = (j-circles[k][2]);
                if (rx*rx+ry*ry > circles[k][0]*circles[k][0]){

                    chek=true;
                    break;
                }
            }
            if (chek==false){
                sum+=0.00000001;
            }
    }
    }
    if (sum -(sum*10000)*0.0001 > 0.00005) cout <<int (sum*10000)*0.0001+0.0001;
    else cout <<int (sum*10000)*0.0001+0.0001;
    //cout << sum;
    return 0;
}

