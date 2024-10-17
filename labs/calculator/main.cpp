#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <sstream>
#include <stdexcept>

using namespace std;

// ������� ��� ���������� ��������� ���������
int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

// ������� ��� ������������ ���������� ������ � �����������
string infixToPostfix(const string& expression) {
    stack<char> operators;
    string postfix;

    for (char c : expression) {
        if (isspace(c)) {
            continue; // ���������� ������
        }
        if (isdigit(c)) {
            postfix += c; // ������ ������� �� ������������ ������
        }
        
        else { // ��������
            postfix += ' '; // ������ ����� ����� ����������
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top(); // ������ �������� �� ������������ ������
                postfix += ' ';
                operators.pop(); //removes the top element from the stack
            }
            operators.push(c); // ������ �������� �������� �� �����
        }
    }

    while (!operators.empty()) {  // �������� �� �������� ���������
        postfix += ' ' + string(1, operators.top());
        operators.pop();
    }

    return postfix;
}

// ������� ��� ��������� ������� ������������ ��������
int performOperation(char operation, int operand1, int operand2) {
    switch (operation) {
    case '+': return operand1 + operand2;
    case '-': return operand1 - operand2;
    case '*': return operand1 * operand2;
    case '/':
        if (operand2 == 0) {
            throw invalid_argument("Division by zero");
        }
        return operand1 / operand2;
    default: return 0;
    }
}

// ������� ��� ���������� ������������ ������
int evaluatePostfix(const string& expression) {
    stack<int> operands;
    istringstream to(expression);
    string t;

    while (to >> t) {
        if (isdigit(t[0])) {
            operands.push(stoi(t)); // ������ ������� �� �����
        }
        else { // ��������
            int operand2 = operands.top(); operands.pop();
            int operand1 = operands.top(); operands.pop();
            int result = performOperation(t[0], operand1, operand2);
            operands.push(result); // ������ ��������� �� �����
        }
    }

    return operands.top(); // ʳ������ ���������
}

// ������� ������� ��� ��������� ������������
int main() {
    string infixExpression;

    cout << "expression ";
    getline(cin, infixExpression); //The std::getline function in C++ is used to read a line of text
                                  //from an input stream and store it into a string. 
                                 // It stops reading when it encounters a newline character or the specified delimiter.

    try {
        string postfixExpression = infixToPostfix(infixExpression);
        cout << " postfix expression" << postfixExpression << endl;

        int result = evaluatePostfix(postfixExpression);
        cout << "Result: " << result << endl;
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}