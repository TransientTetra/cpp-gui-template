#define BOOST_TEST_MODULE TestSuite
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(TestSuite)
	BOOST_AUTO_TEST_CASE(test)
	{
		BOOST_REQUIRE_EQUAL(1, 1);
	}
BOOST_AUTO_TEST_SUITE_END()