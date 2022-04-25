//program to find grade of a student
/*
write a program to find the grade of a student
(70-100:A,60-69:B,50-59:C,40-49:D,0-39:fail)
1.prompt the user to enter subjects marks-3
2.find average score
3.calculate grade*/

#include<stdio.h>
int main()
{ int chem,bio,phy;
float avg;
  
printf("Enter marks for bio,chem and phy\n");
scanf("%d %d %d",&bio,&chem,&phy);
avg=(chem+bio+phy)/3;
printf("The average score is %f",avg);
if(avg>=70&&avg<=100)
{ printf("grade A \n");
}
else if(avg>=60&&avg<=69)
{ printf("grade B \n");
}
 else if(avg>=50&&avg<=59)
{ printf("grade C \n");

}
else if(avg>=40&&avg<=49)
{ printf("grade D \n");
}
else if(avg>=0&&avg<=39)
{ printf("grade F");
}
else
{ printf("invalid score");
}
return 0;
}