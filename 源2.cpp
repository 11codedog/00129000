#include<iostream>
#include<vector>
#include<typeinfo>
using namespace std;
class MY
{
public:
	MY();
	~MY();
	int a = 0;
	int b = 0;
private:

	char[10];
};

int main() {
	vector<MY>my{};
	auto i = my.begin();
	cout << typeid(*i).name();

	return 0;
}