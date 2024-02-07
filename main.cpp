#include<bits/stdc++.h>
using namespace std;

int main(){
    int nb,x;
    cin>>x;
    if(x<=5){
        nb=1;
    }else{
        nb=x/5;
        if(x%5!=0){
            nb++;
        }

    }
    cout<<nb<<endl;
    return 0;
}