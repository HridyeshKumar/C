//Operations on Sequential File
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
int id;
char name[20];
float salary;
} Employee;
void writeFile() {
FILE *file;
Employee emp;
file = fopen("employees.dat", "wb");
if (file == NULL) {
printf("Error opening file\n");
exit(1);
}
for (int i = 0; i < 5; i++) {
printf("Enter ID, Name, and Salary for employee %d: ", i+1);
scanf("%d %s %f", &emp.id, emp.name, &emp.salary);
fwrite(&emp, sizeof(emp), 1, file);
}
fclose(file);
}
void readFile() {
FILE *file;
Employee emp;
file = fopen("employees.dat", "rb");
if (file == NULL) {
printf("Error opening file\n");
exit(1);
}
printf("ID\tName\tSalary\n");
while(fread(&emp, sizeof(emp), 1, file)) {
printf("%d\t%s\t%.2f\n", emp.id, emp.name, emp.salary);
}
fclose(file);
}
void updateFile() {
FILE *file;
Employee emp;
int id, found = 0;
file = fopen("employees.dat", "r+b");
if (file == NULL) {
printf("Error opening file\n");
exit(1);
}
printf("Enter ID of the employee to update: ");
scanf("%d", &id);
while(fread(&emp, sizeof(emp), 1, file) && found == 0) {
if(emp.id == id) {
printf("Enter new name and salary: ");
scanf("%s %f", emp.name, &emp.salary);
fseek(file, -sizeof(emp), SEEK_CUR);
fwrite(&emp, sizeof(emp), 1, file);
found = 1;
}
}
if(found == 0)
printf("No record found\n");
fclose(file);
}
int main() {
writeFile();
readFile();
updateFile();
readFile();
return 0;
}
