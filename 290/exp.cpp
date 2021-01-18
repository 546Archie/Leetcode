#include <sstream>

class Solution {
public:
   bool wordPattern(string pattern, string s) {
        map<char, string>::iterator iter;
        vector<string> item;
		map<char, string> patern;
	    istringstream iss(s);
		string substr;
		int len = pattern.length();
		cout<<len<<endl;
											       
		int i = 0;
		while(getline(iss, substr, ' ') || i < len){
			iter = patern.find(pattern[i]);
			//if found 
			if(iter!=patern.end()){
                //if pattern didn't match item
                if(iter->second.compare(substr)!=0)
				    return false;
			}
			//if not found
			else{
			//if not found but item is the same as previous, return false
				for(int j = 0 ; j < item.size() ; j++){
					if(substr.compare(item[j]) == 0)
						return false;
				}					
				patern.insert(pair<char, string>(pattern[i], substr));
			    item.push_back(substr);
			}
		    i++;
		}	
		if(i!=len)
            return false;
		return true;
	}
};
