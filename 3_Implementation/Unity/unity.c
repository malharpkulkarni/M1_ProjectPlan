
#ifndef Unity_Framework_H
#define  Unity_Framework_H
#define Unity

#define  Unity_version_major    2
#define Unity_version_minor    5
#define Unity_version_build    1
#define Unity_version          ((Unity_version_major << 16) | (Unity_version_minor << 8) | Unity_version_build)

#ifdef __c
extern "C"
{
#endif



void setUp(void);
void tearDown(void);

void suiteSetUp(void);
int suiteTearDown(int num_failures);


void resetTest(void);
void verifyTest(void);
