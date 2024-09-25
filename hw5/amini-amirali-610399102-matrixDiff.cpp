#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;



// amirali amini -- 610399102
// matrixDiff




int main(){
    int n , m;
    cin >> n >>m;
    int arr[n][m];
    srand(m*n);
    for (int i =0 ; i<n ;i++){
        for (int j =0 ; j<m; j++ ){
            arr[i][j] = rand()%200 -100;
            cout << arr[i][j];
                if (j!=m)cout <<" ";
        }
        if (i!= n )cout << endl;
    }
    int arri , arrj, arrq , arrw, arrsum=arr[0][0];
    //charchoob zir matrix
    for (int i =0 ; i<n ; i++){
        for (int j=i ; j<n  ; j++){

            for (int q =0 ; q<m; q++ ){

                    for (int w=q;w<m;w++){


                        int sum=0;
                        for (int ii =i ;ii<=j ; ii++){
                            for (int jj =q ; jj<=w ; jj++){
                                sum += arr[ii][jj];
                                //cout << arr[ii][jj]<<' ' << endl;
                                /*cout << " ii : "<< ii<<endl ;
                                cout << " jj : "<< jj<<endl ;
                                cout << " jj : "<< jj<<endl ;
                                */
                            }
                        }

                        if (sum >arrsum){
                                arrsum=sum;
                                arri=i;
                                arrj =j;
                                arrw=w;
                                arrq=q;

                        }
                       /* cout << " i : "<< i<<endl ;
                        cout << " j : "<< j<<endl ;
                        cout << " q : "<< q<<endl ;
                        cout << " w : "<< w<<endl ;
                        cout <<sum<<"\n\n";
                        */
                    }

            }
        }
    }
    for (int i = arri ; i<= arrj ; i++){
            for (int j = arrq ; j<= arrw ; j++){
                cout << arr[i][j];
                if (j!=arrw)cout <<" ";
            }
        if (i!= arrj )cout << endl;
    }

    return 0;
}

