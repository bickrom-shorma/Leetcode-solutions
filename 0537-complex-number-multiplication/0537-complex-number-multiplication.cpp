class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {

        int a, b, c, d;
        int pos = num1.find('+');

        a = stoi(num1.substr(0, pos));
        b = stoi(num1.substr(pos + 1, num1.size() - pos - 2));
        pos = num2.find('+');

        c = stoi(num2.substr(0, pos));
        d = stoi(num2.substr(pos + 1, num2.size() - pos - 2));

        int real = a * c - b * d;
        int imaginary = a * d + b * c;

        return to_string(real) + "+" + to_string(imaginary) + "i";
    }
};