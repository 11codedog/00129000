#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<numeric>
#include<functional>
#include<algorithm>
using namespace std;
using namespace placeholders;
void elimDups(vector<string>& words) {
	sort(words.begin(), words.end());
	auto endUnipue = unique(words.begin(), words.end());
	words.erase(endUnipue, words.end());
}
bool isShort(const string& w1,const string& w2) {
	return w1.size() < w2.size();
}
bool isThree(string& words) {
	return words.size() >= 3;
}
/*lambda表达式*/
void test1() {
	int a = 0;
	[a](int& i) {cout << a + i << " "; };
}
void biggies(vector<string>& words, string::size_type sz) {
	elimDups(words);
	stable_sort(words.begin(), words.end(), isShort);
	auto wc = find_if(words.begin(), words.end(),
		[sz](string& word) {return word.size() <= sz; });
	auto count = words.end() - wc;
	cout << count << "times" << endl;
	for_each(wc, words.end(),
		[](const string& s) {cout << s << " "; });
}
void biggies1(vector<string>& words, string::size_type sz) {
	elimDups(words);
	stable_sort(words.begin(), words.end(), isShort);
	auto wc = partition(words.begin(), words.end(),
		[sz](string& word) {return word.size() > sz; });
	auto count = words.end() - wc;
	cout << count << "times" << endl;
	for_each(wc, words.end(),
		[](const string& s) {cout << s << " "; });
}
bool check_size(string& s, string::size_type sz) {
	return s.size() >= sz;
}
int main() {
	vector<int>t1(10, 10);
	vector<double>t2(10, 3.14);
	list<string>t3{ "ads","ads","ads","sss" };
	auto sum = accumulate(t1.cbegin(), t1.cend(), 0);
	auto sum1 = accumulate(t2.cbegin(), t2.cend(), double(0));
	auto res = count(t1.cbegin(), t1.cend(), 10);	
	auto res1 = count(t3.cbegin(), t3.cend(), string("ads"));
	auto it = back_inserter(t1);
	fill_n(t1.begin(), t1.size(), 0);
	*it = 12; *it = 13;
	for (auto i : t1)
		cout << i << endl;
	cout << sum << endl;
	cout << sum1 << endl;
	cout << res << endl;
	cout << res1 << endl;

	vector<string>words{ "aaa","bb","ccc","bb","ccc" };
	elimDups(words);
	for (auto i : words) {
		cout << i << "\t";
	}
	cout<<endl;
	vector<string>words1{ "aaa","bb","ccc","bb","ccc" };
	elimDups(words1);
	stable_sort(words1.begin(), words1.end(), isShort);
	for (auto i : words1) {
		cout << i << "\t";
	}
	cout << endl;
	vector<string>words3{ "aaa","bb","ccc","bb","ccc" };
	auto iter = partition(words3.begin(), words3.end(), isThree);
	/*auto iter = partition(words3.begin(), words3.end(), [](string& word){return word.size() <= 3;};);*/
	words3.erase(iter, words3.end());
	for (auto i : words3) {
		cout << i << "\t";
	}
	cout << endl;
	/*lambda表达式*/
	[](int& i1, int& i2) {cout << i1 + i2 << " "; };
	biggies(words3, 3);
	biggies1(words3, 3);
	[](int i) {return i < 0 ? -i : i; };//该lambda返回类型为int
	[](int i)->int {if (i < 0) return -i; else  return i; };//指定了lambda的返回类型int
	auto val = count_if(words3.begin(), words3.end(),
		[](string& w) {return w.size() >= 3; });
	cout << val << endl;
	int T = 4;
	auto lam = [&T]()->bool {if (T > 0) return T--; else return 0; };
	lam(); lam(); lam();
	cout << lam() << endl;// 1
	lam();
	cout << lam() << endl;// 0
	lam();
	cout << lam() << endl;// 0
	auto check6 = bind(check_size, _1, 6);

	system("pause");
	return 0;
}
