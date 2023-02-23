#include <stdio.h>

#define SLEN 10
#define LEN 12

struct trick {
    char index;
    char fname[SLEN];
    char lname[SLEN];
    int check;
};

void ShowAlphabeticalListOfSeats(struct trick * seats, int n);
void ShowListOfSeats(struct trick * seats, int n);
void ShowNumberOfSeats(struct trick * seats, int n);


int main(void)
{
     
    int i;
    char select;
    struct trick seats[LEN];
    memset(seats, 0, sizeof(trick) * LEN);
    for (i = 0; i < LEN; i++)
    {
        (seats + i)->index = 'a' + i;
    }
    
    while (true)
    {
        puts("To choose a function, enter its letter label:");
        puts("a) Show number of empty seats");
        puts("b) Show list of empty seats");
        puts("c) Show alphabetical list of seats");
        puts("d) Assign a customer to a seats assignment");
        puts("e) Delete a seats assignment");
        puts("f) Quit");

        printf("select:");
        fscanf(stdin, "%c", select);
        switch (select)
        {
            case 'a':
                ShowNumberOfSeats(seats, LEN);
                break;
            case 'b':
                ShowListOfSeats(seats, LEN);
                break;
            case 'c':
                ShowAlphabeticalListOfSeats(seats, LEN);
                break;
            case 'd':
                AssignmentSeats();
                break;
            case 'e':
                DeleteSeats();
                break;
            case 'f':
                puts("Exit");
                exit(EXIT_FAILURE);
        }
        


    }

    return 0;
}

void AssignmentSeats(struct trick * seats, int n)
{
    int i;
    char select;
    for (i = 0; i < n; i++)
    {
        if ((seats + i)->select)
            printf("index[%c], name %6s%6s, select: %d", (seats + i)->index, (seats + i)->fname, (seats + i)->lname, (seats + i)->select);
        else 
            printf("index[%c], name %6s%6s, select: %d", (seats + i)->index, (seats + i)->fname, (seats + i)->lname, (seats + i)->select);
    }

    while (printf("you want select?[enter space to quit]") && fscanf(stdin, "%c", select) && getchar() && select != ' ')
    {
        if (((select - 'a') > 11) && ((select - 'a')) >= 0 )
        {
            printf("invalid input");
            continue;
        }



    }

    
}

void ShowNumberOfSeats(struct trick * seats, int n)

    int i;
    int count;
    for (i = 0, count = 0; i < n; i++)
    {
        if ((seats + i)->check == 0)
            count++;
    }
    printf("number of empty seats: %d\n", count);
}

void ShowListOfSeats(struct trick * seats, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("List of empty seats:");
        if ((seats + i)->check == 0)
        {
            printf("%d\n", (seats + i)->index);
        }

        printf("List of empty END\n");
    }

}

void ShowAlphabeticalListOfSeats(struct trick * seats, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("index [%c], first name: %6s, last name: %6s\n", (seats + i)->index, (seats + i)->fname, (seats + i)->lname);
    }
}






