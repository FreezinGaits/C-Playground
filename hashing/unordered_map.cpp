#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> umap;
    umap["Mango"] = 43;
    umap["Apple"] = 44;
    umap["Banana"] = 45;

    for( auto x : umap){
        cout<<x.first<< " "<<x.second<< endl;
    }
     string key = "Banana";
     if(umap.find(key) != umap.end()){
        cout<<" The key has been successfully founded."<<endl;
     }
     else{
        cout<<"The key hasn't been founded yet."<<endl;
     }
     if(umap.find(key) != umap.end()){
        auto it = umap.find(key);
        cout<<"The key is: "<<it->first<<endl;
        cout<<"The value is: "<<it->second<<endl;
     }

     umap.insert(make_pair("Guava", 89));
     umap.erase("Apple");
     
     for(auto iter = umap.begin(); iter != umap.end(); iter++){
        cout<<iter->first<<" ", iter->second;
     }
     cout<<umap.size();
     int arr[] = {2, 3, 3 , 2 , 54, 67, 54, 54, 54, 64};
     unordered_map<int, int> umaped;
     
     for( int i = 0; i< 10; i++){
        auto key = arr[i];
        umaped[key]++;
     }
     for(auto iter = umaped.begin(); iter != umaped.end(); iter++){
        cout<<iter->first<<" ", iter->second;
     }
    return 0;
}