//q2
//Fig : 
//use ?:
//date
//amiraliamini 610399102 UT-CS-99

//=================================================================================

#include <iostream>
#include <string>
#include<vector>
#include <bits/stdc++.h>
#include <iomanip>
#include<cstdlib>
using namespace std;


//----------------------------------------------------------------------------------
class aaa 
{
public :
    aaa(int n1 )
    {
        n=n1 ; 
        a=new int [n];
        cnt=new int [maxx];
        ans=0;

    }

    void get () 
    {
        for (int i = 0 ; i < n ; i++ ) 
        {
            cin >> a[i] ; 
            cnt[a[i]]++;
        }
    }

    void getX()
    {
        int x1;
        cin>> x1;
        x=x1;
    }
    void str ()
    {
        sort ( a , a+n );
    }
    
    void creat () 
    {
        int i=0;
        while(i<n)
        {
            int j=i+1;
            while(j<n)
            {
                int d=x-(a[i]+a[j]);
                if(a[i]+a[j]<=x && cnt[d])
                {
                    if(d==a[j] && d==a[i] && cnt[d]>2)
                        ans++;
                    else if(d==a[j] && d!=a[i] && cnt[d]>1)
                        ans++;
                    else if(d==a[i] && d!=a[j] && cnt[d]>1)
                        ans++;
                    else if(d!=a[j] && d!=a[i])
                        ans++;
                }
                j++;
            }
            i++;
        }
    }

    void javab ()
    {
        if (ans)
            cout << "YES";
        else 
            cout << "NO";
    }
private :
int n , x , ans  ;
const int maxx = 1e3+10;
int * a ,* cnt ;
};

int main ()
{
    int n ;
    cin >> n ; 
    aaa t(n);
    t.get() ; 
    t.getX();
    t.str();
    t.creat();
    t.javab();
    return  0 ;
}