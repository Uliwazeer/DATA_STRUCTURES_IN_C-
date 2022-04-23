#include <iostream>;
using namespace std;
union box{
     double height;
     double weight;
};
int main(){
   box D;
   D.weight = 50;
   D.height = 80;
   cout<< D.weight<<endl;
   cout<< D.height<<endl;
    return 0;

}
//output will print the biggest value case it is take one space in memory only