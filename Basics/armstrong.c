#include <stdio.h>
#include <math.h>
#include <unistd.h>


long power(int x, int y)
{
    if (y == 0) 
        return 1; 
    if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    return x * power(x, y / 2) * power(x, y / 2); 
}

int orderOf(int n)
{
	int x=0;
	while(n!=0){
		n = n/10;
		x++;
	}
	return x;
}

void main()
{
	int num,temp,sum=0,rem=0;
	long cube=0;
	printf("Enter Number : ");
	scanf("%d",&num);

	int order = orderOf(num);

	temp=num;
	while (num!=0)
	{
		rem=num%10;
		cube=power(rem, order);
		sum=sum + cube;
		num=num/10;
	}
	printf("Armstrong : %d\n", sum==temp);
}