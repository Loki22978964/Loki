#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <sstream>
#include <stdexcept>

using namespace std;

// Функція для визначення пріоритету операторів
int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

// Функція для перетворення інфіксного виразу в постфіксний
string infixToPostfix(const string& expression) {
    stack<char> operators;
    string postfix;

    for (char c : expression) {
        if (isspace(c)) {
            continue; // Пропускаємо пробіли
        }
        if (isdigit(c)) {
            postfix += c; // Додаємо операнд до постфіксного виразу
        }
        
        else { // Оператор
            postfix += ' '; // Додаємо пробіл перед оператором
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top(); // Додаємо оператор до постфіксного виразу
                postfix += ' ';
                operators.pop();
            }
            operators.push(c); // Додаємо поточний оператор до стеку
        }
    }

    while (!operators.empty()) {  // Витягуємо всі залишкові оператори
        postfix += ' ' + string(1, operators.top());
        operators.pop();
    }

    return postfix;
}

// Функція для виконання базових арифметичних операцій
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

// Функція для обчислення постфіксного виразу
int evaluatePostfix(const string& expression) {
    stack<int> operands;
    istringstream to(expression);
    string t;

    while (to >> t) {
        if (isdigit(t[0])) {
            operands.push(stoi(t)); // Додаємо операнд до стеку
        }
        else { // Оператор
            int operand2 = operands.top(); operands.pop();
            int operand1 = operands.top(); operands.pop();
            int result = performOperation(t[0], operand1, operand2);
            operands.push(result); // Додаємо результат до стеку
        }
    }

    return operands.top(); // Кінцевий результат
}

// Головна функція для виконання калькулятора
int main() {
    string infixExpression;

    cout << "expression ";
    getline(cin, infixExpression);

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