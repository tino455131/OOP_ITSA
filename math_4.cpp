#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    long long int a,b;
    long long int i=0;
    while(cin>>a>>b){
        // if(a<0&&b<0) while(1);
        if(i!=0) cout<<endl;
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
        // printf("%lld+%lld=%lld\n",a,b,a+b);
        // printf("%lld*%lld=%lld\n",a,b,a*b);
        // printf("%lld-%lld=%lld\n",a,b,a-b);

        if(a%b<0){
            if(a%b-b<0){
                cout<<a<<"/"<<b<<"="<<a/b-1<<"...";
                cout<<a%b+b;
                // printf("%lld/%lld=%lld...",a,b,a/b-1);
                // printf("%lld",a%b+b);
            }else{
                cout<<a<<"/"<<b<<"="<<a/b+1<<"...";
                cout<<a%b-b;
                // printf("%lld/%lld=%lld...",a,b,a/b+1);
                // printf("%lld",a%b-b);
            }
        }else{
            cout<<a<<"/"<<b<<"="<<a/b<<"...";
            cout<<a%b;
            // printf("%lld/%lld=%lld...",a,b,a/b);
            // printf("%lld",a%b);
        }
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}