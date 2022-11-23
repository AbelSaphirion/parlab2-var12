#include <iostream>
#include <string>
#include <vector>
#include <omp.h>
#include <iterator>
#include "func.h"
using namespace std;

int main()
{
    vector<vector<double>> abobus = {{69,2,3,233,2},{3,-3,7,8,9},{1,-12,34,67,87},{34,1,5,8,0},{1,56,9,1,9}};
    double abobus_pomenshe[5];
    naperdel(5,abobus,abobus_pomenshe);
    cout<<abobus_pomenshe[0];
}