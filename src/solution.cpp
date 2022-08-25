#include<algorithm>
#include"../inc/solution.hpp"


int Solution::hIndex(std::vector<int>& citations)
{
    std::sort(citations.begin(), citations.end(), [](const int& c1, const int& c2){ return c2 < c1; });  // sort descending
    int count{1};  // count of papers == index position + 1
    while(citations[count-1] > count){ ++count; }  // increment paper count until count >= citations of current paper
    // if while loop exited on an equality, return count; else count was incremented too far  
    return (count == citations[count-1]) ? count : --count;
}