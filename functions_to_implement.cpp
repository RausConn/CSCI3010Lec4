#include <iostream>
#include <vector>

int RemoveTwos(int original) {
	if(original % 2 == 0)
		return RemoveTwos(original/2);
	else
		return original;
}

// takes an int, n, and returns the nth value of the fibonacci sequence (1, 1, 2, 3, 5, 8, 13, ...)
int NthFibonacci(int n) {
	if(n==1 || n==2)
		return 1;
	else
		return NthFibonacci(n-1) + NthFibonacci(n-2);
}

// takes an int, n, and returns the factorial of that int (n!)
long long Factorial(long long n){
	if(n>1)
		return n*Factorial(n-1);
	else
		return 1;
}

// returns -1 if the number is negative and 1 if positive
int Sign(int num) {
	if(num < 0)
		return -1;
	else
		return 1;
}

// returns -1 if the number is negative and 1 if positive
int Sign(double num) {
	if(num < 0)
		return -1;
	else
		return 1;
}