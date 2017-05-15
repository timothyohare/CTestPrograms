#include <stdio.h>

int main()
{
	struct test {
		int test1;
	};
	struct test tester;
	printf("sizeof(tester):%lu, sizeofsizeof(tester):%lu\n", sizeof(tester), sizeof(sizeof(tester)));
	printf("sizeof(size_t):%lu\n", sizeof(size_t));
}
