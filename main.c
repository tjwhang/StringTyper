#include <stdio.h>
#include <string.h>
#include <time.h>

void delay(float sec);

int main()
{
	char str[] = "Eunchani";

	for (int i=0;i<strlen(str);i++)
	{
		delay(0.1);
  		printf("%c",str[i]);
	}
	
	return 0;
}

void delay(float sec)
{
	float miliSec = 1000*sec;
	clock_t start_time = clock();
	while (clock() < start_time + miliSec)
		;
}
