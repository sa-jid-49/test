#include <stdio.h>

int main()
{
    int movie;
    int ticket;
    int price;
    int total;
    int i;
    int available = 20;
    char choice;

    printf("===== ONLINE MOVIE TICKET BOOKING =====\n");

    printf("\nAvailable Movies:\n");
    printf("1. Avengers\n");
    printf("2. Spider-Man\n");
    printf("3. Batman\n");
    printf("4. Superman\n");

    printf("\nEnter movie number: ");
    scanf("%d", &movie);

    /* switch statement */
    switch(movie)
    {
        case 1:
            printf("You selected Avengers\n");
            price = 300;
            break;

        case 2:
            printf("You selected Spider-Man\n");
            price = 250;
            break;

        case 3:
            printf("You selected Batman\n");
            price = 280;
            break;

        case 4:
            printf("You selected Superman\n");
            price = 200;
            break;

        default:
            printf("Invalid movie number\n");
            return 0;
    }

    printf("\nAvailable tickets = %d\n", available);

    /* do while statement */
    do
    {
        printf("Enter number of tickets: ");
        scanf("%d", &ticket);

        /* if statement */
        if(ticket <= 0)
        {
            printf("Invalid number of tickets\n");
        }
        else if(ticket > available)
        {
            printf("Sorry! Only %d tickets are available.\n", available);
        }

    } while(ticket <= 0 || ticket > available);

    /* for loop */
    printf("\nTicket Information:\n");

    for(i = 1; i <= ticket; i++)
    {
        printf("Ticket %d booked\n", i);
    }

    total = price * ticket;

    /* conditional operator */
    choice = (ticket >= 3) ? 'Y' : 'N';

    printf("\nTicket price = %d taka\n", price);
    printf("Total price = %d taka\n", total);

    /* if else statement */
    if(choice == 'Y')
    {
        total = total - (total * 10 / 100);

        printf("10%% discount applied\n");
        printf("Final price = %d taka\n", total);
    }
    else
    {
        printf("No discount\n");
        printf("Final price = %d taka\n", total);
    }

    /* update available tickets */
    available = available - ticket;

    printf("\nRemaining tickets = %d\n", available);

    /* while statement */
    i = 1;

    printf("\nBooking Confirmation:\n");

    while(i <= ticket)
    {
        printf("Ticket %d confirmed\n", i);
        i++;
    }

    printf("\n===== BOOKING SUCCESSFUL =====\n");

    return 0;
}
