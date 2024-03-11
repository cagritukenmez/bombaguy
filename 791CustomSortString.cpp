class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mapp;
        for(int i=0;i<s.length();i++){
            mapp[s.at(i)]++;
        }
        s="";
        for(int i=0;i<order.length();i++){
            char currentChar = order.at(i);
            if(mapp.find(currentChar) != mapp.end()){
                for(int j = 0; j < mapp[currentChar];j++){
                    s+=currentChar;
                }
            }
            mapp[order.at(i)]=0;
        }
        for(auto it:mapp){
            for(int i =0;i < it.second ;i++){
                s+=it.first;
            }
        }
        return s;
    }
};
