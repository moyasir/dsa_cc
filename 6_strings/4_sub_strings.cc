#include <bits/stdc++.h>
using namespace std;


int main() {

	string s;
	cin>>s;

	int len = s.size();

	for(int i=0; i<len; i++) {
		string temp;
		for(int j=i; j<len; j++) {
			temp.push_back(s[j]);
			cout<<temp<<endl;
		}
	}
	return 0;
}