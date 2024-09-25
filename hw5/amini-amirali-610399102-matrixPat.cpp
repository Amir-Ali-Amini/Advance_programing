#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;



// amirali amini -- 610399102
// matrixPat




int main(){
   int m ,n , p ,q ;
   cin >> n >>m>>p>>q;
   char matrix [n][m];
   char matrixs [p][q];
    for (int i=0; i<n ; i++)
  {
    for (int j=0; j<m;j++)
    {
      cin>>matrix[i][j];
    }
  }
   for (int i=0; i<p ; i++)
  {
    for (int j=0; j<q;j++)
    {
      cin>>matrixs[i][j];
    }
  }
  for (int i=0 ; i<=n-p;i++){
    for (int j =0 ; j<=m-q ; j++){
        //cout << matrix [i][j]<<"  " << matrixs[0][0] ;
        if (matrix [i][j]==matrixs[0][0]){
                //cout << "yess";
            for (int ii=0 ; ii<p ; ii++){
                for (int jj =0 ; jj< q ; jj++){
                    //cout << matrix[i+ii][j+jj] <<"   "<<matrixs[i][j] << endl;
                    if (matrix[i+ii][j+jj]!=matrixs[ii][jj]){

                            break;
                    }
                    if (ii==p-1 && jj == q-1) {
                        cout <<1;
                        return 0;
                    }
                }
            }
        }
    }
  }
  cout<< 0 ;
    return 0;
}

