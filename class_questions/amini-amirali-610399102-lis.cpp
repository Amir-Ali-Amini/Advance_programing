#include <iostream>
//#include <string>
#include <vector>
using namespace std;



// amirali amini -- 610399102
// lis


int main(){
    int n ;
    cin >> n ;
    int arr[n];
    for (int i=0 ; i< n ; i++)cin >> arr[i];
    int lis[n][2];
    for (int i=0 ; i<n ; i++){
    lis[i][0]=1;}
    lis[0][1]=0;
    int max =0;
    for (int i =1 ; i<n ; i++) {
        int t=0;
        for (int j =0 ; j<i ;j++){
            if (arr[j]<arr[i] && arr[j]>=0){
                if (lis[i][0]<lis[j][0]+1){
                    lis[i][0]=lis[j][0]+1;
                    lis[i][1]=j;
                    t=1;
                }
            }

        }
        if(t==0)lis[i][1]=i;
    }
    int maxx=0;
    for (int i =1 ; i<n ; i++){
        if (lis[i][0]>lis[maxx][0])maxx=i;}
        //    if(arr[i]>arr[maxx])maxx=i;
        //}

    vector <int > a;
    a.push_back(arr[maxx]);
    while (lis[maxx][1]!=arr[maxx]){
        maxx=lis[maxx][1];
        a.push_back(arr[maxx]);
    }
    for (int i = 0
        ; i<=a.size()-1 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

