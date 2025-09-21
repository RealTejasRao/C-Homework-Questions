#include <stdio.h>

int main(void){

    FILE *file= fopen("q3.csv", "w");

    if(!file) return printf("File not found,\n"), 0;

    typedef struct AllStudents{

        char name[100];
        int marks;
        float cgpa;
        char course[100];
    } Student;

    Student s[5]= {

        {"Tejas Rao", 500, 10, "CSE"},
        {"Amit Sharma", 420, 8.2, "ECE"},
        {"Neha Gupta", 460, 9.1, "ME"},
        {"Rohan Singh", 410, 7.9, "IT"},
        {"Priya Verma", 430, 8.4, "Civil"}

    };

    fprintf(file, "%15s %10s %10s %10s\n", "Name", "Marks", "CGPA", "Course");
    fprintf(file, "__________________________________________________\n");

    for (int i = 0; i < 5; i++) {
        fprintf(file, "%15s %10d %10.2f %10s\n",
                s[i].name,
                s[i].marks,
                s[i].cgpa,
                s[i].course);
    }

    fclose(file);


}
