#include<stdio.h>

struct date
{
char Loc[50];
int month;
int day;
int year;
};



int main()
{

struct date today = {"Today is", 02, 28, 2019};

struct date tomorr = {"Tomorrow is going to be", 02, 29, 2019};

DyAftrTom = (struct date){"The day after Tomorrow is going to be", 01, 03,2019};


printf("%s %d %d %i\n", today.Loc, today.day, today.month, today.year);

printf("%s %d %d %i\n", tomorr.Loc, tomorr.day, tomorr.month, tomorr.year);

printf("%s %d %d %i\n", DyAftrTom.Loc, DyAftrTom.day, DyAftrTom.month, DyAftrTom.year);
return 0;
}
