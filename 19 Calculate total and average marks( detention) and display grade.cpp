#include<stdio.h>
int main()
{
	int s1,s2,s3,total;
	float avg;
	int roll;
	char name[54];
	printf ("Enter Your Name ");
	scanf("%s",&name);
	printf ("\nEnter roll ");
	scanf("%d",&roll);
	printf ("enter s1,s2,s3");
	scanf("%d%d%d",&s1,&s2,&s3);
	total=s1+s2+s3;
	avg=total/3;
	printf("\n total marks %d",total);
	printf("\n average %d",avg);
	if(s1<40&&s2<40&&s3<40)
	{ 
	printf("\n failed");
	}
	else if(avg>70)
	{
	printf("\n grade is distinction");
	}
	else if(avg>60)
	{
	printf("\n grade is first class");
	}
	else
	{
	printf("\n grade is pass");
	}
	return 0
	
}
	

