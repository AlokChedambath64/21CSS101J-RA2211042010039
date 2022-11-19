#include <stdio.h>
void main()
{
  printf("RA2211042010039\n");
  int marks, distinction_marks = 75;
  printf("Enter Marks : ");
  scanf("%d", &marks);
  if (marks > distinction_marks)
  {
    printf("User secured distinction.\n");
  }else{
    printf("User did not secure distinction.\n");
  }
