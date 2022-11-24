#include "func.h"
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

BOOST_AUTO_TEST_CASE(nonesquared){
	vector<vector<double>> arr1 = {{1, 2, 3}, {-1, 0, 5}, {3, -2, -1}, {1, 0, 1}};
	double arr_max1[3];
	naperdel(4, arr1, arr_max1);
	BOOST_CHECK(arr1[3][0] == 2);
	BOOST_CHECK(arr_max1[2] == 10);
	vector<vector<double>> arr2 = {{1, 2, 3, 4}, {-1, 0, 5, -33}, {3, -2, -1, 7}};
	double arr_max2[4];
	naperdel(4, arr2, arr_max2);
	BOOST_CHECK(arr2[0][3] == 4);
	BOOST_CHECK(arr_max2[3] == 7);
}

BOOST_AUTO_TEST_CASE(negative_max){
	vector<vector<double>> arr = {{-1, -2, -3}, {-4, -32, -5}, {-3, -2, -1}};
	double arr_max[3];
	naperdel(4, arr, arr_max);
	BOOST_CHECK(arr_max[0] == -2);
}
