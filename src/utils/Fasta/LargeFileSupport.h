#pragma once

#define _FILE_OFFSET_BITS 64

#ifdef WIN32 
#define ftell64(a)     _ftello64(a)
#define fseek64(a,b,c) fseeko64(a,b,c)
typedef int64_t off_type;
#else
#define ftell64(a)     ftello(a)
#define fseek64(a,b,c) fseeko(a,b,c)
typedef off_t off_type;
#endif
