class Solution {
public:
bool isSetBit(int &x , int bit){
    return x & (1<<bit);
}

bool setBit( int &x , int bit ){
    return x |= (1<<bit); 
}
bool unsetBit( int &x , int bit ){
    return x &= ~(1<<bit); 
}
unsigned int countSetBit(int n){
    unsigned int count = 0 ; 
    while(n){
        count+= n & 1;
        n>>=1;
    }
    return count;
} 
    int minimizeXor(int num1, int num2) {
        int x = num1;
        int reqcount = countSetBit(num2);
        int actcount = countSetBit(num1);
        int bit =0;
        if(actcount < reqcount){
            while(actcount < reqcount){
                if(!isSetBit(x,bit)){
                    setBit(x,bit);
                    actcount++;
                }
                bit++;
            }
        }else if(actcount > reqcount){
                while(actcount > reqcount){
                    if(isSetBit(x,bit)){
                    unsetBit(x,bit);
                    actcount--;
                }
                bit++;
                }
        }
        return x;
    }
};