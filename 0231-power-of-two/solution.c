bool isPowerOfTwo(int n) {
return (n<=0) ? false : !(n&(n-1));
}
