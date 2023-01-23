#include<iostream>
#include<mutex>
using namespace std;
mutex m;

class Database {
private:
    static Database* mInstance;
    Database() {

    };

public:
    static Database* getInstance() {
        if (mInstance == nullptr) {
            m.lock();
            mInstance = new Database();
            m.unlock();
        }  
        return mInstance;
    }
};


int main() {


    return 0;
}