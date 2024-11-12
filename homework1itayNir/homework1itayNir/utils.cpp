#include "utils.h"
#include "stack.h"
#include <iostream>
using namespace std;
void reverse(int* nums, unsigned int size) {/*this function reverses in the least efficecnt way possible
	(not really but this is really inefficent)
	*/
	Stack* s = new Stack;
	for (int i = 0; i < size; i++) {
		push(s, nums[i]);
	}
	for (int j = 0; j < size; j++) {
		nums[j] = pop(s);
	}
}
int* reverse10() {/*this function reverses 10 inputs */
	int* result = new int[10];
	int temp = 0;
	Stack* s = new Stack;
	for (int i = 0; i < 10; i++) {
		std::cout << "enter num: " << std::endl;
		std::cin >> temp;
		push(s, temp);
	}
	for (int j = 0; j < 10; j++) {
		result[j] = pop(s);
	}
	return result;
}