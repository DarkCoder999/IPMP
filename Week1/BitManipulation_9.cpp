#Swap all odd and even bits
unsigned int swapBits(unsigned int x)
{
    for (int i = 0; i < 32; i += 2) {
        int i1 = (x >> i) & 1;
        int i2 = (x >> (i + 1)) & 1;
        x = x - (i1 << i) - (i2 << (i + 1)) + (i1 << (i + 1)) + (i2 << i);
    }
    return x;
}
