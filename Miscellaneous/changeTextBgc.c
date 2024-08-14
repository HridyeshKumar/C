
#include<windows.h>
#include<stdio.h>

int main()
{
    //BACKGROUND_RED | BACKGROUND_GREEN| BACKGROUND_INTENSITY | BACKGROUND_BLUE
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),
                             BACKGROUND_BLUE|BACKGROUND_RED);
    printf("\n\nBackground Color Change");

    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 
                             BACKGROUND_GREEN);
    printf("\n\nBackground Color Change");

    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 
                             BACKGROUND_INTENSITY);
    printf("\n\nBackground Color Change");

    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 
                             BACKGROUND_RED);
    printf("\n\nBackground Color Change");

    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 
                             BACKGROUND_BLUE);
    printf("\n\nBackground Color Change");

    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 
                             BACKGROUND_RED|BACKGROUND_INTENSITY);
    printf("\n\nBackground Color Change");

    return 0;
}
