#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int year,month,day,sum,leap;
printf("Please enter the year, month and day in the format: year, month, day (2019, 4, 19):");
scanf("%d,%d,%d", &year, &month, &day);
switch(month)
{
case 1:sum = 0;
break;
case 2:sum = 31;
break;
case 3:sum = 59;
break;
case 4:sum = 90;
break;
case 5:sum = 120;
break;
case 6:sum = 151;
break;
case 7:sum = 181;
break;
case 8:sum = 212;
break;
case 9:sum = 243;
break;
case 10:sum = 273;
break;
case 11:sum = 304;
break;
case 12:sum = 334;
break;
default:printf("The number of months is incorrectly entered!\n");
return -1;
}
sum += day;
if (year%400==0 || (year%100!=0 && year%4==0))
leap = 1;
else
leap = 0;
if (1==leap && month>2)
sum++;
printf("This day is the %d day of the year.\n", sum);
system ("pause");
return 0;
}
