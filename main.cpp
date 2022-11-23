#include <iostream>
#include <string>
#include <vector>
#include <omp.h>
#include <iterator>
#include "func.h"
using namespace std;

int main()
{
    vector<vector<double>> abobus4=sanya_sun("file5.txt");
    double abobus_pomenshe4[abobus4[0].size()];
    double t1 = zamer(1,abobus4,abobus_pomenshe4);
    cout << t1 << "," << zamer(2,abobus4,abobus_pomenshe4) << endl;
    cout << t1 << "," << zamer(3,abobus4,abobus_pomenshe4) << endl;
    cout << t1 << "," << zamer(4,abobus4,abobus_pomenshe4) << endl;
    cout << t1 << "," << zamer(5,abobus4,abobus_pomenshe4) << endl;
    cout << t1 << "," << zamer(6,abobus4,abobus_pomenshe4) << endl;
}
