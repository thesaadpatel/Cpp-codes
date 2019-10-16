#include<iostream>
#include<vector>

using namespace std;


int main()
{

    vector<int> v1;
    vector<int> :: iterator it;

    v1.push_back(5);

    while(v1.back()!=0){

        v1.push_back(v1.back()-1);

    }
// end(): Returns an iterator pointing to a position which is NEXT to the last element of the vector. 
// So sweet of you c++;
// Address
    for(it=v1.begin();it!=v1.end();it++){

        cout<<*it<<' ';
        

    }
    cout<<endl ;

    for(int i=0;i<v1.size();i++){

            cout<<v1.at(i)<<' ';

        }
        cout<<endl ;

    while(!v1.empty()){

        cout<<v1.back()<< ' ';
        v1.pop_back();
        
    }
        cout<<endl ;




return 0;

}



