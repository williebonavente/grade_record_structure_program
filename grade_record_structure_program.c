#include <stdio.h>
#include <conio.h>

void mainmenu();
void mainmenu1();
void record();
void add_record();
void current_record();

int main()
{
    for (int r = 1; r<=56; r++)
    {
        for (int q = 0; q<=10000000; q++);
        printf("%c",219);
    }

    printf("\nLoading Complete! Press any key to continue");
    getch();
    system("cls");

    printf("\n\t\t***\n");
    printf("\nQuiz in Programming 2");
    printf("\nCreated by: Jan Rowell A. Rouello");
    printf("\nSection: BSIT 1-5");
    printf("\nProfessor: Sir Arnie Fabregas\n");
    printf("\nPress any key to continue");
    getch();
    mainmenu();
    return 0;
}

void mainmenu()
{
    //switch case
}

void mainmenu1()
{
    //have a main function (so that they have option if they want to put another record) - (renaming main as mainmenu)
}

void record()
{
    //ask for the name, midterm grade, final grade
}

void add_record()
{
    //option if they want to add another record
}

void current_record()
{
    //if they don;t want to add another record, the main function will terminate then display the current record(current_record function)
}
