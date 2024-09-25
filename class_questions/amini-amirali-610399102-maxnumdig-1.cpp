
#include <iostream>

using namespace std;

int main()
{
    int x,test,max=0,maxc=0,ans=0 , cc=0,ccc=0;
    cin >> x ;
    test=x;
    while (test>0){
        test=test/10;
        cc++;
    }
    while (x>0){
        test=x;
        max=0,maxc=0;
        while (test>0){
            int d = test%10;
            test=test/10;
            if (d >max) {
                max= d;
                maxc=0;
            }
            if (d==max) maxc=maxc+1;
        }
        for (int i =0 ; i<maxc ; i++){
            ans=ans*10;
            ans=ans +max;
        }
        int m=1;
        test=x;
        while (test>0){
            int d = test%10;
            test=test/10;
            if (max==d){
                x-=max*m;
            }
            m*=10;
        }
    //cout << ans <<maxc<<endl;
    
    }
    int an;
    an=ans;
    while (an>0){
        an=an/10;
        ccc++;
    }
    ccc=cc-ccc;
    for (ccc;ccc>0;ccc--)ans*=10;
    cout <<ans ;
    return 0;
}
