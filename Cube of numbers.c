//Program to display cube of a number upto a certain integer


#include <stdio.h>
main()
 {
     int i,ctr;
     printf("Enter the number of terms : ");
     scanf("%d", &ctr);
    
     for(i=1;i<=ctr;i++)
    {
	  printf("Number is = %d and cube of the %d is =%d \n",i,i, (i*i*i));     
    }
    return 0;
}
