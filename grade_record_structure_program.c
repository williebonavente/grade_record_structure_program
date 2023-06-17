#include <stdio.h>
#include <conio.h>

struct Student {
    char name[50];
    float midtermGrade;
    float finalGrade;
};

void record();
void displaya_record();
void mainmenu();
void add_record();

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
    
    for (int i = 0; i < 2; i++) 
    {

        printf("Enter 5 information for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Midterm grade: ");
        scanf("%d", &students[i].midtermGrade);

        printf("Final grade: ");
        scanf("%d", &students[i].finalGrade);

        printf("\n");
    }
}

void display_record(struct Student students[])
{
    //if they don;t want to add another record, the main function will terminate then display the current record(current_record function)
    printf("Student records:\n");
    printf("Name\t\tMidterm Grade\tFinalGrade\tAve.Grade\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t\t%d\t\t%d\t\t%.2f\n", students[i].name, students[i].midtermGrade, students[i].finalGrade, (students[i].midtermGrade + students[i].finalGrade) / 2.0);
    }
    getch();
}


void mainmenu()
{
    system("cls");
    char choice;

    printf("\n\t    ***\n");
    printf("Do you want to Input another Record?[Y/N]: ");
    getchar();
    choice = getchar();
    if (choice == 'Y' || choice == 'y')
    {
        add_record();
    }
    else if (choice == 'N' || choice == 'n')
    {
        display_record();
    }
    else
    {
        printf("Invalid Input");
    }
}

void add_record()
{
    //option if they want to add another record
    system("cls");
    int a;
    struct Student add[a];

    printf("How many do you want to add? ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        printf("Enter details for student %d:\n", i+1);
        
        printf("Name: ");
        scanf("%s", add[i].name);
        
        printf("Midterm grade: ");
        scanf("%d", &add[i].midtermGrade);
        
        printf("Final grade: ");
        scanf("%d", &add[i].finalGrade);
        
        printf("\n");
    }
}