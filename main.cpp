#include <iostream>
#include <string>
#include <vector>
#include <omp.h>
#include <iterator>
#include "func.h"
using namespace std;

int main()
{
    vector<vector<double>> abobus=sanya_sun("file1.txt");
    vector<vector<double>> abobus1=sanya_sun("file2.txt");
    vector<vector<double>> abobus2=sanya_sun("file3.txt");
    vector<vector<double>> abobus3=sanya_sun("file4.txt");
    vector<vector<double>> abobus4=sanya_sun("file5.txt");
    double abobus_pomenshe[abobus[0].size()];
    double abobus_pomenshe1[abobus1[0].size()];
    double abobus_pomenshe2[abobus2[0].size()];
    double abobus_pomenshe3[abobus3[0].size()];
    double abobus_pomenshe4[abobus4[0].size()];
    cout << zamer(1,abobus,abobus_pomenshe) << "," << zamer(4,abobus,abobus_pomenshe) << endl;
    cout << zamer(1,abobus1,abobus_pomenshe1) << "," << zamer(4,abobus1,abobus_pomenshe1) << endl;
    cout << zamer(1,abobus2,abobus_pomenshe2) << "," << zamer(4,abobus2,abobus_pomenshe2) << endl;
    cout << zamer(1,abobus3,abobus_pomenshe3) << "," << zamer(4,abobus3,abobus_pomenshe3) << endl;
    cout << zamer(1,abobus4,abobus_pomenshe4) << "," << zamer(4,abobus4,abobus_pomenshe4) << endl;
}
