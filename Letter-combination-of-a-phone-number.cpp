#include<bits/stdc++.h>
using namespace std;

string getString(char &s){
    if(s=='2') return "abc";
    if(s=='3') return "def";
    if(s=='4') return "ghi";
    if(s=='5') return "jkl";
    if(s=='6') return "mno";
    if(s=='7') return "pqrs";
    if(s=='8') return "tuv";
    if(s=='9') return "wxyz";
    return "";
}
    
void helper(vector<string> &store,vector<string> &ans,string s,int i){
    if(s.length()==store.size()){
        ans.push_back(s);
        return;
    }
	
    for(int j=0;j<store[i].size();j++){
        helper(store,ans,s+store[i][j],i+1);
    }
}
    
vector<string> letterCombinations(string digits) {
    vector<string> store;
    if(digits.size()==0) return store;
    
	for(int i=0;i<digits.size();++i){
        string temp = getString(digits[i]);
        store.push_back(temp);
    }
        
	vector<string> ans;
    string s="";
    helper(store,ans,s,0);
    return ans;
}

void print(vector<string> &combinations){
	for(int i=0;i<combinations.size();++i){
		cout<<combinations[i]<<endl;
	}
}
int main() {
	string digits;
	cin>>digits;
	vector<string> combinations = letterCombinations(digits);
	print(combinations);
	return 0;
}