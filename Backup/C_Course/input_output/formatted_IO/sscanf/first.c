#include<stdio.h>
int main()
{
  int age,data,size=50;
  char my_string[size],name[20],gender;
  float height;
  printf("Please enter Name, Age, Gender, Height separated by - : ");
  scanf("%[^\n]",my_string);
  printf ("\n%s\n", my_string);
  data = sscanf (my_string, "%[^-]-%d-%c-%f", name, &age, &gender, &height);
  if (data != 4)
        puts ("\nInput invalid!");
  else
	printf ("\n%s\n%d\n%c\n%.2f\n", name, age, gender,height);

  return 0;
}
