// KK is megaproger

#include "stdafx.h"
#include "windows.h"

int DisplayResourceNAMessageBox()
{
	int msgboxID = MessageBox(
		NULL,
		(LPCWSTR)L"Kolya cant gitignore\nDoes Kolya want to try again?",
		(LPCWSTR)L"KK is megaproger",
		MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
	);

	switch (msgboxID)
	{
	case IDCANCEL:
		// TODO: add code
		break;
	case IDTRYAGAIN:
		// TODO: add code
		break;
	case IDCONTINUE:
		// TODO: add code
		break;
	}

	return msgboxID;
}

int main()
{
	DisplayResourceNAMessageBox();
	return 0;
}