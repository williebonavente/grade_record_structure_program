#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    float midtermGrade;
    float finalGrade;
};

void record(struct Student students[]);
void display_record(struct Student students[]);
void mainmenu(struct Student students[]);
void add_record(struct Student students[]);

int main()
{
    struct Student students[50];
    for (int r = 1; r<=56; r++)
    {
        for (int q = 0; q<=10000000; q++);
        printf("%c",219);
    }

    printf("\nLoading Complete! Press any key to continue");
    getch();
    system("cls");

    printf("\n    ***\n");
    printf("\nQuiz in Programming 2");
    printf("\nCreated by: Jan Rowell A. Rouello");
    printf("\nSection: BSIT 1-5");
    printf("\nProfessor: Sir Arnie Fabregas\n");
    printf("\nPress any key to continue");
    getch();
    record(students);

    return 0;
}

void record(struct Student students[])
{
    //ask for the name, midterm grade, final grade
    system("cls");
    
    printf("\n\t***\n");
    printf("\nInput 5 student records\n");
    for (int i = 0; i < 5; i++) 
    {

        printf("Enter information for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Midterm grade: ");
        scanf("%f", &students[i].midtermGrade);

        printf("Final grade: ");
        scanf("%f", &students[i].finalGrade);

        printf("\n");
    }
    mainmenu(students);
}

void mainmenu(struct Student students[])
{
    system("cls");
    char choice;

    printf("\n\t    ***\n");
    printf("Do you want to Input another Record?[Y/N]: ");
    getchar();
    choice = getchar();
    if (choice == 'Y' || choice == 'y')
    {
        add_record(students);
    }
    else if (choice == 'N' || choice == 'n')
    {
        display_record(students);
    }
    else
    {
        printf("Invalid Input");
    }
}

void display_record(struct Student students[])
{
    //if they don;t want to add another record, the main function will terminate then display the current record(current_record function)
    system("cls");
    printf("\n\t\t***\n");
    printf("\nStudent records:\n");
    printf("Name\t\tMidterm Grade\tFinalGrade\tAve.Grade\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\n", students[i].name, students[i].midtermGrade, students[i].finalGrade, (students[i].midtermGrade + students[i].finalGrade) / 2.0);
    }
}


void add_record(struct Student students[])
{
    //option if they want to add another record
    system("cls");
    int a;
    struct Student add[a];

    printf("\n\t\t***\n");
    printf("How many do you want to add? ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        printf("Enter details for student %d:\n", i+1);
        
        printf("Name: ");
        scanf("%s", add[i].name);
        
        printf("Midterm grade: ");
        scanf("%f", &add[i].midtermGrade);
        
        printf("Final grade: ");
        scanf("%f", &add[i].finalGrade);
        
        printf("\n");
    }
    system("cls");

    display_record(students);

    for (int i = 0; i < a; i++) {
        printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\n", add[i].name, add[i].midtermGrade, add[i].finalGrade, (add[i].midtermGrade + add[i].finalGrade) / 2.0);
    }
    getch();
}