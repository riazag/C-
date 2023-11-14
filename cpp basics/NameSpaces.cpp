#include <iostream>
using namespace std;
namespace namespace1
{
    int age = 25;
}
namespace namespace2
{
    int age = 30;

}
int main()
{
    cout << namespace1::age << endl;
    cout << namespace2::age << endl;
    // cout<<std::

    system("pause>0");
}
// its not a good practice to use namespace std intstead of it u should use
// std::anything ur using i.e cout