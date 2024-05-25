//Windows API as part of this playlist https://www.youtube.com/playlist?list=PLKUl_fMWLdH8Kk4iFnWHhU43xXG2t6bjf
//Homework 1: Create game based on MessageBox()

#include <iostream>
#include <Windows.h>

int main() {
    const wchar_t title[] = L"Dragon Slayer Campaign";
    const wchar_t content_01[] = L"Alert! You are in front of a dungeon entrance. Will you risk to go there?";
    const wchar_t content_02[] = L"You are brave one! But misterious shadow attacked you...";
    const wchar_t content_03[] = L"You are dead!!!";
    const wchar_t content_04[] = L"I didn't think you are coward! Are you sure you don't want to try to go there?";
    const wchar_t content_05[] = L"Run, run!! You are coward!";
    bool keep_going = true;
    
    while(keep_going){
        int msgbox_01 = MessageBoxW(NULL, content_01, title, MB_ICONQUESTION | MB_YESNO | MB_DEFBUTTON2);
        if (msgbox_01 == IDYES) {
            int msgbox_02 = MessageBoxW(NULL, content_02, title, MB_ICONINFORMATION | MB_OK);
            if(msgbox_02 == IDOK){
                int msgbox_03 = MessageBoxW(NULL, content_03, title, MB_ICONASTERISK | MB_OK);
                if(msgbox_03 == IDOK){
                    keep_going = false;
                }
            }
        }
        else if (msgbox_01 == IDNO){
            int msgbox_04 = MessageBoxW(NULL, content_04, title, MB_ICONQUESTION | MB_RETRYCANCEL);
            if(msgbox_04 == IDRETRY){
                continue;
            }
            else if(msgbox_04 == IDCANCEL){
                int msgbox_05 = MessageBoxW(NULL, content_05, title, MB_ICONINFORMATION | MB_OK);
                if(msgbox_05 == IDOK){
                    keep_going = false;
                }
            }
        }

    }

    return 0;
}
