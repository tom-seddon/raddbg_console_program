#include <stdio.h>
#include <windows.h>

//#pragma comment(linker, "/SUBSYSTEM:WINDOWS")

int main(){
    printf("press return to exit\n");

    getchar();
}

int WinMain(HINSTANCE,HINSTANCE,LPSTR,int){
	MessageBoxW(nullptr,L"click OK to exit",L"Hello",MB_OK);
	return 0;
}

