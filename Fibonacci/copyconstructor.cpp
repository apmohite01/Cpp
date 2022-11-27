#include<iostream>
using namespace std;

class rectangle{

    public:
        int len ,breadth;

        rectangle(){
            len=0;
            breadth=0;
        }
        rectangle(int l,int b){
            len=l;
            breadth=b;
        }

        rectangle(rectangle &obj){

            len=obj.len;
            breadth=obj.breadth;
        }
}
;
int main(){
    rectangle obj1(3,4);
    rectangle obj2(obj1);
    cout<<obj2.len<<" "<<obj2.breadth;

    return 0;
}