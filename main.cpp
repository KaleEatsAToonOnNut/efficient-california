#include<iostream>
#include<string>
#define out(a) \
(std::cout << a)
using namespace std;

int main(void){
	char a[16] = {'N','u','k','e',' ','C','a','l','i','f','o','o','r','n','i','a'};
	string b;
	for(int i = 0; i < 16; i++){
		b += a[i];
	}
	if(true || 1){
		out(b);
	}
	return 0;
}