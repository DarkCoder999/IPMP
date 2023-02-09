#Rotate bits

class rotate
{
public:
    int leftRotate(int n, unsigned int d)
    {
        return (n << d)|(n >> (32 - d));
    }
    int rightRotate(int n, unsigned int d)
    {
        return (n >> d)|(n << (32 - d));
    }
};
