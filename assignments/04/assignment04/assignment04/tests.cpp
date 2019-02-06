#include "tests.h"
#include "utilities.h"
#include "std_lib_facilities.h"

void testCallByValue() {
	int v0 = 5;
	int increment = 2;
	int iterations = 10;
	int result = incrementByValueNumTimes(v0, increment, iterations);
	cout << "v0: " << v0
		<< " increment: " << increment
		<< " iterations: " << iterations
		<< " result: " << result << endl;
}

void testCallByReference(){
	int v0 = 5;
	int increment = 2;
	int iterations = 10;
	incrementByValueNumTimesRef(v0, increment, iterations);
	cout << "v0: " << v0
		<< " increment: " << increment
		<< " iterations: " << iterations
		<< endl;
}

void testswapNumbers() {
	int firstNum = 10;
	int secondNum = 5;
	int set_width = 10;
	cout << "before swap" << endl;
	cout << "First: " << firstNum << setw(set_width) << "Second: " << secondNum << endl;
	swapNumbers(firstNum, secondNum);
	cout << "after swap" << endl;
	cout << "First: " << firstNum << setw(set_width) << "Second: " << secondNum << endl;
}

void testVectorSorting() {
	cout << "testVectorSorting" << endl;
	vector<int> percentages;
}