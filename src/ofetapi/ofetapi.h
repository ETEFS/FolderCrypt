#ifndef _OFET_API_H_
#define _OFET_API_H_

#ifdef __cplusplus
extern "C"
{
#endif


DWORD   SetStartFiltering(BOOL  bStart);
DWORD   GetStartFiltering(BOOL*  bStart);


#define  CIPHER_ID_XTEA    0
#define  CIPHER_ID_AES     1


#define  HEADER_BUFFER_SIZE   4096
#define  CUSTOM_DATA_SIZE     3072

DWORD   IsEncryptedFile(WCHAR* wszFileName );
DWORD   efs_DecryptFile(WCHAR* wszFileName );
DWORD   efs_EncryptFile(WCHAR* wszFileName );
DWORD   efs_IsEncryptedFileAlone(WCHAR* wszFileName, int CipherID,  void* FileKey, int KeyLength);
DWORD   efs_EncryptFileAlone(WCHAR* wszFileName, int CipherID, int bUseRandomKeyMode, void* FileKey, int KeyLength);
DWORD   efs_DecryptFileAlone(WCHAR* wszFileName, int CipherID, void* FileKey, int KeyLength);


#include "dirapi.h"
#ifdef __cplusplus
}
#endif
#endif
