class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> alphabets;
        set<char> seen;
        unordered_map<char, int> occourance;
        
        for( int i = 0; i < s.size(); i++){
            occourance[s[i]] = i;
        }
        
        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            if(seen.find(c) == seen.end()){
                while(alphabets.size()!=0 && c < alphabets.top() && i < occourance[alphabets.top()]) {
                    seen.erase(seen.find(alphabets.top()));
                    alphabets.pop();
                }
                seen.insert(c);
                alphabets.push(c);
            }
        }
        string output = "";
        while(!alphabets.empty())
        {
            
            char c = alphabets.top();
            alphabets.pop();
            output = c+ output;
        }
        return output;
    }
  
};
