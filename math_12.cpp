#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
typedef int data_type;
int main(){
    data_type a;
    data_type b;
    double inch = 2.54;
    inch *= 30;
    inch = 100.0 - inch;
    int i=0;
    while(cin>>a){
        if(i!=0) cout<<endl;
        cout<<(int)ceil((float)(a*100)/inch);
        // printf("%d", (int)ceil((float)(a*100)/inch));
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}