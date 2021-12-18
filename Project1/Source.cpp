#include <Windows.h>
#include <iostream>

using namespace std;

LRESULT WINAPI WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam) {

	switch (msg)
	{
	case WM_DESTROY: {
		PostQuitMessage(0);
		break;
	}
	default:
		return DefWindowProc(hwnd, msg, wparam, lparam);

	}
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	HWND hwnd;
	MSG msg;
	WNDCLASSEX wc;

	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wc.hInstance = hInstance;
	wc.cbClsExtra = 0;
	wc.lpfnWndProc = 0;
	wc.cbWndExtra = 0;
	wc.lpszMenuName = NULL;
	wc.lpszClassName = L"WinMainClass";

	RegisterClassEx(&wc);
	hwnd = CreateWindow(
		wc.lpszClassName,
		L"App",
		WS_OVERLAPPEDWINDOW;
		0, 0, 640, 480,
		NULL, NULL, hInstance, NULL);
	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);

	while (GetMessage(&msg,NULL,0,0)){

		TranslateMessage(&msg);
		DispatchMessage(&msg);

	}
	return msg.wParam;
}