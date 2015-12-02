#ifndef __HELLO_TEST_H
#define __HELLO_TEST_H

class HelloTestSuite : public CxxTest::TestSuite
{
public:
	void testAddition(void)
	{
		TS_ASSERT( 1 + 1 > 1);
		TS_ASSERT_EQUALS(1 + 1, 2);
	}

		
};
#endif//
