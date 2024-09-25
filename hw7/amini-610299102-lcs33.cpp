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
using namespace std;


//----------------------------------------------------------------------------------

class sub 
{
public:
sub ()
{
    
    for (int i =0 ; i < 3 ; i++)
    {
        getline (cin,s[i]);
        s[i]+="0";
    }
    x=s[0].size();
    y=s[1].size();
    z=s[2].size();

}

void creatTable()
{
    arr=new int ** [x];
    v=new int ** [x];
    for (int i =0 ; i<x ; i++)
    {
        arr[i]=new int *[y];
        v[i]=new int *[y];
        for (int j =0 ; j< y ; j++)
        {
            arr[i][j]=new int [z];
            v[i][j]=new int [z];
            for (int k =0 ; k< z ; k++)
            {
                arr[i][j][k]=-1;
                v[i][j][k]=0;
            }
        }
    }
}

void creatTable1()
{

    for (int i =0 ; i<x ; i++)
    {
        for (int j =0  ; j< y ; j++)
        {
            for (int k =0 ; k<z ; k++)
                arr[i][j][k]=i*j+k;
        }
    }
}

void find ()
{
    for (int a =x-2 ; a>=0 ; a-- )
    {
        for (int b=y-2 ; b>=0 ; b--)
        {
            for (int c = z-2; c>=0 ; c--)
            {
                if (s[0][a]==0 || s[1][b]==0||s[2][c]==0)
                    v[a][b][c]=0 ;
                else 
                {
                    if (s[0][a]==s[1][b] &&s[1][b]==s[2][c])
                    {
                        int u=v[a+1][b+1][c+1];
                        v[a][b][c]=u+1;
                        arr[a][b][c]=7;
                    }
                    else 
                    {
                        int aa[7];
                        for (int q =1 ; q<7 ; q++)
                        {
                            int i =q;
                            int o=i%2;
                            i/=2;
                            int oo=i%2;
                            i/=2;
                            int ooo=i;
                            aa[q]=v[a+ooo][b+oo][c+o];
                        }
                        int q=maxfind(aa);
                        arr[a][b][c]=q;
                        int i =q;
                        int o=i%2;
                        i/=2;
                        int oo=i%2;
                        i/=2;
                        int ooo=i;
                        v[a][b][c]=v[a+ooo][b+oo][c+o];
                    }
                }
            }
        }
    }
}

int get()
{
    return v[0][0][0];
}
int maxfind (int a[])
{   int m = 1;
    for (int i =2 ; i< 7 ;i++)
    {
        if (a[i]>a[m])m=i;
    }
    return m ;
}
void print (int count ,int a =0 , int b =0 , int c =0)
{
    //cout << "print \n" ;
    if (count >0){
        if (arr[a][b][c]==7)
        {
            cout << s[0][a];
            print (count -1 ,a+1,b+1,c+1);
        }
        else 
        {
            int i =arr[a][b][c];
            int o=i%2;
            i/=2;
            int oo=i%2;
            i/=2;
            int ooo=i;
            print (count , a+ooo , b+oo ,c+o);
        }
    }
}
private:
int x,y,z;
int ***arr;
int ***v;
string s[3];

};


int main () 
{
    sub a ;
    a.creatTable();
    a.find();
    //cout << a.get() << endl;
    a.print (a.get()) ;
    return 0 ;
}