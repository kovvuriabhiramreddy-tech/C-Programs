#include <stdio.h>
int main(){
 long long m,i,balls,runs,wickets,h,hr,five;
 if(scanf("%lld %lld %lld %lld %lld %lld %lld %lld",&m,&i,&balls,&runs,&wickets,&h,&hr,&five)!=8) return 0;
 double avg=0,sr=0,econ=0;
 if(wickets){ avg=(double)runs/wickets; sr=(double)balls/wickets; }
 if(balls){ double overs=(double)(balls/6)+(double)(balls%6)/10.0; econ=(double)runs/overs; }
 printf("%.2f
%.2f
%.2f",avg,sr,econ);
 return 0;
}
/*
Bowler statistics

Program Description
Given an array of integers which consists of a particular bowler statistics, From the given data find
the average, economy and strike rate of the bowler. (rounded to 2 decimal points) 

Note:
1. A cricketer's bowling average is calculated by dividing the number of runs they have conceded by the number of wickets they have taken.
2. A bowler's strike rate is calculated by dividing the number of balls he or she has bowled by the number of wickets taken with those balls.
3. Bowler economy is calculated as runs given by the bowler divided by overs delivered. (you need to convert balls delivered into overs. 1 over has 6 balls, 20 balls = 3.2 overs) 

Input Format
Given array consists of 8 elements they are;
1st element represents matches played by the bowler.
2nd element represents innings played by the bowler.
3rd element represents balls delivered.
4th element represents Runs given by the bowler.
5th element represents wickets taken by the bowler.
6th element represents the highest number of wickets taken by the bowler in a single match.
7th element represents runs given by the bowler in the match where he took maximum wickets(i.e, it represents the 6th element)
8th element represents the number of 5 wickets haul taken by the bowler.

Output Format
In the first line print Bowler average.
In the second line print Bowler Strike rate
In the last line print Bowler economy.

Constraints
Length of array = 8

Input-1
250 248 12970 8391 381 7 15 7 

Output-1
22.02
34.04
3.88 
*/
