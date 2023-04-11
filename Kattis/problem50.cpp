#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    virtual double evaluate() = 0;
};

class OpNode : public Node {
    char value;
    Node* left;
    Node* right;
public:
    OpNode(char value, Node* left = nullptr, Node* right = nullptr) : value(value), left(left), right(right) {}
    double evaluate() { 
        double l = left->evaluate();
        double r = right->evaluate();

        if (value == '+') return l + r;
        if (value == '-') return l - r;
        if (value == '*') return l * r;
        if (value == '/') return l / r; 
    }
    void addLeft(Node* left) {this->left = left; }
    void addRight(Node* right) { this->right = right; }
};

class NumNode : public Node {
    double value;

public:
    NumNode(double value) : value(value) {}
    double evaluate() { return value; }
};

int main() {
    OpNode root('*');
    OpNode* l = new OpNode('+');
    OpNode* r = new OpNode('+');

    l->addLeft(new NumNode(3));
    l->addRight(new NumNode(2));

    r->addLeft(new NumNode(4));
    r->addRight(new NumNode(5));

    root.addLeft(l);
    root.addRight(r);

    cout << root.evaluate() << endl;
    


    return 0;
}
