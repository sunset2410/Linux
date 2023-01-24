#include<iostream>
using namespace std;

class State {
public:
    virtual void handle() = 0;
};

class OffState : public State {
public:
    void handle() override {
        cout << "Off state" << endl;
    }
};



class RunState : public State {
public:
    void handle() override {
        cout << "Run state" << endl;
    }
};

class HibrateState : public State {
public:
    void handle() override {
        cout << "Hibrate state"<< endl;
    }
};

class SleepState : public State {
public:
    void handle() override {
        cout << "Sleep state"<< endl;
    }
};


class Computer {
public:
    State* currentState; 
    Computer() {
        currentState = new OffState();
    }  

    ~Computer() {
        if (currentState != nullptr) {
            delete currentState;
            currentState = nullptr;
        }
    } 


    void changeState(State* state) {
        if (currentState != nullptr) {
            delete currentState;
            currentState = state;
        }
    }
};



int main() {
    Computer computer;
    computer.currentState->handle();

    computer.changeState(new RunState());
    computer.currentState->handle();

    computer.changeState(new SleepState());
    computer.currentState->handle();


    return 0;
}
