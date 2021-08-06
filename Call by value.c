//call by value
#include <stdio.h>
int main()
{
	int answer;
	int num1 =25;
	int num2 =35;
	answer =addition(num1, num2);
	printf("The addition of two numbers: %d\n", answer);
	return 0;
}
int addition (int x, int y)
{
	return y+x;
}
