#include <iostream>
#include <windows.h>

using namespace std;

void setcolor(int ForgC){
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi)){
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}

int main()
{
    /* For the functions of "setcolor"
    there are some imprortant colors
    that you can use in you projedts
    (FOR HAVING ALL IMPORTNAT SPECEFICTS FUNCTIONS ->
    "https://github.com/ErvinGh88/AI-Emi/tree/main/Codeblocks%20Specific%20Functions%20(AI%20Part)"
        <- OPEN THIS WEBSITE) */

    int yello=246;
    int white=7;
    int blue=1;
    int red=4;
    int green=162;
    int pink=245;
    int black=16;
    int aqua=67;
    int brown=4;
    int gray=8;
    int gold=6;
    int violet=5;


    //enjoy :)
    //By ErvinGh88


    return 0;
}
