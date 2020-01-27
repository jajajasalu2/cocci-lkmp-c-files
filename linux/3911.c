cocci_test_suite() {
	struct mock_fence *cocci_id/* drivers/dma-buf/st-dma-fence.c 85 */;
	const struct dma_fence_ops cocci_id/* drivers/dma-buf/st-dma-fence.c 76 */;
	struct dma_fence cocci_id/* drivers/dma-buf/st-dma-fence.c 561 */;
	const struct subtest cocci_id/* drivers/dma-buf/st-dma-fence.c 545 */[];
	int cocci_id/* drivers/dma-buf/st-dma-fence.c 543 */;
	struct race_thread cocci_id/* drivers/dma-buf/st-dma-fence.c 515 */[2];
	struct dma_fence __rcu *cocci_id/* drivers/dma-buf/st-dma-fence.c 510 */[2];
	void *cocci_id/* drivers/dma-buf/st-dma-fence.c 508 */;
	struct wait_cb cocci_id/* drivers/dma-buf/st-dma-fence.c 49 */;
	const int cocci_id/* drivers/dma-buf/st-dma-fence.c 48 */;
	bool cocci_id/* drivers/dma-buf/st-dma-fence.c 46 */;
	long cocci_id/* drivers/dma-buf/st-dma-fence.c 46 */;
	unsigned long cocci_id/* drivers/dma-buf/st-dma-fence.c 447 */;
	const struct race_thread *cocci_id/* drivers/dma-buf/st-dma-fence.c 446 */;
	struct dma_fence *cocci_id/* drivers/dma-buf/st-dma-fence.c 438 */;
	void cocci_id/* drivers/dma-buf/st-dma-fence.c 438 */;
	struct race_thread {
		struct dma_fence __rcu **fences;
		struct task_struct *task;
		bool before;
		int id;
	} cocci_id/* drivers/dma-buf/st-dma-fence.c 431 */;
	struct dma_fence *cocci_id/* drivers/dma-buf/st-dma-fence.c 410 */[64];
	struct dma_fence_cb *cocci_id/* drivers/dma-buf/st-dma-fence.c 41 */;
	struct wait_timer cocci_id/* drivers/dma-buf/st-dma-fence.c 373 */;
	struct wait_timer *cocci_id/* drivers/dma-buf/st-dma-fence.c 366 */;
	struct timer_list *cocci_id/* drivers/dma-buf/st-dma-fence.c 364 */;
	struct wait_cb {
		struct dma_fence_cb cb;
		struct task_struct *task;
	} cocci_id/* drivers/dma-buf/st-dma-fence.c 36 */;
	struct wait_timer {
		struct timer_list timer;
		struct dma_fence *f;
	} cocci_id/* drivers/dma-buf/st-dma-fence.c 359 */;
	const char *cocci_id/* drivers/dma-buf/st-dma-fence.c 26 */;
	struct mock_fence cocci_id/* drivers/dma-buf/st-dma-fence.c 23 */;
	struct mock_fence {
		struct dma_fence base;
		struct spinlock lock;
	} *cocci_id/* drivers/dma-buf/st-dma-fence.c 19 */;
	struct kmem_cache *cocci_id/* drivers/dma-buf/st-dma-fence.c 17 */;
	struct simple_cb cocci_id/* drivers/dma-buf/st-dma-fence.c 153 */;
	struct simple_cb {
		struct dma_fence_cb cb;
		bool seen;
	} cocci_id/* drivers/dma-buf/st-dma-fence.c 146 */;
}
