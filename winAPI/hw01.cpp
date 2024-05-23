//Windows API as part of this playlist https://www.youtube.com/playlist?list=PLKUl_fMWLdH8Kk4iFnWHhU43xXG2t6bjf
//Homework 1: Create game based on MessageBox()

#include <iostream>
#include <Windows.h>

int main(){
    wchar_t content[] = L"content";
    wchar_t title[] = L"title";

    int code = MessageBoxW(0, content, title, MB_OKCANCEL);

    if(code == IDOK){
        std::cout << "ok";
    }
    else if(code == IDCANCEL){
        std::cout << "cancel";
    }

    SECURITY_ATTRIBUTES att = {sizeof(SECURITY_ATTRIBUTES)};

    std::cin.get();
    return 0;
}
