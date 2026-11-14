#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Status { CONTINUE, WON, Lost};
int rollDice (void);


int main (void)
{
int sum;
int myPoint;

enum Status gameStatus;
srand (time(NULL));

sum = rollDice();
switch (sum)
{
case 7:
case 11:
    gameStatus = WON;
    break;


case 2:
case 3:
case 12:
    gameStatus = Lost;
    break;
    
default:
    gameStatus = CONTINUE;
    myPoint = sum;
    printf ( "Point is %d\n", myPoint);
    break;
}

while (CONTINUE == gameStatus)
{
    sum = rollDice();
    
    if (sum == myPoint)
    {
        gameStatus = WON;
    }
    else 
    {
        if (7 == sum)
        {
            gameStatus = Lost;
        }
    }
}

if (WON == gameStatus)
{
    puts ("Players wins");
}
else {
    puts ("Player loses");
}
}

int rollDice (void)
{
    int diel1;
    int diel2;
    int workSum;

    diel1 = 1 + (rand() % 6);
    diel2 = 1 + (rand() % 6);
    workSum =diel1 + diel2;

    printf ("Player rolled %d + %d = %d\n", diel1, diel2, workSum);
    return workSum;
}