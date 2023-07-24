#include<iostream>
using namespace std;
#define PI 3.14


int score=15; //global variable

void a(int& i){
char ch='a';
cout<<score<<endl;
cout<<i<<endl;

}
void b(int& i){
    cout<<score<<endl;
cout<<i<<endl;

}
int main(){
    cout<<score<<endl;
int i=5;
a(i);
{
    int x=2;
    cout<<x<<endl;
}
return 0;
}