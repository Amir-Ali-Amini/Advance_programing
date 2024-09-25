#include <iostream>
#include <string>
#include<vector>
using namespace std;

//amiraliamini - 610399102
//maze

int main(){
    
    int m , n ,**matrix , ** arr; 
    cin >> n >> m ;
    matrix = new int *[n];
    arr=new int *[n];
    for (int i =0 ; i< n ; i++){
        arr[i]=new int [m];
        matrix[i]=new int [m];
    }
    for (int i=0 ; i< n ; i++){
        for (int j =0 ; j< m ; j++)cin >> matrix[i][j];
    }
    for (int i=0; i< n ; i++){
        for (int j =m-1 ; j>-1; j--){
            if (i==0){
                if (j==m-1) arr[0][j]=matrix[0][j];
                else {
                    arr[0][j]=arr[0][j+1]+matrix[0][j];
                }
            }
            else{
                if (j==m-1)arr[i][j]=arr[i-1][j]+matrix[i][j];
                else {
                    if (arr[i][j+1]<=arr[i-1][j]){
                        arr[i][j]=arr[i][j+1]+matrix[i][j];
                    }
                    else{
                        arr[i][j]=arr[i-1][j]+matrix[i][j];
                    }
                }
            }
        }
    }
   /* for (int i=0 ; i< n ; i++){
        for (int j =0 ; j< m ; j++){
            cout << arr[i][j]<< "  " ;
        }
        cout << endl;
    }
    */
    int i=n-1 , j =0;
    cout << "("<<n-1<<","<<0<<") ";
    while (i!=0 ||j!=m-1){
        if (j==m-1){
            i--;
        }
        else {
            if (i==0){
                j++;
            }
            else {
                if (arr[i-1][j]<arr[i][j+1]) i--;
                else j++;
            }
        }
        cout << "("<<i<<","<<j<<") ";
    }
    //cout << "("<<0<<","<<m-1<<") ";
    return 0;
}
