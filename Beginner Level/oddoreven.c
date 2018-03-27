#include <stdio.h>
int main(void) {
	int a;
	printf("enter the value");
	scanf("%d",&a);
	if(1<=a<=10000)
	printf("positive number");
	elseif(a==0)
  printf("zero");
  else
	printf("negative number");
	return 0;
}
