#include <iostream>
using namespace std;

class OuterClass {
private:
    int outerData;

public:
    class NestedClass {
    private:
        int nestedData;

    public:
        NestedClass(int value) : nestedData(value) {}

        void displayNestedData() {
            cout << "Nested Data: " << nestedData << endl;
        }
    };

    void useNestedClass() {
        int value;
        cout << "Enter value for nested data: ";
        cin >> value;

        NestedClass nestedObj(value);
        nestedObj.displayNestedData();
    }
};

int main() {
    OuterClass outerObj;
    outerObj.useNestedClass();
    return 0;
}
