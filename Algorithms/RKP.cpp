class Solution {
  public:
    vector<int> search(string pattern, string text) {
        // code here.
        
        vector<int> ans;
        
        int textLength=text.length();
        int patternLength=pattern.length();
        
        int base=26;
        int primeMod=101;
        
        int patternHash = 0;       // Hash value for the pattern
        int windowHash = 0;        // Hash value for the current text window
        int highOrderBase = 1;     // Base^(patternLength-1) % primeMod — used to remove leading char
        
        
        // Precompute highOrderBase = (base^(patternLength-1)) % primeMod
        for (int i = 0; i < patternLength - 1; i++) 
        {
            highOrderBase = (highOrderBase * base) % primeMod;
        }
        
        // Calculate initial hash values for pattern and first text window
        
        for(int i=0; i<patternLength; i++)
        {
            patternHash = (base * patternHash + pattern[i]) % primeMod;
            windowHash = (base * windowHash + text[i]) % primeMod;
        }
        
        
        // Slide the pattern over text one character at a time
        for(int i=0; i<= textLength-patternLength; i++)
        {
             // Check hash match, then compare actual strings
             if(patternHash == windowHash)
             {
                if(text.substr(i,patternLength) == pattern)
                    ans.push_back(i+1);
                    
             }
             
             // Compute hash of next window (if there is one)
             if(i < textLength-patternLength)
             {
                windowHash = (base * (windowHash - text[i] * highOrderBase) + text[i + patternLength]) % primeMod;
                
                // Ensure windowHash is positive
                if(windowHash < 0)
                    windowHash = windowHash + primeMod;
             }
        }
        
        return ans;
        
    }
};
