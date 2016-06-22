#include "Coroutine.h"
#include "unity.h"


void setUp(void) {}



void tearDown(void) {}



typedef struct

{

  int state;

  int i;



} CoroutineInfo;



void foo(CoroutineInfo *self)

{

  switch(self->state) { case 0:;

  while(1)

  {



    self->i += 10;

    if(self->i < 5)

    {

      self->state = 24; return; case 24:;

    }





    self->i += 2;

    self->state = 29; return; case 29:;

  }



  };

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
