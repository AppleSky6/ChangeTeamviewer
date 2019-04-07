#pragma once
#include <windows.h>
#include "splice/defines.h"
#include "splice/splice.h"

typedef HANDLE(WINAPI *CREATE_FILE) (
	LPCTSTR lpFileName,
	DWORD dwDesiredAccess,
	DWORD dwShareMode,
	LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	DWORD dwCreationDisposition,
	DWORD dwFlagsAndAttributes,
	HANDLE hTemplateFile
	);

static CREATE_FILE oldCreateFile = NULL;
