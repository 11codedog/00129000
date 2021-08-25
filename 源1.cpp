#include<iostream>
#include<vector>
#include<string>
#include<forward_list>
using namespace std;
void stringRep(string& s1, string& s2, string& s3);
int main() {

	string s4( "hvgh tho" ), s5( "tho" ), s6( "though" );

	stringRep(s4, s5, s6);
	cout << s4 << endl;

	system("pause");
	return 0;
}
void stringRep(string& s, string& oldVal, string& newVal) {
	string::size_type i = 0;
	auto s_len = s.size(), old_len = oldVal.size();
	while (i + old_len <= s_len) {
		if (oldVal == s.substr(i, i + old_len)) {
			s.replace(i, i + old_len, newVal);
			i += newVal.size();
		}
		else {
			++i;
		}
	}
	
}
