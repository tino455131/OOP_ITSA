#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a,b;
    int i=0;
    while(cin>>a>>b){
        if(i!=0) cout<<endl;
        float area = (float)a*b/2;
        cout<<fixed<<setprecision(1)<<area;
        // printf("%.1f",area);
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}