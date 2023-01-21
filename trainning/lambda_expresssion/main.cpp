#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


// int main() {

//     vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
//     for (const string& word : msg)
//     {
//         cout << word << " ";
//     }

    

//     vector<int> nums { 3,4,5,6,7};
//     cout << "\n";
//     cout << *(nums.end());
//     auto print = [](const int &n) -> void {cout << " " << n;};  // lambda expression
//     for_each(nums.begin(), nums.end(), print);
//     cout << "\n";

//     return 0;
// }

/////////////2/////////////////////



// void printx2(int a) {
//     cout << a*2 <<" ";
// }

// struct printx3 
// {
//     void operator()(int a) {
//         cout << a*3 << " ";
//     }
// } obj1;

// printx3 obj2;

// int main() {
//     int arr[5] = { 1, 2, 3, 4, 5};

//     for(const int& item : arr) {
//         cout << item << " ";
//     }
//     cout << "\n";

//     for_each(arr, arr + 5, printx2);
//     cout << "\n";
//     for_each(arr, arr + 5, obj1);
//     cout << "\n";

//     auto f = [](int a)->void { cout << a*4 << " ";};
//     for_each(arr, arr + 5, f);

//     cout << "\n";
//     return 0;
// }