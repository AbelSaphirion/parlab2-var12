#include <iostream>
#include <string>
#include <vector>
#include <omp.h>
#include <iterator>
#include <fstream>
#include <chrono>
#include "func.h"
using namespace std;

void  naperdel(int count_treads, vector<vector<double>> &abobus,double* abobus_pomenshe ){
	int x=abobus.size();
	int y=abobus[0].size();
	#pragma omp parallel num_threads(count_treads)
	{
		#pragma omp for
		for(int i = 0; i < y; i++)
			abobus_pomenshe[i] = abobus[0][i] * (2 - (i % 2));
		#pragma omp for reduction(max:abobus_pomenshe[:y]) collapse(2)
		for (int i=0; i<x; i++){
			for (int j=0; j<y; j++){
				if (j%2==0){
					abobus[i][j]*=2;
				}
				abobus_pomenshe[j]=abobus[i][j];
			}
		} 
	}
}

vector<vector<double>> sanya_sun (string stroka){
	ifstream ifpatok(stroka, std::ios::binary);
	int a;
	int b;
	ifpatok >> a >> b;
	vector<vector<double>> scania (a,vector <double>(b));
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			ifpatok >> scania[i][j];
		}
	}
	return scania;
}

double zamer (int count_treads, vector<vector<double>> &abobus,double* abobus_pomenshe){
	auto t1=chrono::high_resolution_clock::now();
	naperdel(count_treads,abobus,abobus_pomenshe);
	auto t2=chrono::high_resolution_clock::now();
	chrono::duration<double,milli> ms_double = t2-t1;
	return ms_double.count();
}
