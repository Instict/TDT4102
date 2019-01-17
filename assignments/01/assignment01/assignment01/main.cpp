#include "std_lib_facilities.h"
/*
Translate from C++ to Python
*/
/*
def isFibonacciNumber(n):
	a = 0
	b = 1
	while b < n:
		temp = b
		b += a
		a = temp
	return b == n

print("Is 10 a Fibonacci number: ", isFibonacciNumber(10))
print("Is 7a Fibonacci number: ", isFibonacciNumber(7))
print("Is 3 a Fibonacci number: ", isFibonacciNumber(3))
print("Is 89 a Fibonacci number: ", isFibonacciNumber(89))

*/

/* 
Translate from Python to C++
*/
//	Task A
int maxOfTwo(int a, int b) {
	if (a > b) {
		cout << "A is greater then B\n";
		return a;
	}
	else {
		cout << "B is greater than or equal to A\n";
		return b;
	}
}
//	Task C
int fibonacci(int n) {
	int a = 0;
	int b = 1;
	int temp;

	cout << "The " << n << " first Fibonacci numbers:\n";

	for (int x = 1; x <= n; x++) {
		cout << x << "  " << b << '\n';
		temp = b;
		b += a;
		a = temp;
	}

	cout << "----\n";
	return b;
}
//	Task D
int squareNumberSum(int n) {
	int totalSum = 0;
	for (int i = 0; i < n; i++) {
		totalSum += i * i;
		cout << i << "*" << i << '\n';
	}
	cout << "totalSum " << totalSum << '\n';
	return totalSum;
}
//	Task E
int triangleNumbersBelow(int n) {
	int acc = 1;
	int num = 2;
	cout << "Triangle numbers below " << n << ":\n";
	while (acc < n) {
		cout << acc << " ";
		acc += num;
		num += 1;
	}
	return NULL;
}
//	Task F
bool isPrime(int n) {
	for (int j = 2; j < n; j++) {
		if (n%j == 0) {
			return false;
		}
	}
	return true;
}
//	Task G
int naivePrimeNumberSearch(int n) {
	for (int number = 2; number < n; number++) {
		if (isPrime(number)) {
			cout << number << " is a prime\n";
		}
	}
	return NULL;
}
//	Task H
int findGreatestDivisor(int n) {
	for (int divisor = (n-1); divisor > 0; divisor--) {
		if (n%divisor == 0) {
			return divisor;
		}
	}
}

int main(){
	
	//	Task B
	cout << "Task A\n"; 
	maxOfTwo(5, 6);

	cout << "\nTask C\n";
	fibonacci(10);

	cout << "\nTask D\n";
	cout << squareNumberSum(10) << '\n';

	cout << "\n\nTask E -- Triangular number\n";
	triangleNumbersBelow(30);

	cout << "\n\nTask F -- Prime number 1\n";

	cout << "\nTask G -- Prime number 2\n";
	naivePrimeNumberSearch(10);
	
	cout << "\nTask H -- Divisor\n";
	cout << findGreatestDivisor(110) << '\n';

	return 0;
}

