//P name
//Fig : 
//use ?:
//date
//amiraliamini 610399102 UT-CS-99

//=================================================================================

#include <iostream>
#include <string>
#include<vector>
#include <iomanip>
#include<cstdlib>
#include <bits/stdc++.h>
using namespace std;


//----------------------------------------------------------------------------------

class value 
{
public:
    value (int a1 )
    {
        n=a1 ;
        arr=new int [ n ];
        for (int i =0 ; i < n ; i++)
            cin >> arr[i];
        sort(arr,arr+n);
        getS();
    }
    void getS()
    {
        cin >> s ;
        arrS=new int [s+1];
        hint=new int [s+1];
        hint[0]=0;
        arrS[0]=0;
        for (int i =1 ; i < s+1 ; i++)
            arrS[i]=s+1;
    }
    void find ()
    {
        for (int i =0 ; i< n ; i++)
        {
            for (int j =0 ; j< s+1 ; j++)
            {
                if (arr[i]+j>s)
                    break ; 
                if (arrS[j]+1<=arrS[j+arr[i]])
                    {
                        arrS[j+arr[i]]=arrS[j]+1;
                        hint [j+arr[i]]=arr[i];
                    }
            }
        }
    }
void printtest ()
{
    for (int i=0 ; i< s+1 ; i++)
    {
        cout << setw(4)<<i<<" : " << setw(4) <<arrS[i] << "   "  << setw(4)<< hint[i] <<endl;
    }
}

void print ()
{
    int number=hint[s] , counter=0;
    int i=s , t=2;
    while (t)
    {
        //cout << "while \n";
        if(hint [i] == number)
        {
            counter ++;
            i-=hint[i];
        }
        else 
        {
            cout <<number << " " << counter ;
            if (i!=0)cout << endl;
            number =hint[i];
            counter =1;
            i-=number ;
        }
        if (i==0)
            t--;
    }
}
private : 
    int n , s , *arr , *arrS ,*hint ;
};

int main () 
{
    int n ;
    cin >> n ;
    value a(n);
    a.find();
    //a.printtest ();
    a.print ();
    return 0 ;
}