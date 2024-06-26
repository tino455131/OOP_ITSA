#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a,b;
    int i=0;
    while(cin>>a>>b){
        if(i!=0) cout<<endl;//printf("\n");
        int sum = a+b;
        cout<<sum;
        // printf("%d",sum);
        i++;
    }
    // printf("\n");
    cout<<endl;
    return 0;
}