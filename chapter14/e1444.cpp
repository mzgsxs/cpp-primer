
#include<string>
#include<iostream>
#include<sstream>

// normal function
float add(float i, float j) { return i + j; }

// named lambda function
auto mod = [](int i, int j) { return i % j; };

// class-object function
struct divide {
float operator()(float denominator, float divisor) {
return denominator / divisor;
}
};

#include<map>
#include<string>
#include<functional>

std::map<std::string, std::function<float(float, float)>> ops = 
{
  {"+", add},
  {"-", std::minus<float>()},
  {"*", std::multiplies<float>()},
  {"/", divide()},
  {"%", mod},
};

#include <stack>
void processParenthesizedExpression(std::string expression) {
    expression = "(" + expression;
    expression = expression + ")";
    std::stack<std::string> stack;

    for (char ch : expression) {
        if (ch == ')') {
            // Pop until an open parenthesis is found
            std::string lhs, rhs, op;
            std::string * subStrPtr = &rhs;
            std::string subExpr;
            while (!stack.empty() && stack.top() != "(") {
                auto subChar = stack.top();
                if (ops.find(subChar) != ops.end()){
                    op = subChar;
                    subStrPtr = &lhs;
                } else { 
                    *subStrPtr = subChar + *subStrPtr;
                }
                stack.pop();
            }

            std::cout << lhs << op << rhs << std::endl;
            float flhs, frhs, fresult;
            if (!stack.empty() && stack.top() == "(") {
                stack.pop(); // Remove the '('
                flhs = stof(lhs); frhs = stof(rhs);
                fresult = ops[op](flhs, frhs);
            }

            // Push a placeholder for the processed expression
            std::string result = std::to_string(fresult);
            stack.push(result); // or any placeholder value representing the expression

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

// additional syntax checking is required
int main (int argc, char** argv){
  std::cout << ops["+"](2.3,3.4) << std::endl;

  std::string expression = "(1.2 + ( 2.3*3.13 ))+(23.112/0.34)";
  processParenthesizedExpression(expression);

  return 0;
}
