// hello_world.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "iostream"
#include "../test_dll/test_dll.h"
using namespace std;



struct Cer_link
{
    
    int                m_link_type;    //!< Stores the node type information.
    int               m_feature_id;   //!< Index of the feature with range [0..N-1], where N is the number of features.
    int               m_value;        //!< Decision value of the feature. 
    const char*         m_label;        //!< Classification label, nonempty only in leaf nodes. 
};

static const Cer_link linkarray_0[] =
{
{1,0,0,"fghdfg"},
{1,51,0,""},
{1,38,1,""},
{1,7,0,""},
{1,5,0,"fgg"},
{1,6,0,""},
{1,2,0,""},
{1,33,0,""},
{1,41,34,"asdfg"},
{0, 0, 0,"qwerty"}
};

struct Cer_tree
{
    int             m_type;
    const Cer_link  *m_left_p;
    const Cer_link  *m_right_p;
};

static const Cer_tree linktree_0[] =
{
    { 1, &linkarray_0[0], &linkarray_0[1] },
    { 2, &linkarray_0[2], &linkarray_0[3] },
    { 3, &linkarray_0[4], &linkarray_0[5] },
    { 4, &linkarray_0[6], &linkarray_0[7] },
    { 0, 0, 0 }
};



struct Cer_tree2
{
    const Cer_tree2     *m_left_p;
    const Cer_tree2     *m_right_p;
    const int           m_feature_id;   
    const int           m_value;
    const char          *m_label_p;
};


static const Cer_tree2 linktree_2[] =
{
    { &linktree_2[1], &linktree_2[4], 1, 2, "" },                           //0
    { &linktree_2[2], &linktree_2[3], 3, 4, "" },                           //1
    { 0, 0, 5, 6, "result in left most leaf" },                             //2
    { 0, 0, 7, 8, "result in left leaf" },                                 //3
    { &linktree_2[5], &linktree_2[6], 9, 10, "" },                          //4
    { 0, 0, 11, 12, "result in right leaf" },                               //5
    { 0, 0, 13, 14, "result in right most leaf" },                          //6
    { 0, 0, 0, 0, "" }
};

    
void print_tree( 
    const Cer_tree2   *tree
)
{
    if( tree == 0 )
    {
        return;
    }

    if( tree->m_left_p != 0 )
    {
        print_tree( tree->m_left_p );
    }

    if( tree->m_right_p != 0 )
    {
        print_tree( tree->m_right_p );
    }

    if( strlen( tree->m_label_p ) != 0 )
    {
        printf( "Found: %s\n", tree->m_label_p );
    }
}

int main(int argc, char* argv[])
{
 //   printf( "Start\r\n" );

 //   print_tree( linktree_2 );

	//printf( "calling fntest_dll\n" );
	fntest_dll();

    //printf( "Finished\r\n" );

    return 0;
}

