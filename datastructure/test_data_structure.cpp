#include "Stack.h"
#include <string>
#include <iostream>
#include "hashmap.h"
#include "queue.h"
using namespace std;

int main()
{

    Stack<int> stack;

    stack.push(5);
    stack.push(8);
    stack.push(2);
    stack.push(9);

    cout << stack.peek() << endl;
    cout << stack.pop() << endl;
    cout << stack.peek() << endl;
    cout << stack.pop() << endl;
    cout << stack.peek() << endl;
    cout << stack.pop() << endl;
    cout << stack.peek() << endl;
    cout << stack.pop() << endl;

    cout << stack.peek() << endl;
    cout << stack.pop() << endl;

    HashMap<int, int> map;
    map.put(1, 2);
    map.put(2, 3);

    cout << map.get(1) << endl;
    cout << map[2] << endl;
    map.remove(1);
    cout << map.get(1) << endl;

    HashMap<string, int> map2;
    map2.put("test", 123);
    map2.put("test1", 233);
    cout << map2.get("test") << endl;
    cout << map2["test1"] << endl;
    map2.remove("test");
    cout << map2.get("test") << endl;

    Queue<int> queue;
    queue.add(1);
    queue.add(2);
    queue.add(5);
    queue.add(8);
    cout << queue.remove() << endl;
    cout << queue.peekFront() << endl;
    cout << queue.peekEnd() << endl;

    return 0;
}