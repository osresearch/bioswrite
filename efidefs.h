/** \file
 * Definitions to make EFI headers happy.
 */

#ifndef _efidefs_h_
#define _efidefs_h_

#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

typedef char INT8;
typedef int16_t INT16;
typedef int32_t INT32;
typedef int64_t INT64;
typedef uint8_t UINT8;
typedef uint16_t UINT16;
typedef uint32_t UINT32;
typedef uint64_t UINT64;
typedef uint64_t UINTN; // for x86-64
typedef wchar_t CHAR16;

typedef void VOID;
typedef int EFI_STATUS;
#define STATIC static


#define IN
#define OUT
#define TRUE 1
#define FALSE 0

#define EFI_SUCCESS 0
#define EFI_OUT_OF_RESOURCES -1
#define EFI_BUFFER_TOO_SMALL -2

#define EFI_ERROR(x) ((x) != EFI_SUCCESS)


#define _stricmp(a,b) strcasecmp(a,b)
#define SIGNATURE_32(a,b,c,d) \
    ((d) << 24 | (c) << 16 | (b) << 8 | (a) << 0)


#endif
