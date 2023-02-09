#Get absolute value without branching
class get abs{
    public:
    unsigned int getAbs(int n){
        int mask = n >> 32;
        return ((n + mask) ^ mask);
    }
}
