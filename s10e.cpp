#include<iostream>
#include<vector>

using namespace std;

bool isGoodDay(vector<int> vec, int day){
	if(day<=5){
		for(int i=day-1;i>=0;i--){
			if(vec[i]>vec[day]){
				continue;
			}
			else{
				return false;
			}
		}
		return true;
	}

	else{
		for(int i=1;i<6;i++){
			if(vec[day-i]>vec[day]){
				continue;
			}
			else{
				return false;
			}
		}

		return true;
	}

}

int main(){
	int testcases;
	cin>> testcases;
	for(int j=0;j< testcases;j++){
		vector<int> days;
		int n;
		int goodDays=1;
		cin >> n;
		for(int i=0;i<n;i++){
			int push;
			cin>>push;
			days.push_back(push);
		}
		for(int i=1;i< days.size();i++){
			// cout<<isGoodDay(days,i)<<endl;
			if(isGoodDay(days,i)){
				goodDays+=1;
			}
		}
		cout<< goodDays<< endl;
	}
	return 0;
}