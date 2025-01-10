class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        unordered_map<char, int> combinedmp;
        vector<int> countalpha(26, 0);
        for (auto word : words2) {
            // this code is for combined map for words2 array
            countalpha = vector<int>(26, 0);
            for (auto ch : word) {
                int idx = ch - 'a';
                countalpha[idx]++;
            }
            for (auto ch : word) {
                int idx = ch - 'a';
                if (combinedmp.count(ch) > 0) {
                    combinedmp[ch] = max(combinedmp[ch], countalpha[idx]);
                } else {
                    combinedmp[ch] = countalpha[idx];
                }
            }
        }

        // go through each word in word create vector  and then check if each
        // element is preset in desired ammont or not

        for (auto word : words1) {
            countalpha = vector<int>(26, 0);
            for (auto ch : word) {
                int idx = ch - 'a';
                countalpha[idx]++;
            }
            bool issubset = true;

            for (auto it : combinedmp) {
                char ch = it.first;
                int count = it.second;
                if (countalpha[ch - 'a'] < count) {
                    issubset = false;
                    break;
                }
            }
            if (issubset) {
                ans.push_back(word);
            }
        }

        return ans;
    }
};