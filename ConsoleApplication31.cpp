#include "LinkedList.h"

int main() {
    LinkedList<int> myList;
    myList.append(1);
    myList.append(2);
    myList.append(3);

    myList.display();

    myList.clear();

    return 0;
}
