#include <stdio.h>

int main(void) {
  
  int i=0;
  int grades[10];
  int number;
  int lowest;
  int highest;
  
  for(i=0;i<10;i++)
    {
      printf("Enter the grades of %d. student: ",i+1);
      scanf("%d",&number);
      if(number<0 || number>100)
      {
        printf("Please enter a valid grade.\n");
        i--;
      }else
      {
        grades[i]=number;
      }
    }
  /*
  for(i=0;i<10;i++)
    {
      printf("\nThe grade of the %d. student is %d",i+1,grades[i]);
    }
  */
  int total=0;
  float average;

  for(i=0;i<10;i++)
    {
      total+=grades[i];
    }
  average=(float)total/10;
  printf("\nThe average of grades is %f", average);
  
  int min=grades[0];
  lowest=1;
  for(i=1;i<10;i++)
    {
      if(min>grades[i])
      {
        min=grades[i];
        lowest=i+1;
      }
    }
  printf("\nThe lowest grade is %d by the %d. student.",min,lowest);

  int max=grades[0];
  highest=1;
  for(i=1;i<10;i++)
    {
      if(max<grades[i])
      {
        max=grades[i];
        highest=i+1;
      }
    }
  printf("\nThe highest grade is %d by the %d. student.",max,highest);
  
  
  printf("\nStudent with grades above average: ");
    
  for(i=0;i<10;i++)
  {
    if((float)grades[i]>average)
    {
      printf("\n%d. student",i+1);
    }
  }
  return 0;
}