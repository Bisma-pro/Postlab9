#include <stdio.h>
#include <conio.h>
#include "funcOne.h"
void initialize(int *arr)
{
    for (int i = 0; i < 100; i++)
        arr[i] = 0;
}

void menu(int *economy, int *first)
{
    system("cls");
    printf("\n\t\t\t\tAirplane Reservation System\n\t\t\t\t+=========================+\n");
    printf("\nSeats Availability Information\n----- ------------ -----------\nFirst Class:\t%d seats\nEconomy Class:\t%d seats\n_________________________________________\n\t\t\tTotal:\t%d seats", 30 - (*first), 70 - (*economy), 100 - (*first + *economy));
    printf("\nReserve your seat:\n\t1. First Class\n\t2. Economy Class\n\n");
}

int main()
{
    int seatsChart[100], economyCount = 0, firstCount = 0;
    char choice = 'y';
    initialize(seatsChart);
    do
    {
        menu(&economyCount, &firstCount);
        reserveSeat(seatsChart, &economyCount, &firstCount);
        printf("\nReserve another seat (y/n)?");
        choice = getche();
    } while (choice == 'y' || choice == 'Y');
    printf("\n\nThank you! Have safe travels.");
    getch();
    return 0;
}