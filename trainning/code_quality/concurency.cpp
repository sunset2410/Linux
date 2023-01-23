#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
using namespace std;

mutex m;
void count_function(int count) {
    for(int i =0; i< count; i++) {
        lock_guard<mutex> guard(m);
        cout << i << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
   
}

class thread_guard 
{
    thread &t; 
public:
    thread_guard(thread& _t):t(_t) {

    }    

    ~thread_guard() {
        if(t.joinable())
            t.join();
    }
};

// int main() {
//     thread t(count_function,20);
//     thread_guard guard(t);
//     // if(t.joinable())
//     //     t.join();
//     return 0;
// }