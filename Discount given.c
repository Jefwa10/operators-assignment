//program to calculate discount

#include<stdio.h>
int main()
{ 
float discount=0.1;
int Amount;
printf("Enter a");
scanf("%d",&Amount);
if(Amount>5000)
{ discount=Amount*0.1;
}
else
{
discount=0;
}
Amount=Amount-discount;
printf("%if",Amount);
return 0;
}


