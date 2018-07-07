#include <Windows.h>
#include <stdio.h>

#include "ProcessHollowing.h"

int wmain(int argc, wchar_t* argv[])
{
	if (argc != 3)
	{
		printf("Usage: ProcessHollowing [VictimProcess] [InjectedProcess]\n");
		return 1;
	}

	injectProcess(argv[1], argv[2]);

	return 0;
}