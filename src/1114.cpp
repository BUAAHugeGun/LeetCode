#include <semaphore.h>
class Foo {
public:
    sem_t a,b;
    Foo() {
        sem_init(&a,0,0);
        sem_init(&b,0,0);
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        sem_post(&a);
    }

    void second(function<void()> printSecond) {
        sem_wait(&a);
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        sem_post(&b);
    }

    void third(function<void()> printThird) {
        sem_wait(&b);
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};
