// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the TEST_DLL_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// TEST_DLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef TEST_DLL_EXPORTS
#define TEST_DLL_API __declspec(dllexport)
#else
#define TEST_DLL_API __declspec(dllimport)
#endif

// This class is exported from the test_dll.dll
class TEST_DLL_API Ctest_dll {
public:
	Ctest_dll(void);
	// TODO: add your methods here.
};

extern TEST_DLL_API int ntest_dll;

TEST_DLL_API int fntest_dll(void);
