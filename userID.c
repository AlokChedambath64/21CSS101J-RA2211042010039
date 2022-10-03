#include<stdio.h>
#include<cs50.h>

int main()
{
  // Name of Institute
  printf("SRM institute of Science and Technology\n");
  // Name of Student
  string name = get_string("Name of student: ");

  // Course
  string course = get_string("Name of Course: ");
  
  // Regsitration Number
  string RA = get_string("Registration Number: ");
  
  printf("\n");
  printf("\n");
  printf("\n");

  printf("Name of student: %s\n", name);
  printf("Name of Course:%s\n", course);
  printf("Registration Number:%s\n", RA);

  return 0;
}
