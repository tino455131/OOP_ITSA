#include <iostream>
#include <iomanip>
using namespace std;

typedef long long int data_type;

int main(){
    data_type a;
    data_type b;
    int i = 0;
    while (cin >> a >> b) {
        if (i != 0) cout << endl;

        if (a == 0 && b == 0) cout << "Origin";
        if (a != 0 && b == 0) cout << "x-axis";
        if (a == 0 && b != 0) cout << "y-axis";
        if (a > 0) {
            if (b > 0) {
                cout << "1st Quadrant";
            } else if (b < 0) {
                cout << "4th Quadrant";
            }
        } else if (a < 0) {
            if (b > 0) {
                cout << "2nd Quadrant";
            } else if (b < 0) {
                cout << "3rd Quadrant";
            }
        }
        i++;
    }
    cout << endl;
    return 0;
}
