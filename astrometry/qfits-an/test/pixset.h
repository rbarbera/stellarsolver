#define TEST_LX     8
#define TEST_LY     35
#define TEST_NPIX   (TEST_LX * TEST_LY)

static float floatpix_set[TEST_NPIX] = {
-65535,  -65535,  -65535,  -65535,  -65535,  -65535,  -65535,  -65535, 
-32767,  -32767,  -32767,  -32767,  -32767,  -32767,  -32767,  -32767, 
-16383,  -16383,  -16383,  -16383,  -16383,  -16383,  -16383,  -16383, 
 -8191,   -8191,   -8191,   -8191,   -8191,   -8191,   -8191,   -8191, 
 -4095,   -4095,   -4095,   -4095,   -4095,   -4095,   -4095,   -4095, 
 -2047,   -2047,   -2047,   -2047,   -2047,   -2047,   -2047,   -2047, 
 -1023,   -1023,   -1023,   -1023,   -1023,   -1023,   -1023,   -1023, 
  -511,    -511,    -511,    -511,    -511,    -511,    -511,    -511, 
  -255,    -255,    -255,    -255,    -255,    -255,    -255,    -255, 
  -127,    -127,    -127,    -127,    -127,    -127,    -127,    -127, 
   -63,     -63,     -63,     -63,     -63,     -63,     -63,     -63, 
   -31,     -31,     -31,     -31,     -31,     -31,     -31,     -31, 
   -15,     -15,     -15,     -15,     -15,     -15,     -15,     -15, 
    -7,      -7,      -7,      -7,      -7,      -7,      -7,      -7, 
    -3,      -3,      -3,      -3,      -3,      -3,      -3,      -3, 
    -1,      -1,      -1,      -1,      -1,      -1,      -1,      -1, 
     0,       0,       0,       0,       0,       0,       0,       0, 
     0,       0,       0,       0,       0,       0,       0,       0, 
     0,       0,       0,       0,       0,       0,       0,       0, 
     1,       1,       1,       1,       1,       1,       1,       1, 
     3,       3,       3,       3,       3,       3,       3,       3, 
     7,       7,       7,       7,       7,       7,       7,       7, 
    15,      15,      15,      15,      15,      15,      15,      15, 
    31,      31,      31,      31,      31,      31,      31,      31, 
    63,      63,      63,      63,      63,      63,      63,      63, 
   127,     127,     127,     127,     127,     127,     127,     127, 
   255,     255,     255,     255,     255,     255,     255,     255, 
   511,     511,     511,     511,     511,     511,     511,     511, 
  1023,    1023,    1023,    1023,    1023,    1023,    1023,    1023, 
  2047,    2047,    2047,    2047,    2047,    2047,    2047,    2047, 
  4095,    4095,    4095,    4095,    4095,    4095,    4095,    4095, 
  8191,    8191,    8191,    8191,    8191,    8191,    8191,    8191, 
 16383,   16383,   16383,   16383,   16383,   16383,   16383,   16383, 
 32767,   32767,   32767,   32767,   32767,   32767,   32767,   32767, 
 65535,   65535,   65535,   65535,   65535,   65535,   65535,   65535
} ;

static double doublepix_set[TEST_NPIX] = {
-65535,  -65535,  -65535,  -65535,  -65535,  -65535,  -65535,  -65535, 
-32767,  -32767,  -32767,  -32767,  -32767,  -32767,  -32767,  -32767, 
-16383,  -16383,  -16383,  -16383,  -16383,  -16383,  -16383,  -16383, 
 -8191,   -8191,   -8191,   -8191,   -8191,   -8191,   -8191,   -8191, 
 -4095,   -4095,   -4095,   -4095,   -4095,   -4095,   -4095,   -4095, 
 -2047,   -2047,   -2047,   -2047,   -2047,   -2047,   -2047,   -2047, 
 -1023,   -1023,   -1023,   -1023,   -1023,   -1023,   -1023,   -1023, 
  -511,    -511,    -511,    -511,    -511,    -511,    -511,    -511, 
  -255,    -255,    -255,    -255,    -255,    -255,    -255,    -255, 
  -127,    -127,    -127,    -127,    -127,    -127,    -127,    -127, 
   -63,     -63,     -63,     -63,     -63,     -63,     -63,     -63, 
   -31,     -31,     -31,     -31,     -31,     -31,     -31,     -31, 
   -15,     -15,     -15,     -15,     -15,     -15,     -15,     -15, 
    -7,      -7,      -7,      -7,      -7,      -7,      -7,      -7, 
    -3,      -3,      -3,      -3,      -3,      -3,      -3,      -3, 
    -1,      -1,      -1,      -1,      -1,      -1,      -1,      -1, 
     0,       0,       0,       0,       0,       0,       0,       0, 
     0,       0,       0,       0,       0,       0,       0,       0, 
     0,       0,       0,       0,       0,       0,       0,       0, 
     1,       1,       1,       1,       1,       1,       1,       1, 
     3,       3,       3,       3,       3,       3,       3,       3, 
     7,       7,       7,       7,       7,       7,       7,       7, 
    15,      15,      15,      15,      15,      15,      15,      15, 
    31,      31,      31,      31,      31,      31,      31,      31, 
    63,      63,      63,      63,      63,      63,      63,      63, 
   127,     127,     127,     127,     127,     127,     127,     127, 
   255,     255,     255,     255,     255,     255,     255,     255, 
   511,     511,     511,     511,     511,     511,     511,     511, 
  1023,    1023,    1023,    1023,    1023,    1023,    1023,    1023, 
  2047,    2047,    2047,    2047,    2047,    2047,    2047,    2047, 
  4095,    4095,    4095,    4095,    4095,    4095,    4095,    4095, 
  8191,    8191,    8191,    8191,    8191,    8191,    8191,    8191, 
 16383,   16383,   16383,   16383,   16383,   16383,   16383,   16383, 
 32767,   32767,   32767,   32767,   32767,   32767,   32767,   32767, 
 65535,   65535,   65535,   65535,   65535,   65535,   65535,   65535
} ;

static int intpix_set[TEST_NPIX] = {
-65535,  -65535,  -65535,  -65535,  -65535,  -65535,  -65535,  -65535, 
-32767,  -32767,  -32767,  -32767,  -32767,  -32767,  -32767,  -32767, 
-16383,  -16383,  -16383,  -16383,  -16383,  -16383,  -16383,  -16383, 
 -8191,   -8191,   -8191,   -8191,   -8191,   -8191,   -8191,   -8191, 
 -4095,   -4095,   -4095,   -4095,   -4095,   -4095,   -4095,   -4095, 
 -2047,   -2047,   -2047,   -2047,   -2047,   -2047,   -2047,   -2047, 
 -1023,   -1023,   -1023,   -1023,   -1023,   -1023,   -1023,   -1023, 
  -511,    -511,    -511,    -511,    -511,    -511,    -511,    -511, 
  -255,    -255,    -255,    -255,    -255,    -255,    -255,    -255, 
  -127,    -127,    -127,    -127,    -127,    -127,    -127,    -127, 
   -63,     -63,     -63,     -63,     -63,     -63,     -63,     -63, 
   -31,     -31,     -31,     -31,     -31,     -31,     -31,     -31, 
   -15,     -15,     -15,     -15,     -15,     -15,     -15,     -15, 
    -7,      -7,      -7,      -7,      -7,      -7,      -7,      -7, 
    -3,      -3,      -3,      -3,      -3,      -3,      -3,      -3, 
    -1,      -1,      -1,      -1,      -1,      -1,      -1,      -1, 
     0,       0,       0,       0,       0,       0,       0,       0, 
     0,       0,       0,       0,       0,       0,       0,       0, 
     0,       0,       0,       0,       0,       0,       0,       0, 
     1,       1,       1,       1,       1,       1,       1,       1, 
     3,       3,       3,       3,       3,       3,       3,       3, 
     7,       7,       7,       7,       7,       7,       7,       7, 
    15,      15,      15,      15,      15,      15,      15,      15, 
    31,      31,      31,      31,      31,      31,      31,      31, 
    63,      63,      63,      63,      63,      63,      63,      63, 
   127,     127,     127,     127,     127,     127,     127,     127, 
   255,     255,     255,     255,     255,     255,     255,     255, 
   511,     511,     511,     511,     511,     511,     511,     511, 
  1023,    1023,    1023,    1023,    1023,    1023,    1023,    1023, 
  2047,    2047,    2047,    2047,    2047,    2047,    2047,    2047, 
  4095,    4095,    4095,    4095,    4095,    4095,    4095,    4095, 
  8191,    8191,    8191,    8191,    8191,    8191,    8191,    8191, 
 16383,   16383,   16383,   16383,   16383,   16383,   16383,   16383, 
 32767,   32767,   32767,   32767,   32767,   32767,   32767,   32767, 
 65535,   65535,   65535,   65535,   65535,   65535,   65535,   65535
} ;
