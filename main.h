#pragma once

LRESULT CALLBACK WindowProc(HWND WindowHandle, UINT Message, WPARAM WParam, LPARAM LParam);

void DisplayText(HWND WindowHandle, char* Text);

void SetWindowClass(WNDCLASSA WindowClass, HINSTANCE Instance);

int g_WindowWidth = 150;

int g_WindowHeight = 150;

HWND g_WindowHandle;

WNDCLASSA g_WindowClass = {0};