#include<stdio.h>
main()
{
	int eng,c,power_bi,maths,phy,total;
	float avg;
	printf ("enter english, c programming, power bi, maths, physics");
	scanf("%d%d%d%d%d",&eng,&c,&power_bi,&maths,&phy);
	total=eng+c+power_bi+maths+phy;
	avg=total/5;
	printf("\n total marks %d",total);
	printf("\n average %d",avg);
}
