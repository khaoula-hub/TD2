#include<iostream>
using namespace std;
class Test{
    private:
    int nbrcall;
    public:
    Test();
    void call();
    ~Test();
};
Test::test(){
    nbrcall=0;
}
void Test:: call(){
    nbrcall++;
}
~Test::Test(){
    cout << "La fonction a été appelée "<< nbrcall << " fois." <<endl;
}
int main() {
    Test test1;
    test1.call();
    test1.call();

    Test test2;
    test2.call();

    return 0;
}