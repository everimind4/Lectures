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
    return 2;
}
#line 366
int howManyBits(int x) {
    int bit00=  !x;
    int bit01=  !(x >> 1);
    int bit02=  !(x >> 2);
    int bit03=  !(x >> 3);
    int bit04=  !(x >> 4);
    int bit05=  !(x >> 5);
    int bit06=  !(x >> 6);
    int bit07=  !(x >> 7);
    int bit08=  !(x >> 8);
    int bit09=  !(x >> 9);
    int bit10=  !(x >> 10);
    int bit11=  !(x >> 11);
    int bit12=  !(x >> 12);
    int bit13=  !(x >> 13);
    int bit14=  !(x >> 14);
    int bit15=  !(x >> 15);
    int bit16=  !(x >> 16);
    int bit17=  !(x >> 17);
    int bit18=  !(x >> 18);
    int bit19=  !(x >> 19);
    int bit20=  !(x >> 20);
    int bit21=  !(x >> 21);
    int bit22=  !(x >> 22);
    int bit23=  !(x >> 23);
    int bit24=  !(x >> 24);
    int bit25=  !(x >> 25);
    int bit26=  !(x >> 26);
    int bit27=  !(x >> 27);
    int bit28=  !(x >> 28);
    int bit29=  !(x >> 29);
    int bit30=  !(x >> 30);
    int bit31=  !(x >> 31);
    int ans=  33 + ~(bit00 + bit01 + bit02 + bit03 + bit04 + bit05 + bit06 + bit07 + bit08 + bit09 + bit10 + bit11 + bit12 + bit13 + bit14 + bit15 + bit16 + bit17 + bit18 + bit19 + bit20 + bit21 + bit22 + bit23 + bit24 + bit25 + bit26 + bit27 + bit28 + bit29 + bit30 + bit31) + ~!bit31 + 2;
    return ans;
}
#line 409
int isLessOrEqual(int x, int y) {
    return 0;
}
#line 419
int isNegative(int x) {
    int ans=  ~(x >> 31) + 1;
    return ans;
}
#line 431
int isPower2(int x) {
    int isnotzero=  !!x;
    int ispow2=  !(x ^((( x ^( x + ~0)) + 1) >> 1));
    int ans=  isnotzero & ispow2;
    return ans;
}
#line 444
int isTmin(int x) {
    int isnotzero=  !!x;
    int xm1=  x + ~0;
    int istmin=  !(x + xm1 + 1);
    int ans=  isnotzero & istmin;
    return ans;
}
#line 457
int minusOne(void) {
    int ans=  ~0;
    return ans;
}
#line 472
int multFiveEighths(int x) {
    int multFive=(  x << 2) + x;
    int isneg=  ~(x >> 31) + 1;
    int ifneg=(  isneg << 3) + ~isneg + 1;
    int ans=(  multFive + ifneg) >> 3;
    return ans;
}
#line 486
int negate(int x) {
    int ans=  ~x + 1;
    return ans;
}
#line 500
int satAdd(int x, int y) {
    int xpy=  x + y;
    int xsign=  ~(x >> 31) + 1;
    int ysign=  ~(y >> 31) + 1;
    int xandysign=(  x + y) >> 1;
    int xpysign=  ~(xpy >> 31) + 1;
    int isflowed=(  xsign ^ xpysign) &( ysign ^ xpysign);
    int Tmin=  1 << 31;
    int ans=((  xpy |( ~isflowed + 1)) | Tmin) +( !xandysign << 31);
    return ans;
}
#line 519
int sign(int x) {
    int isnotzero=  !!x;
    int signbit=  x >> 31;
    int ispos=  isnotzero & !signbit;
    int ans=  signbit + ispos;
    return ans;
}
#line 537
unsigned float_abs(unsigned uf) {
  return 2;
}
#line 552
int float_f2i(unsigned uf) {
  return 2;
}
#line 566
unsigned float_half(unsigned uf) {
  return 2;
}
#line 578
unsigned float_i2f(int x) {
  return 2;
}
#line 592
unsigned float_neg(unsigned uf) {
 return 2;
}
#line 606
unsigned float_twice(unsigned uf) {
  return 2;
}
