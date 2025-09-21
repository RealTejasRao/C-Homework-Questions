#include <stdio.h>
#include <string.h>


typedef struct {

    int id;
    char name[50];
    int age;
    char dept[50];
    float cgpa;
    int attendance;
    
} Student;


typedef struct {
    int id;
    char name[50];
    int age;
    char dept[50];
    char subject[50];
} Teacher;


typedef struct {
    int id;
    char name[50];
    int age;
    char position[50];
} Staff;


void displayStudent(Student s) {
    printf("\n--- Student Info ---\n");
    printf("ID: %d\nName: %s\nAge: %d\nDepartment: %s\nCGPA: %.2f\nAttendance: %d%%\n",
           s.id, s.name, s.age, s.dept, s.cgpa, s.attendance);
}

void displayTeacher(Teacher t) {
    printf("\n--- Teacher Info ---\n");
    printf("ID: %d\nName: %s\nAge: %d\nDepartment: %s\nSubject: %s\n",
           t.id, t.name, t.age, t.dept, t.subject);
}

void displayStaff(Staff st) {
    printf("\n--- Staff Info ---\n");
    printf("ID: %d\nName: %s\nAge: %d\nPosition: %s\n",
           st.id, st.name, st.age, st.position);
}


float calculateCGPA(int marks[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += marks[i];
    return (sum / n) / 10.0;}

int main(void) {
    int choice;


    Student s1 = {101, "Tejas Rao", 19, "Computer Science", 0.0, 90};
    int marks[] = {85, 90, 78, 88, 92};
    s1.cgpa = calculateCGPA(marks, 5);


    Teacher t1 = {201, "Dr. Sharma", 45, "Computer Science", "Data Structures"};


    Staff st1 = {301, "Mr. Verma", 40, "Librarian"};


    printf("=== College Management System ===\n");
    printf("1. Show Student\n2. Show Teacher\n3. Show Staff\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: displayStudent(s1); break;
        case 2: displayTeacher(t1); break;
        case 3: displayStaff(st1); break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}
