#include <windows.h>
#include <stdio.h>
#include "..\\ofetapi\\ofetapi.h"


#pragma comment(lib,"..\\..\\bin\\x64\\Release\\lib\\ofetapi.lib")

int main(int argc, char** argv)
{
	DWORD dwRet;
	BOOL  bStarted = FALSE;
	if( GetStartFiltering(&bStarted) != ERROR_SUCCESS )
	{
		printf("Cann't open minifilter driver,please reinstall ETEFS_Mini.");
		return 1;
	}

	//make the filter to do filtering work
	dwRet = SetStartFiltering(1);

	//set to driver to work on DIR encryption mode.
	dwRet = SetDirEncryptionMode(1);

	//Add dir
	if( 0 )
	{
		dwRet = AddEncryptedDir(L"C:\\test", L".TXT;.JPG;", CIPHER_ID_AES, "01234567890123456789012345678901", 32);
	}

	//remove dir 
	if( 0 )
	{
		dwRet = RemoveEncryptedDir(L"C:\\test");
	}

	//list all encrypted dir
	if( 1 )
	{
		int i, count;
		DIR_ENCRYPTION_CONFIG dirConfig;

		dwRet = GetEncryptedDirCount(&count);
		if(dwRet == ERROR_SUCCESS)
		{
			for( i = 0; i < count ;i++)
			{
				ZeroMemory(&dirConfig, sizeof(DIR_ENCRYPTION_CONFIG));
				dwRet= GetEncryptedDirConfig(i, &dirConfig);
				printf("i:%d, dir:%ws, key:%s\n", i, dirConfig.wszDir, dirConfig.szKey);
				//
				//config are now in dirConfig
				//
			}
		}
	}

	//access ctrl
	if(0)
	{
		CTRL_ITEM ctrlItem;
		
		ctrlItem.nCtrlValue = CTRL_NO_ACCESS;
		ctrlItem.nNameType = NAME_TYPE_USER;
		wcscpy(ctrlItem.wszName, L"test_user");

		//add control
		dwRet = AddNameCtrl(L"C:\\test", &ctrlItem);

		//remove control
		dwRet = RemoveNameCtrl(L"C:\\test", &ctrlItem);
	}

	//list access ctrl
	if( 0 )
	{
		int i, count;
		CTRL_ITEM ctrlItem;

		dwRet = GetNameCtrlCount(L"C:\\test",&count);
		if(dwRet == ERROR_SUCCESS)
		{
			for( i = 0; i < count ;i++)
			{
				ZeroMemory(&ctrlItem, sizeof(CTRL_ITEM));
				dwRet= GetNameCtrl(L"C:\\test",i, &ctrlItem);
				//
				//ctrl value are now in ctrlItem
				//
			}
		}
	}

	return dwRet;
}
