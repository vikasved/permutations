#include<bits/stdc++.h>
using namespace std;

vector<string> vs;
vector<string> res;

void read_record(){
	freopen("inp.csv" , "r", stdin);
	string s;
	string str = "";
	while(cin>>s){
		str = "";
		for(int i=0 ; i<(int)s.length(); i++){
			if(s[i]==',')	continue;
			str += s[i];
		}
		vs.push_back(str);
	}
}

void fun (vector<string> v , int curr, string temp){
	int n = v.size();
	if(curr == n){
		cout<<temp<<" ";
		return;
	}

		for(int j=0 ; j<(int)v[curr].length() ; j++){
			fun(v , curr+1, temp+v[curr][j]);
		}
}


int main()
{
	read_record();
	fun(vs , 0 , "");

	for(int i=0 ; i<(int)res.size() ; i++){
		cout<<res[i]<<" ";
	}

	return 0;
}
