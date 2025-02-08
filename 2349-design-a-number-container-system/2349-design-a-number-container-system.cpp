#include <algorithm>
class NumberContainers {
public:
    map<int,int> itn;
    map<int,vector<int>> nti;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(itn.count(index)>0){
           
         auto it = std::find(nti[itn[index]].begin(), nti[itn[index]].end(), index);
       
            nti[itn[index]].erase(it);
            }        
        itn[index]=number;
        nti[number].push_back(index);
        
    }
    
    int find(int number) 
    {
        if(nti.count(number)>0){
            return *min_element(nti[number].begin(), nti[number].end());
        }

        return -1;
        
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */