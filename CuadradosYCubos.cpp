#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int tc,num,res1,res2;

    cin>>tc;
    while(tc--){
        cin>>num;
        res1=sqrt(num);
        res2=pow(num,(1.0/3.0));
        cout<<res1+res2-1<<endl;
    }    
    return 0;
}
