//program to execute a structure
/*
Name:Fiona wanjiku
Reg no:CT101/G/25189/24
*/
#include<stdio.h>
#include<string.h>
struct employee{
  char name[25];
  char email[50];
  char department[20];
  int  identification_number;
  float salary;
}
employee1;
int main (){
  strcpy(employee1.name,"John Doe");
  strcpy(employee1.email,"JohnDuo@company.com");
  strcpy(employee1.department,"Human Resources");
  employee1.identification_number=1234;
  employee1.salary=55000.50;
  printf("Name:%s\n", employee1.name);
  printf("Email: %s\n",employee1.email);
  printf("Department:%s\n",employee1.department);
  printf("Identification_number:%d\n",employee1.identification_number);
  printf("Salary:%f\n",employee1.salary);
  return 0;
  }


// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 