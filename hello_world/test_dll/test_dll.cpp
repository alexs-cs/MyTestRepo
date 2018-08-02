// test_dll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "test_dll.h"
#include <iostream>


// This is an example of an exported variable
TEST_DLL_API int ntest_dll=0;

// This is an example of an exported function.
TEST_DLL_API int fntest_dll(void)
{
#ifdef X64
	std::cout << "size of standard types on 64 bit platform." << std::endl;
#else
	std::cout << "size of standard types on 32 bit platform." << std::endl;
#endif
	std::cout << "size of: char      is: " << sizeof( char ) << std::endl;
	std::cout << "size of: short     is: " << sizeof( short ) << std::endl;
	std::cout << "size of: int       is: " << sizeof( int ) << std::endl;
	std::cout << "size of: long      is: " << sizeof( long ) << std::endl;
	std::cout << "size of: wchar_t   is: " << sizeof( wchar_t ) << std::endl;
	std::cout << "size of: void*     is: " << sizeof( void* ) << std::endl;
	std::cout << "size of: long long is: " << sizeof( long long ) << std::endl;
	std::cout << "size of: size_t    is: " << sizeof( size_t ) << std::endl;
	std::cout << "size of: double    is: " << sizeof( double ) << std::endl;


	return 42;
}

// This is the constructor of a class that has been exported.
// see test_dll.h for the class definition
Ctest_dll::Ctest_dll()
{
	return;
}
