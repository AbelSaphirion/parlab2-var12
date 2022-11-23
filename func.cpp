#include <iostream>
#include <string>
#include <vector>
#include <omp.h>
#include <iterator>
#include "func.h"
using namespace std;

void  naperdel(int count_treads, vector<vector<double>> &abobus,double* abobus_pomenshe ){
    int x=abobus.size();
    int y=abobus[0].size();
    #pragma omp parallel for num_threads(count_treads) reduction(max:abobus_pomenshe[:y])
    for (int i=0; i<x; i++){
    
       for (int j=0; j<y; j++){
           
           if (j%2==0){
            abobus[i][j]*=2;
            
           }
        abobus_pomenshe[j]=abobus[i][j];
       }
    }  
}
