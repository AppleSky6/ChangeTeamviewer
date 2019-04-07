#include "Hook.h"

void test()
{
	PVOID	createFile = NULL;

	createFile = GetProcAddress(LoadLibrary("kernel32.dll"), "CreateFileA");
	if (!createFile)
		return;

	if (splice(createFile, &newCreateFile, ppv(&oldCreateFile))) {
		dbg_msg("CreateFile successfully spliced!\n");
	}
	else {
		dbg_msg("Failed to splice CreateFile!\n");
	}
}
