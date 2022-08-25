// https://leetcode.com/problems/h-index/

#include<iostream>
#include"../inc/solution.hpp"

int main()
{
	std::vector<int> citations{3,0,6,1,5};
	std::cout << Solution().hIndex(citations);  // 3

	std::vector<int> citations2{3,8,25,3,5};
	std::cout << Solution().hIndex(citations2);  // 3

	std::vector<int> citations3{5,10,8,4,3};
	std::cout << Solution().hIndex(citations3);  // 4

	std::vector<int> citations4{1,3,1};
	std::cout << Solution().hIndex(citations4);  // 1

	return 0;
}

