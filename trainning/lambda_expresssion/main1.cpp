#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// 1 2 3 4 5 6 7 8 9
// sort vector using lambda
// find_if pt dau tien > 5
// count_if dem so pt  > 6

struct cmp { 
    bool operator()(const int &a, const int &b)
    {
        return a<b;
    }
};


int main() {
    vector<int> nums = {17,25,3,46,7,9,5};
    //sort(nums.begin(), nums.end(), cmp());
    sort(nums.begin(), nums.end(), [](const int &a, const int &b ){
        return a>b;
    });

    for(const int &a : nums) {
        cout << a << " ";
    }

    return 0;
}
