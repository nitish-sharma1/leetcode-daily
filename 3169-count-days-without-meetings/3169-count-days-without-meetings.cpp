class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
     sort(meetings.begin(),meetings.end());
    int lastmeetingends = 0 ;
    int res = 0 ;
    for( auto meet : meetings){
        int start = meet[0];
        int end = meet[1];

        if( start > lastmeetingends  ){
                res += start-lastmeetingends -1;
        }
        lastmeetingends = max(lastmeetingends,end);
    }
    res += days - lastmeetingends;

    return res;
    }
};