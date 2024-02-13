#include <iostream>
#include <string>
using namespace std;
class A
{
	int* a;
   public:
	void change(int i){
	}
	void value_of_a(){
	}
};
 
class B: private A
{
 
};
 
int main(int argc, char const *argv[])
{
	B b;
	cout<<sizeof(B);
	return 0;
}