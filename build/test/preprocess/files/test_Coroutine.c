#include "Coroutine.h"
#include "unity.h"


void setUp(void) {}



void tearDown(void) {}



typedef struct

{

  int state;



} CoroutineInfo;



void foo(CoroutineInfo *self)

{

  switch(self->state)

  {

    case 0:



      self->state = 10;

      break;

    case 10:



      self->state = 0;

      break;





  }

}

void test_coroutine(void)

{

 int i = 4;

  CoroutineInfo fooInfo = {0};



  while(i--)

  {

    foo(&fooInfo);

  }

}
