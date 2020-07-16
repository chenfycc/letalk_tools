#include<cstdio>  
#include<windows.h>    
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)   
int main()
{
	HWND hwnd;
	hwnd=FindWindow("ConsoleWindowClass",NULL);
	if(hwnd)
	{
		ShowWindow(hwnd,SW_HIDE);
	}
    while(1)
	{
        if(KEY_DOWN(116))
		{
			system("taskkill -f -im letalk.exe >nul");
			system("start \"\" \"C:\\Program Files (x86)\\Strong\\LeTalk\\LeTalk.exe\"");
        }
        if(KEY_DOWN(117))
        {
        	return 0; 
		} 
        if(KEY_DOWN(118))
        {
			system("taskkill -f -im letalk.exe >nul");
        	return 0; 
		} 
		_sleep(10); 
    }
    return 0;
}
