#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int main()
{
	int32_t test_int_min = INT_MIN;
	printf("test_int_min: %d, abs:%d\n", test_int_min,  abs(test_int_min));
	int32_t test_zero = 0;
	printf("test_zero: %d, abs:%d\n", test_zero,  abs(test_zero));
	int32_t test_neg_one = -1;
	printf("test_neg_one: %d, abs:%d\n", test_neg_one,  abs(test_neg_one));
	int32_t test_int_min_plus_1 = INT_MIN + 1;
	printf("test_int_min_plus_1: %d, abs:%d\n", test_int_min_plus_1,  abs(test_int_min_plus_1));
	int32_t test_int_max = INT_MAX;
	printf("test_int_max: %d, abs:%d\n", test_int_max,  abs(test_int_max));
	return 0;
 }
