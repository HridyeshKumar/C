
#include<windows.h>
#include<stdio.h>
void setColor(int ForgC);
int main()
{
    setColor(26);
    printf("Color Change : Programming Hub");
    setColor(36);
    printf("\n\nColor Change : Programming Hub");
    setColor(46);
    printf("\n\nColor Change : Programming Hub");
    setColor(56);
    printf("\n\nColor Change : Programming Hub");
    setColor(66);
    printf("\n\nColor Change : Programming Hub");
    setColor(76);
    printf("\n\nColor Change : Programming Hub");
    getch();
    return 0;
}
void setColor(int ForgC)
{
    WORD wColor;

    //We will need this handle to get the current background attribute
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}
