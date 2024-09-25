//greedyJob
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

class gridi
{
public:
    gridi(int n1)
    {
        n=n1;
        arr=new int *[n];
        for (int i =0 ; i < n ; i++)
        {
            arr[i]=new int [2];
        }
    }

    void input ()
    {
        for (int i =0 ; i< n ; i++)
        {
            cin >> arr[i][0]>>arr[i][1];
        }
    }

    void sort()
    {
        for (int i = 0; i < n-1; i++)      
        {
            for (int j = 0; j < n-i-1; j++)  
            {
                if (arr[j][1] > arr[j+1][1])  
                {
                    swap(arr[j][1], arr[j+1][1]); 
                    swap(arr[j][0], arr[j+1][0]);
                }
            }
        }
    }

    void creat()
    {
        int max =-1;
        for (int i =0 ; i< n ; i++)
        {
            if (arr[i][0]>max)
            {
                if (max!=-1)
                    cout<<endl;
                cout << arr[i][0]<<" " << arr[i][1];
                max=arr[i][1];
            }
        }
    }
private:
    int n ;
    int **arr;
};

int main () 
{
    int n ;
    cin >> n ;
    gridi a (n);
    a.input();
    a.sort();
    a.creat();
}