#include <iostream>
#include <stack>

using namespace std;

void display_stack(stack<string> str){
    while(!str.empty()){
        cout <<"pop element is : "<<str.top()<<endl;
    
      str.pop();
    }

}

int main()
{
    stack<string> str;
    str.push("Zeeshan");
    str.push("Ishaq");
    str.push("bashko");
    str.push("hassan");
     str.push("Riaz");
    str.push("munaza");
      
    display_stack(str);


    return 0;
}
