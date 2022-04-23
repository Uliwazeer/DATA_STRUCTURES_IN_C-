#include <iostream>;
using namespace std;
struct book{
     string name;
     string author;
     int pages;
     double prices;
};
int main(){
    book b1;
    b1.name = "Wazeer";
    b1.author = "Uli";
    b1.pages =255;
    b1.prices =30,99;


    cout<<b1.name;
    cout<<b1.author;
    cout<<b1.pages;
    cout<<b1.prices;
    return 0;

}

// anthor method for same program
#include <iostream>;
using namespace std;
struct book{
     string name;
     string author;
     int pages;
     double prices;
};
int main(){
    book b1 = {"Wazeer","Uli",255,30.99};
    cout<<b1.name;
    cout<<b1.author;
    cout<<b1.pages;
    cout<<b1.prices;
    return 0;

}
//when the user enter the name of the book
#include <iostream>;
using namespace std;
struct book{
     string name;
     string author;
     int pages;
     double prices;
};
int main(){
    book b1;
    cout<< "Enter The Name Of Book : ";
    cin>>b1.name;
    cin>>b1.author;
    cin>>b1.pages;
    cin>>b1.prices;

    
    cout<<b1.name;
    cout<<b1.author;
    cout<<b1.pages;
    cout<<b1.prices;
    return 0;

}
//we can do this program ,too by array
#include <iostream>;
using namespace std;
struct book{
     string name;
     string author;
     int pages;
     double prices;
};
int main(){
    book books[10];
    books[0].name = "Uli";
    cout<<books[0].name;
    return 0;

}