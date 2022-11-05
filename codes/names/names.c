#include<stdio.h>
struct student{
    char Name[50];
} s[10];

int main(){
    int i;
    printf("Enter information of students:\n");

    //storing information
    for (i=0; i<10; ++i) {
        printf("Enter name: ");
        scanf("%s", s[i].Name);
}
printf("Displaying information:\n\n");

// displaying information
for (i=0; i<10; ++i) {
     printf("name: ");
     puts(s[i].Name);
     printf("\n");
  }
  return 0;

}
