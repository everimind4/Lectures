#line 177 "bits.c"
int allEvenBits(int x) {
 int even=  0x55|(0x55<<8)|(0x55<<16)|(0x55<<24);
 int ans=  !~((~even)^(even&x));
 return ans;
}
#line 189
int bitAnd(int x, int y) {
 int ans=  ~(~x | ~y);
 return ans;
}
#line 203
int bitMask(int highbit, int lowbit) {
  int islowsmaller=  !!((~((1 << lowbit) + ~0)) &( 1 << highbit));
    int ones=  islowsmaller << 31;
    int high=(  ones >> 30) << highbit;
    int low=(  ones >> 31) << lowbit;
    int ans=  high ^ low;
 return ans;
}
#line 220
int byteSwap(int x, int n, int m) {
    int nshift=  n << 3;
    int mshift=  m << 3;
    int marker=  0xFF;
    int erased=  x & ~((marker << nshift)|(marker << mshift));
    int nswap=(((  x &( marker << nshift)) >> nshift) & marker) << mshift;
    int mswap=(((  x &( marker << mshift)) >> mshift) & marker) << nshift;
    int ans=  erased | nswap | mswap;
    return ans;
}
#line 236
int evenBits(void) {
    int bits=  0x55;
    int ans=  bits|(bits<<8)|(bits<<16)|(bits<<24);
    return ans;
}
#line 249
int getByte(int x, int n) {
    int marker=  0xFF;
    int shifts=  n << 3;
    int ans=((  x &( marker << shifts)) >> shifts) & marker;
    return ans;
}
#line 263
int greatestBitPos(int x) {
    return 2;
}
#line 274
int leastBitPos(int x) {
  return 2;
}
#line 285
int leftBitCount(int x) {
  return 2;
}
#line 296
int logicalShift(int x, int n) {
    int marker=  ~(!!n << 31);
    int ans=((  x >> !!n) & marker) >>(( !n + ~0) &( n + ~0));
    return ans;
}
#line 307
int oddBits(void) {
    int bits=  0xAA;
    int ans=  bits|(bits<<8)|(bits<<16)|(bits<<24);
    return ans;
}
#line 321
int replaceByte(int x, int n, int c) {
    int shift=  n << 3;
    int marker=  0xFF;
    int erased=  x & ~(marker << shift);
    int replaced=  c << shift;
    int ans=  erased | replaced;
    return ans;
}
#line 337
int divpwr2(int x, int n) {
    int ispos=(  x >> 31) + 1;
    int ans=(  x +( !ispos << n) + ispos + ~0) >> n;
    return ans;
}
#line 351
int fitsBits(int x, int n) {
    int ans=  !!(x >> n);
    return ans;
}
#line 367
int howManyBits(int x) {
    return 0;
}
#line 377
int isLessOrEqual(int x, int y) {
    return 0;
}
#line 387
int isNegative(int x) {
    int ans=  ~(x >> 31) + 1;
    return ans;
}
#line 399
int isPower2(int x) {
    int isnotzero=  !!x;
    int ispow2=  !(x ^((( x ^( x + ~0)) + 1) >> 1));
    int ans=  isnotzero & ispow2;
    return ans;
}
#line 412
int isTmin(int x) {
    int isnotzero=  !!x;
    int xm1=  x + ~0;
    int istmin=  !(x + xm1 + 1);
    int ans=  isnotzero & istmin;
    return ans;
}
#line 425
int minusOne(void) {
    int ans=  ~0;
    return ans;
}
#line 440
int multFiveEighths(int x) {
    int multFive=(  x << 2) + x;
    int isneg=  ~(x >> 31) + 1;
    int ifneg=(  isneg << 3) + ~isneg + 1;
    int ans=(  multFive + ifneg) >> 3;
    return ans;
}
#line 454
int negate(int x) {
    int ans=  ~x + 1;
    return ans;
}
#line 468
int satAdd(int x, int y) {
#line 479
    int issamesign=((  x >> 31)^(y >> 31)) + 1;

    return issamesign;
}
#line 491
int sign(int x) {
    int isnotzero=  !!x;
    int signbit=  x >> 31;
    int ispos=  isnotzero & !signbit;
    int ans=  signbit + ispos;
    return ans;
}
#line 509
unsigned float_abs(unsigned uf) {
    unsigned special=(((  1 << 8) - 1) << 23);
    unsigned isspecial=(  uf & special) == special;
    unsigned marker=  ~(1 << 31);
    unsigned absolute=  uf & marker;
    unsigned ans;
    if (isspecial) {
        if (uf << 9) 
            ans = uf;
        else 
            ans = absolute;
    }
    else {
        ans = absolute;
    }
    return ans;
}
#line 538
int float_f2i(unsigned uf) {
  return 2;
}
#line 552
unsigned float_half(unsigned uf) {
  return 2;
}
#line 564
unsigned float_i2f(int x) {
  return 2;
}
#line 578
unsigned float_neg(unsigned uf) {
 return 2;
}
#line 592
unsigned float_twice(unsigned uf) {
  return 2;
}
