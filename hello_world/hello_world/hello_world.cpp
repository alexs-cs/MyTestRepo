// hello_world.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

void print_data( int len, unsigned char* ch )
{
    for( int k = 0; k<len; ++k )
    {
        int i = 0;
        i = ch[k];
        printf( "byte %d contains 0x%x\r\n", k, i );
    }
}
int _tmain(int argc, _TCHAR* argv[])
{
    printf( " Hello World\r\n" );
    unsigned int i = 0x04030201;
    printf( "writing i\r\n" );
    print_data( sizeof(i), (unsigned char*)(&i) );

    unsigned short s = 0x0201;
    printf( "writing s\r\n" );
    print_data( sizeof(s), (unsigned char*)(&s) );
	return 0;
}

