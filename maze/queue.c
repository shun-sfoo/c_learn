#include "queue.h"

static item_t queue[512];

int head = 0, tail = 0;

void enqueue(item_t q) { queue[tail++] = q; }

item_t dequeue(void) { return queue[head++]; }

int is_empty(void) { return head == tail; }
