class get rightmost{
    public:
    unsigned int turnoffrightmostbit(int n){
        return n & (n-1);
    }
}
