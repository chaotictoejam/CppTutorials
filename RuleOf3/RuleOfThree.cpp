#include <iostream>
using namespace std;

class RuleOfThree {
   public:
    RuleOfThree() { 
        mData = new int(0); 
    }

    ~RuleOfThree() { 
        delete mData; 
    }

    // Copy constructor
    RuleOfThree(const RuleOfThree& other) { 
        mData = new int(*other.mData); 
    }

    // Copy assignment operator
    RuleOfThree& operator=(const RuleOfThree& other) {
        if (this != &other) {
            *mData = *other.mData;
        }
        return *this;
    }

    void setValue(int value) { 
        *mData = value; 
    }

    int* getValue() { 
        return mData; 
    }

   private:
    int* mData;
};

int main() {
    RuleOfThree obj1;
    obj1.setValue(42);
    RuleOfThree obj2 = obj1;
    obj1.setValue(10);

    cout << "OBJ1: " << *obj1.getValue() << " OBJ2: " << *obj2.getValue() << endl;

    RuleOfThree obj3;
    obj3 = obj1;
    obj1.setValue(15);

    cout << "OBJ1: " << *obj1.getValue() << " OBJ2: " << *obj2.getValue()
         << " OBJ3: " << *obj3.getValue() << endl;
}