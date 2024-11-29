// Calculator Illia Kozlovets 123
/*You are tasked with creating a simple calculator that evaluates mathematical expressions in infix notation using a stack.
The calculator should support basic arithmetic operations: addition, subtraction, multiplication, and division.
The program should correctly handle operator precedence.
*/
#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

//Determines the precedence of the operators (+, -, *, /).
int precedence(char c)
{
	if (c == '/' || c == '*')
	{
		return 2;
	}
	else
	{
		return 1;
	}
}


string infixToPostfix(const string& inFix)
{

	string expression = inFix;
	string postfix;
	stack <char> operators;

	expression.erase(std::remove_if(expression.begin(), expression.end(), ::isspace), expression.end());

	for (int i = 0; i < expression.length(); i++)
	{

		if (isspace(expression[i]))
		{
			continue;
		}
		else if (isdigit(expression[i]))
		{
			postfix += expression[i];

			if (expression[i + 1] == '+' || expression[i + 1] == '-' || expression[i + 1] == '/' || expression[i + 1] == '*')
			{
				postfix += ' '; //adding space for differentiation between digits later
			}
		}
		else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '/' || expression[i] == '*')
		{
			while (!operators.empty() && precedence(operators.top()) >= precedence(expression[i]))
			{
				postfix += ' '; //adding space for differentiation between digits later
				postfix += operators.top();
				operators.pop();
			}
			operators.push(expression[i]);
		}
		else //yes i know this includes (), maybe i`ll fix it later
		{
			cout << "Unacceptable symbols" << endl;
			exit(0);
		}
	}

	while (!operators.empty())
	{
		postfix += ' '; //you know the drill
		postfix += operators.top();
		operators.pop();
	}
	return postfix;
}


int performOperation(char operation, int operand1, int operand2)
{
	switch (operation)
	{
	case '+':
		return operand1 + operand2;
	case '-':
		return operand1 - operand2;
	case '/':

		if (operand2 == 0)
		{
			cout << "Division by 0!";
			exit(0);
		}

		return operand1 / operand2;
	case '*':
		return operand1 * operand2;
	}
}


int evaluatePostfix(const string& expression)
{
	stack <int> operands;
	string dig;

	int a;
	int b;

	for (char c : infixToPostfix(expression))
	{
		if (isdigit(c))
		{
			dig += c;
		}
		else if (isspace(c) && !dig.empty()) //using space for defining the digit
		{
			operands.push(stoi(dig));
			dig.clear();
		}
		else if (c == '+' || c == '-' || c == '/' || c == '*')
		{
			a = operands.top();
			operands.pop();
			b = operands.top();
			operands.pop();
			operands.push(performOperation(c, b, a));
		}
	}

	return operands.top();
}

int main()
{
	string expression;
	getline(cin, expression);
	cout << infixToPostfix(expression) << endl;
	cout << evaluatePostfix(expression);
}