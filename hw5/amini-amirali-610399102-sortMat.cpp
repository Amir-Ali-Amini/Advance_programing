#include <iostream>
using namespace std;

//amiraliamini610399102
//sortmat



//def functions**********************************************
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
//read matrix*************************
void readmatrix (int **a , int n, int m){
    for (int i =0 ; i<n ; i++){
      for (int j =0 ; j<m ; j++){
       cin>> a[i][j];
     }
   }
}
//driver code*******************************************************
int main()
{
  int m,n;
  cin>>m;
  cin>>n;
  int mat[m][n];
  for (int i=0; i<m ; i++){
    for (int j=0; j<n;j++){
      cin>>mat[i][j];
    }
  }
   int r,meth;
  cin>>r;
  cin>>meth;
  int rotatemat[n][m];
  for (int i=0; i<n; i++){
   for (int j=0; j<m; j++){
    rotatemat[i][j]=mat[j][i];
    }
  }
   if (meth==1)
    {
    int s = sizeof(rotatemat[r])/sizeof(rotatemat[r][0]);
    mergeSort(rotatemat[r], 0, s - 1);
    }
    if (meth==2){
  int i, j,c=0,w=1;
  int s = sizeof(rotatemat[r])/sizeof(rotatemat[r][0]);
    for (i = 0; i < s-1; i++)  {
     for (j = 0; j < s-i-1; j++)  {
       if (rotatemat[r][j] > rotatemat[r][j+1])  {
        for(int k=0; k<n;k++){
          int temp = rotatemat[k][j];
          w*=2;
          rotatemat[k][j] = rotatemat[k][j+1];
          c+=1;//counter
     //cout<<c;
          rotatemat[k][j+1] = temp;
       }
      }
     }
    }
   }
  for (int j=0; j<m;j++){
    for (int i=0; i<n;i++){
      cout<<rotatemat[i][j]<<" ";
    }
    cout<<endl;
  }
 return 0;
}
