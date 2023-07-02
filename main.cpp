#include "ForCalcu.h"
#include<iostream>
using namespace std;
int main() {

    cout << "Please input the expression you want to calculate:" << endl;
    string s;
    getline(cin, s);
    ForCalcu calcu;
    cout << "the result is:" << calcu.calculatesum(s) << endl;
    return 0;
}