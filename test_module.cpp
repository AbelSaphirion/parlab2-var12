#include "func.h"
#include <atomic>
#include <mutex>
#include <thread>
#include <vector>
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Test
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(assert_max){
	vector<vector<double>> arr = {{1, 2, 3}, {-1, 0, 5}, {3, -2, -1}};
	double arr_max[3];
	naperdel(4, arr, arr_max);
	BOOST_CHECK(arr_max[0] == 6);
	BOOST_CHECK(arr_max[1] == 2);
	BOOST_CHECK(arr_max[2] == 10);
}

BOOST_AUTO_TEST_CASE(assert_double){
	vector<vector<double>> arr = {{1, 2, 3}, {-1, 0, 5}, {3, -2, -1}};
	double arr_max[3];
	naperdel(4, arr, arr_max);
	BOOST_CHECK(arr[0][0] == 2);
	BOOST_CHECK(arr[1][0] == -2);
	BOOST_CHECK(arr[2][0] == 6);
	BOOST_CHECK(arr[0][1] == 2);
	BOOST_CHECK(arr[1][1] == 0);
	BOOST_CHECK(arr[2][1] == -2);
}
