#include <iostream>
#include <windows.h>

int main(){
    PCONSOLE_FONT_INFOEX console_info = new CONSOLE_FONT_INFOEX;
    console_info->cbSize = sizeof(CONSOLE_FONT_INFOEX);
    GetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), false, console_info);
    console_info->dwFontSize.X = 8; //default 8
    console_info->dwFontSize.Y = 18; //default 12 
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), false, console_info);
 
    return 0;
}
