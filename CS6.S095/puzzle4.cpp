/* MIT CS6.S095 puzzle4 
 * Author: Rebecca
 * Description: Given tower of n floors, and d identical crystal balls,
 *              we want to measure the hardness coeficient of crystal balls.
 * 				The hardness coeficient f is defined as the number of floors 
 * 				argmax(f) s.t. drop balls from floor f won't break them, 
 *				for any f'>f balls will break
 * Goal: design a partition method to find out the hardness coef. such that the 
 *       total number of ball-dropping is optimal, even in the WORST CASE
 */

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::vector;

/**
 * Partition(int n, int d) estimate the optimal partition strategy for search
 *	
 * @param: n, number of floor 
 *		   d, # of balls we have
 *
 * @return the estimated partition value/base
 */
int Partition(int n, int d){
	return std::pow(n,1.0/d);
}

/**
 * Shift(int n, int d) change to next partition point based on the algo.
 *
 * @param: curr, current R-based value 
 *		   decision, from last partition point, whether the ball breaks
 *
 * @return the estimated partition value/base
 */
int Shift(int curr, bool decision){
	// todo
	
	return 0;
}

/**
 * Base10(int n, int R) convert the R based number to 10-based
 *	
 * @param: n, number 
 *		   R, old base
 *
 * @return number represented in 10-base
 */
int Base10(vector<int> n, int R){
	int res = 0;
	for(unsigned i=0;i<n.size()-1;i++){
		res = (res+n[i])*R;
	}
	res = res+n.back();
	return res;
}


/**
 * BaseR(int n, int R) convert the 10 based number to R-based
 *	
 * @param: n, number 
 *		   R, new base
 *
 * @return vector, each digit represented in R-base
 */
vector<int> BaseR(int n, int R){
	int digits = std::log(n)/std::log(R);
	vector<int> res(digits+1,0);
	for(unsigned i=0;i<digits+1;i++){
		res[digits-i] = n%R;
		n = n/R;
	}
	return res;
}

void print_baseR(vector<int>& n){
	for(const int i:n){
		cout<<i;
	}
	cout<<endl;
}

/**
 * @ todo: Given total number of floors and the actual hardness coef, find the 
 * optimal number of experiment; along, print all the experiments
 *	
 * @param: n, number of floor 
 *		   f, the hardness coef
 *
 * @return the number of experiment
 */
int Track(int n, int d, int f){
	int R = Partition(n, d);
	int count = 0;

	// todo
	return count;
}



int main(){
 // test Partition()
 	// int n, d;
 	// std::cin>>n>>d;
 	// cout<<Partition(n, d)<<endl;

	int n, d;
 	std::cin>>n>>d;
 	vector<int> res = BaseR(n, d);
 	print_baseR(res);
 	cout<<"Validation: in base(10) "<<Base10(res, d)<<endl;

 	return 0;
 }