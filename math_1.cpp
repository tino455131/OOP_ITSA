#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a,b,c;
    int i=0;
    while(cin >> a >> b >> c){
        if(i!=0) cout<<endl;
        float area = (float)(a+b)*c/2;
        // printf("Trapezoid area:%.1f",area);
        cout << "Trapezoid area:"<< fixed << setprecision(1) <<area;
        i++;
    }
    cout<< endl;
    // printf("\n");
    return 0;
}