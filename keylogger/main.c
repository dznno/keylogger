#include <windows.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	DWORD PID, TID = NULL;
	HANDLE hThread, hProcess;
	HWND hForegroundWindow;
	hForegroundWindow = GetForegroundWindow();

	TID = GetWindowThreadProcessId(hForegroundWindow, NULL);

	PID = GetProcessIdOfThread(hThread);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0)) {};

	return EXIT_SUCCESS;
}
