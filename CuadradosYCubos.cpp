#include<iostream>
#include<cmath>
using namespace std;
int numCC(int num){
    int con=2,cont=0;
    int pot;
    while (true)
    {
        pot=pow(con,2);
        if (pot>num)
        {
            break;
        }
        if(pot<=num){
            cont++;
            con++;
        }
    }
    con=2;
    while (true)
    {
        pot=pow(con,3);
        if (pot>num)
        {
            break;
        }
        if(pot<=num){
            cont++;
            con++;
        }
    }
    return cont+1;
}
int main(int argc, char const *argv[])
{
    int tc,num;

    cin>>tc;
    while(tc--){
        cin>>num;
        if(num==1){
            cout<<"1"<<endl;
        }else{
            cout<<numCC(num)<<endl;
        }
    }    
    return 0;
}
