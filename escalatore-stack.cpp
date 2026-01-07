#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int top;
    int size;

public:
    Stack() {
        cout << "Enter size of stack: ";
        cin >> size;
        arr = new int[size];
        top = -1;
    }

    void push(int value) {
        if (top >= size - 1) {  
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            top++;
            arr[top] = value;
            cout << "Pushed: " << value << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Stack is empty" << endl;
        } else {
            cout << "Popped element: " << arr[top] << endl;
            top--;
        }
    }

    void isEmpty() {
        if (top == -1)
            cout << "Stack is empty" << endl;
        else
            cout << "Stack is not empty" << endl;
    }

    void isFull() {
        if (top >= size - 1)
            cout << "Stack is full" << endl;
        else
            cout << "Stack is not full" << endl;
    }

    void topElement() {
        if (top == -1)
            cout << "Stack is empty" << endl;
        else
            cout << "Top element: " << arr[top] << endl;
    }

    void view() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements (bottom to top): ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "--- Stack Operations ---" << endl;
        cout << "1 Push" << endl;
        cout << "2 Pop" << endl;
        cout << "3 IsEmpty" << endl;
        cout << "4 IsFull" << endl;
        cout << "5 Top" << endl;
        cout << "6 View Stack" << endl;
        cout << "0 Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.isEmpty();
                break;

            case 4:
                s.isFull();
                break;

            case 5:
                s.topElement();
                break;

            case 6:
                s.view();
                break;

            case 0:
                cout << "Exit" << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 0);

    return 0;
}
