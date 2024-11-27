///week12-1.cpp學習資料結構的 struct vs. class
#include <iostream>
#include <string>
using namespace std;

///struct Node {};

///class Cat {};
struct Node {
    int val; ///value縮寫,
};
class Cat{
public:
    string name;
};
int main()
{
    Cat cat1;
    cat1.name = "cattie" ;
    Node node;
    node.val = 1;


}
