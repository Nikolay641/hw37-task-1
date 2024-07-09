#include "MyQueue.h"
#include <string>

int main()
{
    MyQueue<string> a;
    a.push("one");
    a.push("two");
    a.push("three");
    a.push("four");
    a.push("five");
    a.push("six");
    a.pop();
    a.pop();
    a.push("seven");
    a.show();
    cout << "-------------------------\n";
    while (!a.isEmpty()) {
        if (a.first()[0] == 'f' || a.first()[0] == 't') {
            cout << a.first() << endl;
        }
        a.pop();
    }
}