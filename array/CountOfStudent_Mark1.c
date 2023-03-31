#include <stdio.h>

int main() {
    int marks[100], groups[11]; // marks array to store marks of students, groups array to store count of students in each group
    int i, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter the marks of students:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &marks[i]);

        int group = marks[i] / 10; // determine the group for the current student based on their marks
        if(group == 10) {
            group = 9; // group 10-100 is represented by index 9 in the groups array
        }

        groups[group]++; // increment the count for the group of the current student
    }

    printf("\nNumber of students in each group:\n");
    for(i=0; i<10; i++) {
        if(i == 9) {
            printf("10-100: %d\n", groups[i]); // print the count for group 10-100
        } else {
            printf("%d-%d: %d\n", i*10, i*10+9, groups[i]); // print the count for other groups
        }
    }

    return 0;
}
