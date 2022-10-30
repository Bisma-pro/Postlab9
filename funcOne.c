#include "funcOne.h"

void reserveSeat(int *arr, int *economy, int *first)
{
    int choice, seatNo;
    printf("Your choice? ");
    scanf("%d", &choice);
    while (choice != 1 && choice != 2)
    {
        printf("Invalid Choice!\nRe-enter your choice: ");
        scanf("%d", &choice);
    }
    printf("Enter Seat No: ");
    scanf("%d", &seatNo);
    if (choice == 1)
        while (seatNo < 1 || seatNo > 30)
        {
            printf("Invalid selection!\nRe-enter your choice: ");
            scanf("%d", &seatNo);
        }
    else
        while (seatNo < 31 || seatNo > 100)
        {
            printf("Invalid selection!\nRe-enter your choice: ");
            scanf("%d", &seatNo);
        }
    if (!arr[seatNo - 1])
    {
        arr[seatNo - 1] = 1;
        printf("Congrats! Your seat has been reserved.\n\nPress any key to get boarding pass...");
        getch();
        printf("\n\n----------------------------------------.\nBORADING PASS\t\t\t\t|\n-------------\t\t\t\t|\nSeat No: %d\t\t\t\t|\nCategory: ", seatNo);
        if (choice == 1)
        {
            printf("First Class\t\t\t|\n");
            *first += 1;
        }
        else
        {
            printf("Economy Class\t\t\t|\n");
            *economy += 1;
        }
        printf("----------------------------------------'\n");
    }
    else
    {
        printf("Sorry! This seat is already reserved.\n");
    }
}