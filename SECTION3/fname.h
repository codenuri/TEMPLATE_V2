// fname.h

#if defined(__GNUC__)
#	define _FNAME_ __PRETTY_FUNCTION__
#elif defined(_MSC_VER)
#	define _FNAME_ __FUNCSIG__
#else
#	define _FNAME_ __FUNCTION__
#endif