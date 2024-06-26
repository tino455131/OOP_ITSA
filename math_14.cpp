#include <iostream>
#include <iomanip>
using namespace std;
typedef long long int data_type;
int main(){
    data_type a;
    data_type b;
    int i=0;
    int day = 60*60*24;
    int minu = 60;
    int hour = 60*60;
    while(cin>>a){
        if(i!=0) cout<<endl;
            cout<<a/day<<" days\n";
            // printf("%d days\n", a/day);
            a = a%day;
            cout<<a/hour<<" hours\n";
            // printf("%d hours\n", a/hour);
            a = a%hour;
            cout<<a/minu<<" minutes\n";
            // printf("%d minutes\n", a/minu);
            a = a%minu;
            cout<<a<<" seconds";
            // printf("%d seconds", a);
        i++;
    }
    cout<<endl;
    // printf("\n");
    return 0;
}