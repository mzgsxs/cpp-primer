#include <iostream>
#include <stack>
#include <string>

void processParenthesizedExpression(const std::string &expression) {
    std::stack<std::string> stack;

    for (char ch : expression) {
        if (ch == ')') {
            // Pop until an open parenthesis is found
            std::string subExpr;
            while (!stack.empty() && stack.top() != "(") {
                subExpr = stack.top() + subExpr;
                stack.pop();
            }

            if (!stack.empty() && stack.top() == "(") {
                stack.pop(); // Remove the '('
            }

            // Push a placeholder for the processed expression
            stack.push("expr"); // or any placeholder value representing the expression

        } else {
            // Push the current character as a string onto the stack
            stack.push(std::string(1, ch));
        }
    }

    // Output the final stack contents (for demonstration purposes)
    std::cout << "Final stack contents: ";
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::string expression = "(a+(b*c))+(d/e)";
    processParenthesizedExpression(expression);

    return 0;
}
