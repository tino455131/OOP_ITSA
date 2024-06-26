#include <iostream>
#include <iomanip>
using namespace std;
typedef long long int data_type;

long long int powi(int a, int factor){
    long long int sum=1;
    for(int i=0;i<factor;i++){
        sum*=a;
    }
    return sum;
}

int main(){
    data_type a;
    data_type b;
    int i=0;
    while(cin>>a){
        if(i!=0) cout<<endl;
        if(powi(a/100,3) + powi(a/10%10,3) + powi(a%10,3) == a){
            cout<<"Yes";
            // printf("Yes");
        }else{
            cout<<"No";
            // printf("No");
        }
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}