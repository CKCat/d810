/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

struct _IO_FILE ;
struct timeval ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
void tigress_flatten_indirect(unsigned int *input , unsigned int *output ) ;
extern int pthread_cond_broadcast(int *cond ) ;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned int alignment , unsigned int size ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern unsigned int strlen(char const   *s ) ;
extern int pthread_barrier_destroy(int *barrier ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned int maxlen ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int printf(char const   *format  , ...) ;
extern int pthread_cond_signal(int *cond ) ;
extern int raise(int sig ) ;
extern int pthread_barrier_init(int *barrier , int *attr , unsigned int count ) ;
extern int scanf(char const   *format  , ...) ;
extern int unlink(char const   *filename ) ;
extern int pthread_barrier_wait(int *barrier ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern int pthread_mutex_lock(int *mutex ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned int size ) ;
extern void *dlsym(void *handle , char *symbol ) ;
extern int gethostname(char *name , unsigned int namelen ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern void abort() ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern void free(void *ptr ) ;
extern void signal(int sig , void *func ) ;
extern void exit(int status ) ;
void main(void) ;
typedef struct _IO_FILE FILE;
extern int mprotect(void *addr , unsigned int len , int prot ) ;
extern int close(int filedes ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern double log(double x ) ;
extern double ceil(double x ) ;
extern int fcntl(int filedes , int cmd  , ...) ;
extern int fclose(void *stream ) ;
extern void perror(char const   *str ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
extern int write(int filedes , void *buf , unsigned int nbyte ) ;
extern int ptrace(int request , void *pid , void *addr , int data ) ;
extern unsigned int strnlen(char const   *s , unsigned int maxlen ) ;
void tigress_flatten_switch(unsigned int *input , unsigned int *output ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
struct timeval {
   long tv_sec ;
   int tv_usec ;
};
extern void qsort(void *base , unsigned int nel , unsigned int width , int (*compar)(void *a ,
                                                                                     void *b ) ) ;
extern long clock(void) ;
void test_function_original(unsigned int *input , unsigned int *output ) ;
extern long time(long *tloc ) ;
extern int read(int filedes , void *buf , unsigned int nbyte ) ;
extern int rand() ;
extern int strcmp(char const   *a , char const   *b ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern double sqrt(double x ) ;
extern int snprintf(char *str , unsigned int size , char const   *format  , ...) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern void *malloc(unsigned int size ) ;
extern int nanosleep(int *rqtp , int *rmtp ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int atoi(char const   *s ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
void megaInit(void) ;
void tigress_flatten_switch(unsigned int *input , unsigned int *output ) 
{ 
  unsigned int local_state ;
  unsigned int ref_input_value ;
  struct timeval time_info ;
  unsigned int nb_seconds ;
  char password[100] ;
  unsigned int tmp ;
  unsigned int failed ;
  unsigned int stringCompareResult ;
  unsigned int activationCode ;
  unsigned int i ;
  int tmp___0 ;
  unsigned long _1_tigress_flatten_switch_next ;

  {
  _1_tigress_flatten_switch_next = 23UL;
  while (1) {
    switch (_1_tigress_flatten_switch_next) {
    case 3: 
    failed = (failed & ~ ((unsigned int )((int )((((activationCode - ref_input_value) | (ref_input_value - activationCode)) >> 31U) & 1U)))) + (unsigned int )((int )((((activationCode - ref_input_value) | (ref_input_value - activationCode)) >> 31U) & 1U));
    _1_tigress_flatten_switch_next = 28UL;
    break;
    case 6: 
    gettimeofday(& time_info, (void *)0);
    _1_tigress_flatten_switch_next = 18UL;
    break;
    case 16: 
    *(output + 0) = 0U;
    _1_tigress_flatten_switch_next = 25UL;
    break;
    case 34: 
    local_state = (unsigned int )(((unsigned long )*(input + 0UL) | 650604291UL) + ((unsigned long )*(input + 0UL) & 650604291UL));
    _1_tigress_flatten_switch_next = 15UL;
    break;
    case 29: 
    i = 0U;
    _1_tigress_flatten_switch_next = 11UL;
    break;
    case 15: 
    printf("Please enter password:");
    _1_tigress_flatten_switch_next = 7UL;
    break;
    case 2: 
    failed = 0U;
    _1_tigress_flatten_switch_next = 6UL;
    break;
    case 9: 
    activationCode = *(input + 0UL);
    _1_tigress_flatten_switch_next = 1UL;
    break;
    case 30: 
    password[tmp] = (char)0;
    _1_tigress_flatten_switch_next = 4UL;
    break;
    case 14: 
    stringCompareResult = (unsigned int )tmp___0;
    _1_tigress_flatten_switch_next = 8UL;
    break;
    case 19: 
    local_state = (local_state ^ 66U) + ((local_state & 66U) + (local_state & 66U));
    _1_tigress_flatten_switch_next = 10UL;
    break;
    case 1: 
    tmp___0 = strncmp((char const   *)(password), "secret", 100U);
    _1_tigress_flatten_switch_next = 14UL;
    break;
    case 4: 
    tmp = ((tmp ^ ~ 1U) + ((tmp | 1U) + (tmp | 1U))) + 1U;
    _1_tigress_flatten_switch_next = 37UL;
    break;
    case 25: ;
    if (((~ local_state | 1U) + local_state) + 1U) {
      _1_tigress_flatten_switch_next = 20UL;
    } else {
      _1_tigress_flatten_switch_next = 29UL;
    }
    break;
    case 18: 
    nb_seconds = (unsigned int )(((~ time_info.tv_sec | 4294967295L) + time_info.tv_sec) + 1L);
    _1_tigress_flatten_switch_next = 12UL;
    break;
    case 35: ;
    return;
    break;
    case 13: ;
    switch ((unsigned long )((int )local_state) % 4UL) {
    case 0UL: 
    _1_tigress_flatten_switch_next = 33UL;
    break;
    case 1UL: 
    _1_tigress_flatten_switch_next = 19UL;
    break;
    default: 
    _1_tigress_flatten_switch_next = 24UL;
    break;
    }
    break;
    case 11: ;
    if ((int )((((~ ((unsigned long )i) & 100UL) | ((~ ((unsigned long )i) | 100UL) & ((unsigned long )i - 100UL))) >> 63UL) & 1UL)) {
      _1_tigress_flatten_switch_next = 27UL;
    } else {
      _1_tigress_flatten_switch_next = 10UL;
    }
    break;
    case 23: 
    password[0] = (char )'\000';
    _1_tigress_flatten_switch_next = 0UL;
    break;
    case 8: 
    failed = (failed & ~ ((unsigned int )((unsigned long )stringCompareResult != 0UL))) + (unsigned int )((unsigned long )stringCompareResult != 0UL);
    _1_tigress_flatten_switch_next = 3UL;
    break;
    case 10: 
    *(output + 0UL) = (unsigned int )(((unsigned long )local_state | 389047233UL) - ((unsigned long )local_state & 389047233UL));
    _1_tigress_flatten_switch_next = 35UL;
    break;
    case 0: 
    tmp = 1U;
    _1_tigress_flatten_switch_next = 37UL;
    break;
    case 37: ;
    if ((int )((((~ 100U | tmp) & ((100U ^ tmp) | ~ (tmp - 100U))) >> 31U) & 1U)) {
      _1_tigress_flatten_switch_next = 2UL;
    } else {
      _1_tigress_flatten_switch_next = 30UL;
    }
    break;
    case 33: 
    local_state = (local_state | 66U) - (local_state & 66U);
    _1_tigress_flatten_switch_next = 10UL;
    break;
    case 12: 
    ref_input_value = ((((((~ nb_seconds | 1344344352U) + nb_seconds) + 1U) & ~ 2197946369U) + 2197946369U) ^ (((((~ nb_seconds | 1344344352U) + nb_seconds) + 1U) | 1344887088U) - ((((~ nb_seconds | 1344344352U) + nb_seconds) + 1U) & 1344887088U))) + (((((((~ nb_seconds | 1344344352U) + nb_seconds) + 1U) & ~ 2197946369U) + 2197946369U) & (((((~ nb_seconds | 1344344352U) + nb_seconds) + 1U) | 1344887088U) - ((((~ nb_seconds | 1344344352U) + nb_seconds) + 1U) & 1344887088U))) << 1U);
    _1_tigress_flatten_switch_next = 34UL;
    break;
    case 24: 
    local_state = (local_state + ~ 66U) + 1U;
    _1_tigress_flatten_switch_next = 10UL;
    break;
    case 28: ;
    if (failed) {
      _1_tigress_flatten_switch_next = 16UL;
    } else {
      _1_tigress_flatten_switch_next = 25UL;
    }
    break;
    case 27: 
    local_state = ((local_state | (((unsigned int )password[i] & ref_input_value) * ((unsigned int )password[i] | ref_input_value) + ((unsigned int )password[i] & ~ ref_input_value) * (~ ((unsigned int )password[i]) & ref_input_value))) + (local_state | (((unsigned int )password[i] & ref_input_value) * ((unsigned int )password[i] | ref_input_value) + ((unsigned int )password[i] & ~ ref_input_value) * (~ ((unsigned int )password[i]) & ref_input_value)))) - (local_state ^ (((unsigned int )password[i] & ref_input_value) * ((unsigned int )password[i] | ref_input_value) + ((unsigned int )password[i] & ~ ref_input_value) * (~ ((unsigned int )password[i]) & ref_input_value)));
    _1_tigress_flatten_switch_next = 21UL;
    break;
    case 20: 
    local_state = ((((5U & local_state) * (5U | local_state) + (5U & ~ local_state) * (~ 5U & local_state)) | activationCode) + (((5U & local_state) * (5U | local_state) + (5U & ~ local_state) * (~ 5U & local_state)) | activationCode)) - (((5U & local_state) * (5U | local_state) + (5U & ~ local_state) * (~ 5U & local_state)) ^ activationCode);
    _1_tigress_flatten_switch_next = 13UL;
    break;
    case 21: 
    i = (unsigned int )((((unsigned long )i | 1UL) + ((unsigned long )i | 1UL)) - ((unsigned long )i ^ 1UL));
    _1_tigress_flatten_switch_next = 11UL;
    break;
    case 7: 
    scanf("%s", password);
    _1_tigress_flatten_switch_next = 9UL;
    break;
    }
  }
}
}
void megaInit(void) 
{ 


  {

}
}
void test_function_original(unsigned int *input , unsigned int *output ) 
{ 
  unsigned int local_state ;
  unsigned int ref_input_value ;
  struct timeval time_info ;
  unsigned int nb_seconds ;
  char password[100] ;
  unsigned int tmp ;
  unsigned int failed ;
  unsigned int stringCompareResult ;
  unsigned int activationCode ;
  unsigned int i ;
  int tmp___0 ;

  {
  password[0] = (char )'\000';
  tmp = 1U;
  while (! (tmp >= 100U)) {
    password[tmp] = (char)0;
    tmp ++;
  }
  failed = 0U;
  gettimeofday(& time_info, (void *)0);
  nb_seconds = (unsigned int )(time_info.tv_sec & 4294967295L);
  ref_input_value = ((nb_seconds & 1344344352U) | 2197946369U) + ((nb_seconds & 1344344352U) ^ 1344887088U);
  local_state = (unsigned int )((unsigned long )*(input + 0UL) + 650604291UL);
  printf("Please enter password:");
  scanf("%s", password);
  activationCode = *(input + 0UL);
  tmp___0 = strncmp((char const   *)(password), "secret", 100U);
  stringCompareResult = (unsigned int )tmp___0;
  failed |= (unsigned int )((unsigned long )stringCompareResult != 0UL);
  failed |= (unsigned int )(activationCode != ref_input_value);
  if (failed) {
    *(output + 0) = 0U;
  }
  if (local_state & 1U) {
    local_state = 5U * local_state + activationCode;
    switch ((unsigned long )((int )local_state) % 4UL) {
    case 0UL: 
    local_state ^= 66U;
    break;
    case 1UL: 
    local_state += 66U;
    break;
    default: 
    local_state -= 66U;
    break;
    }
  } else {
    i = 0U;
    while ((unsigned long )i < 100UL) {
      local_state += (unsigned int )password[i] * ref_input_value;
      i = (unsigned int )((unsigned long )i + 1UL);
    }
  }
  *(output + 0UL) = (unsigned int )((unsigned long )local_state ^ 389047233UL);
  return;
}
}
void main(void) 
{ 


  {
  megaInit();
}
}
void tigress_flatten_indirect(unsigned int *input , unsigned int *output ) 
{ 
  unsigned int local_state ;
  unsigned int ref_input_value ;
  struct timeval time_info ;
  unsigned int nb_seconds ;
  char password[100] ;
  unsigned int tmp ;
  unsigned int failed ;
  unsigned int stringCompareResult ;
  unsigned int activationCode ;
  unsigned int i ;
  int tmp___0 ;
  // Note that we add the volatile to prevent compiler optimization
  volatile unsigned long _3_tigress_flatten_indirect_next ;
  void *_3_tigress_flatten_indirect_jumpTab[37]  = {&& _3_tigress_flatten_indirect_lab1,
                                                    && _3_tigress_flatten_indirect_lab2,
                                                    && _3_tigress_flatten_indirect_lab3,
                                                    && _3_tigress_flatten_indirect_lab4,
                                                    && _3_tigress_flatten_indirect_lab5,
                                                    && _3_tigress_flatten_indirect_lab1,
                                                    && _3_tigress_flatten_indirect_lab7,
                                                    && _3_tigress_flatten_indirect_lab8,
                                                    && _3_tigress_flatten_indirect_lab9,
                                                    && _3_tigress_flatten_indirect_lab1,
                                                    && _3_tigress_flatten_indirect_lab11,
                                                    && _3_tigress_flatten_indirect_lab12,
                                                    && _3_tigress_flatten_indirect_lab13,
                                                    && _3_tigress_flatten_indirect_lab1,
                                                    && _3_tigress_flatten_indirect_lab15,
                                                    && _3_tigress_flatten_indirect_lab1,
                                                    && _3_tigress_flatten_indirect_lab17,
                                                    && _3_tigress_flatten_indirect_lab18,
                                                    && _3_tigress_flatten_indirect_lab19,
                                                    && _3_tigress_flatten_indirect_lab20,
                                                    && _3_tigress_flatten_indirect_lab21,
                                                    && _3_tigress_flatten_indirect_lab22,
                                                    && _3_tigress_flatten_indirect_lab23,
                                                    && _3_tigress_flatten_indirect_lab1,
                                                    && _3_tigress_flatten_indirect_lab25,
                                                    && _3_tigress_flatten_indirect_lab26,
                                                    && _3_tigress_flatten_indirect_lab27,
                                                    && _3_tigress_flatten_indirect_lab28,
                                                    && _3_tigress_flatten_indirect_lab29,
                                                    && _3_tigress_flatten_indirect_lab30,
                                                    && _3_tigress_flatten_indirect_lab1,
                                                    && _3_tigress_flatten_indirect_lab32,
                                                    && _3_tigress_flatten_indirect_lab33,
                                                    && _3_tigress_flatten_indirect_lab34,
                                                    && _3_tigress_flatten_indirect_lab35,
                                                    && _3_tigress_flatten_indirect_lab36,
                                                    && _3_tigress_flatten_indirect_lab37};

  {
  _3_tigress_flatten_indirect_next = 34UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab35: /* CIL Label */ 
  scanf("%s", password);
  _3_tigress_flatten_indirect_next = 26UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab12: /* CIL Label */ 
  i = 0U;
  _3_tigress_flatten_indirect_next = 28UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab25: /* CIL Label */ 
  password[tmp] = (char)0;
  _3_tigress_flatten_indirect_next = 15UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab4: /* CIL Label */ 
  failed = 0U;
  _3_tigress_flatten_indirect_next = 1UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab19: /* CIL Label */ 
  failed = (failed & ~ ((unsigned int )((int )((((((activationCode - ref_input_value) + (activationCode - ref_input_value)) & ((int )(activationCode - ref_input_value) >> 31)) - (activationCode - ref_input_value)) >> 31U) & 1U)))) + (unsigned int )((int )((((((activationCode - ref_input_value) + (activationCode - ref_input_value)) & ((int )(activationCode - ref_input_value) >> 31)) - (activationCode - ref_input_value)) >> 31U) & 1U));
  _3_tigress_flatten_indirect_next = 33UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab22: /* CIL Label */ 
  stringCompareResult = (unsigned int )tmp___0;
  _3_tigress_flatten_indirect_next = 27UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab1: /* CIL Label */ 
  gettimeofday(& time_info, (void *)0);
  _3_tigress_flatten_indirect_next = 3UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab7: /* CIL Label */ 
  printf("Please enter password:");
  _3_tigress_flatten_indirect_next = 35UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab23: /* CIL Label */ ;
  return;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab9: /* CIL Label */ 
  tmp___0 = strncmp((char const   *)(password), "secret", 100U);
  _3_tigress_flatten_indirect_next = 22UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab32: /* CIL Label */ 
  local_state = ((local_state ^ ~ (((unsigned int )password[i] & ref_input_value) * ((unsigned int )password[i] | ref_input_value) + ((unsigned int )password[i] & ~ ref_input_value) * (~ ((unsigned int )password[i]) & ref_input_value))) + ((local_state | (((unsigned int )password[i] & ref_input_value) * ((unsigned int )password[i] | ref_input_value) + ((unsigned int )password[i] & ~ ref_input_value) * (~ ((unsigned int )password[i]) & ref_input_value))) + (local_state | (((unsigned int )password[i] & ref_input_value) * ((unsigned int )password[i] | ref_input_value) + ((unsigned int )password[i] & ~ ref_input_value) * (~ ((unsigned int )password[i]) & ref_input_value))))) + 1U;
  _3_tigress_flatten_indirect_next = 21UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab33: /* CIL Label */ ;
  if (failed) {
    _3_tigress_flatten_indirect_next = 2UL;
  } else {
    _3_tigress_flatten_indirect_next = 5UL;
  }
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab3: /* CIL Label */ 
  nb_seconds = (unsigned int )(((~ time_info.tv_sec | 4294967295L) + time_info.tv_sec) + 1L);
  _3_tigress_flatten_indirect_next = 18UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab8: /* CIL Label */ 
  local_state = ((local_state ^ ~ 66U) + ((local_state | 66U) << 1U)) + 1U;
  _3_tigress_flatten_indirect_next = 11UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab34: /* CIL Label */ 
  password[0] = (char )'\000';
  _3_tigress_flatten_indirect_next = 20UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab27: /* CIL Label */ 
  failed = (failed & ~ ((unsigned int )((unsigned long )stringCompareResult != 0UL))) + (unsigned int )((unsigned long )stringCompareResult != 0UL);
  _3_tigress_flatten_indirect_next = 19UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab28: /* CIL Label */ ;
  if ((int )((((~ ((unsigned long )i) & 100UL) | ((~ ((unsigned long )i) | 100UL) & ((unsigned long )i - 100UL))) >> 63UL) & 1UL)) {
    _3_tigress_flatten_indirect_next = 32UL;
  } else {
    _3_tigress_flatten_indirect_next = 11UL;
  }
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab26: /* CIL Label */ 
  activationCode = *(input + 0UL);
  _3_tigress_flatten_indirect_next = 9UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab13: /* CIL Label */ 
  local_state = (local_state | 66U) - (local_state & 66U);
  _3_tigress_flatten_indirect_next = 11UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab11: /* CIL Label */ 
  *(output + 0UL) = (unsigned int )((((unsigned long )local_state - 389047233UL) - (((unsigned long )local_state | ~ 389047233UL) + ((unsigned long )local_state | ~ 389047233UL))) - 2UL);
  _3_tigress_flatten_indirect_next = 23UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab37: /* CIL Label */ 
  local_state = (unsigned int )(((unsigned long )*(input + 0UL) | 650604291UL) + ((unsigned long )*(input + 0UL) & 650604291UL));
  _3_tigress_flatten_indirect_next = 7UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab18: /* CIL Label */ 
  ref_input_value = ((((((((~ nb_seconds | 1344344352U) + nb_seconds) + 1U) + 2197946369U) + 1U) + ((- (((~ nb_seconds | 1344344352U) + nb_seconds) + 1U) - 1U) | (- 2197946369U - 1U))) | (((((~ nb_seconds | 1344344352U) - ~ nb_seconds) - 1344887088U) - ((((~ nb_seconds | 1344344352U) - ~ nb_seconds) | ~ 1344887088U) + (((~ nb_seconds | 1344344352U) - ~ nb_seconds) | ~ 1344887088U))) - 2U)) + (((((((~ nb_seconds | 1344344352U) + nb_seconds) + 1U) + 2197946369U) + 1U) + ((- (((~ nb_seconds | 1344344352U) + nb_seconds) + 1U) - 1U) | (- 2197946369U - 1U))) | (((((~ nb_seconds | 1344344352U) - ~ nb_seconds) - 1344887088U) - ((((~ nb_seconds | 1344344352U) - ~ nb_seconds) | ~ 1344887088U) + (((~ nb_seconds | 1344344352U) - ~ nb_seconds) | ~ 1344887088U))) - 2U))) - (((((((~ nb_seconds | 1344344352U) + nb_seconds) + 1U) + 2197946369U) + 1U) + ((- (((~ nb_seconds | 1344344352U) + nb_seconds) + 1U) - 1U) | (- 2197946369U - 1U))) ^ (((((~ nb_seconds | 1344344352U) - ~ nb_seconds) - 1344887088U) - ((((~ nb_seconds | 1344344352U) - ~ nb_seconds) | ~ 1344887088U) + (((~ nb_seconds | 1344344352U) - ~ nb_seconds) | ~ 1344887088U))) - 2U));
  _3_tigress_flatten_indirect_next = 37UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab2: /* CIL Label */ 
  *(output + 0) = 0U;
  _3_tigress_flatten_indirect_next = 5UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab15: /* CIL Label */ 
  tmp = ((tmp ^ ~ 1U) + ((tmp | 1U) << 1U)) + 1U;
  _3_tigress_flatten_indirect_next = 29UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab21: /* CIL Label */ 
  i = (unsigned int )(((unsigned long )i - ~ 1UL) - 1UL);
  _3_tigress_flatten_indirect_next = 28UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab29: /* CIL Label */ ;
  if ((int )((((~ 100U | tmp) & ((100U ^ tmp) | ~ (tmp - 100U))) >> 31U) & 1U)) {
    _3_tigress_flatten_indirect_next = 4UL;
  } else {
    _3_tigress_flatten_indirect_next = 25UL;
  }
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab5: /* CIL Label */ ;
  if (((~ local_state | 1U) + local_state) + 1U) {
    _3_tigress_flatten_indirect_next = 17UL;
  } else {
    _3_tigress_flatten_indirect_next = 12UL;
  }
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab36: /* CIL Label */ ;
  switch ((unsigned long )((int )local_state) % 4UL) {
  case 0UL: 
  _3_tigress_flatten_indirect_next = 13UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  case 1UL: 
  _3_tigress_flatten_indirect_next = 8UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  default: 
  _3_tigress_flatten_indirect_next = 30UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  }
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab30: /* CIL Label */ 
  local_state = (local_state + ~ 66U) + 1U;
  _3_tigress_flatten_indirect_next = 11UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab20: /* CIL Label */ 
  tmp = 1U;
  _3_tigress_flatten_indirect_next = 29UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
  _3_tigress_flatten_indirect_lab17: /* CIL Label */ 
  local_state = (((5U & local_state) * (5U | local_state) + (5U & ~ local_state) * (~ 5U & local_state)) - ~ activationCode) - 1U;
  _3_tigress_flatten_indirect_next = 36UL;
  goto *(_3_tigress_flatten_indirect_jumpTab[_3_tigress_flatten_indirect_next - 1]);
}
}