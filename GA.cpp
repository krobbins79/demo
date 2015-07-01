//============================================================================
// Name        : GeneticAlgorithm.cpp
// Author      : Kelly Robbins
// Version     :
// Copyright   : Your copyright notice
// Description : Implements the Genetic Algorithm
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "C++ implementation of the Genetic Algorithm" << endl; // prints program description
	return 0;
    int chrSize=5;
    int chr1[5];
    chr1=setChromosome(chrSize);
    cout << chr1[0] << endl;
    cout << chr1[1] << endl;
    cout << chr1[2] << endl;


}

int setChromosome (int chrSize) {
	int chromosome[chrSize];
	for(int i=0;i<chrSize;i++){
		chromosome[i]=i;
	}
	return chromosome;
}
