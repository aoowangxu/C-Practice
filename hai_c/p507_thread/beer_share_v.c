/*************************************************************************
	> File Name: beer_share_v.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Apr 2016 11:23:36 PM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>
 
int beers = 2000000;
pthread_mutex_t a_lock = PTHREAD_MUTEX_INITIALIZER;


void* drink_lots(void *a)
{
    int i = 0;
    pthread_mutex_lock(&a_lock);//结果理解不了，为什么会乱序，为什么会有么减完就输出。
    for (i = 0; i < 100000; ++i)
    {
        //pthread_mutex_lock(&a_lock);
        beers -= 1;
        //pthread_mutex_unlock(&a_lock);
    }
    pthread_mutex_unlock(&a_lock);
    printf("beers = %i\n", beers);
    return NULL;
}

int main()
{
    pthread_t threads[20];
    int t = 0;
    printf("%i bottles of beer on the wall \n%ibottles of beer\n", beers, beers);
    for(t = 0; t < 20; ++t)
    {
        pthread_create(&threads[t], NULL, drink_lots, NULL);
    }

    void *result;
    for(t = 0; t < 20; ++t)
    {
        pthread_join(threads[t], &result);
    }

    printf("\n%i bottles of beer on wall left\n", beers);
    return 0;
}
