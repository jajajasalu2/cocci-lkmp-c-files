cocci_test_suite() {
	struct ib_fmr_pool {
		spinlock_t pool_lock;
		int pool_size;
		int max_pages;
		int max_remaps;
		int dirty_watermark;
		int dirty_len;
		struct list_head free_list;
		struct list_head dirty_list;
		struct hlist_head *cache_bucket;
		void (*flush_function)(struct ib_fmr_pool *pool, void *arg);
		void *flush_arg;
		struct kthread_worker *worker;
		struct kthread_work work;
		atomic_t req_ser;
		atomic_t flush_ser;
		wait_queue_head_t force_wait;
	} cocci_id/* drivers/infiniband/core/fmr_pool.c 83 */;
	enum{IB_FMR_MAX_REMAPS=32, IB_FMR_HASH_BITS=8, IB_FMR_HASH_SIZE=1 << IB_FMR_HASH_BITS, IB_FMR_HASH_MASK=IB_FMR_HASH_SIZE - 1,} cocci_id/* drivers/infiniband/core/fmr_pool.c 47 */;
	struct ib_pool_fmr cocci_id/* drivers/infiniband/core/fmr_pool.c 427 */;
	unsigned long cocci_id/* drivers/infiniband/core/fmr_pool.c 399 */;
	void cocci_id/* drivers/infiniband/core/fmr_pool.c 318 */;
	u64 cocci_id/* drivers/infiniband/core/fmr_pool.c 272 */;
	struct ib_fmr_attr cocci_id/* drivers/infiniband/core/fmr_pool.c 264 */;
	struct ib_pool_fmr *cocci_id/* drivers/infiniband/core/fmr_pool.c 263 */;
	int cocci_id/* drivers/infiniband/core/fmr_pool.c 199 */;
	struct ib_device *cocci_id/* drivers/infiniband/core/fmr_pool.c 197 */;
	struct ib_fmr_pool_param *cocci_id/* drivers/infiniband/core/fmr_pool.c 195 */;
	struct ib_pd *cocci_id/* drivers/infiniband/core/fmr_pool.c 194 */;
	struct ib_fmr_pool *cocci_id/* drivers/infiniband/core/fmr_pool.c 194 */;
	struct ib_fmr_pool cocci_id/* drivers/infiniband/core/fmr_pool.c 173 */;
	struct kthread_work *cocci_id/* drivers/infiniband/core/fmr_pool.c 171 */;
	struct hlist_head *cocci_id/* drivers/infiniband/core/fmr_pool.c 120 */;
	u64 *cocci_id/* drivers/infiniband/core/fmr_pool.c 116 */;
	u32 cocci_id/* drivers/infiniband/core/fmr_pool.c 108 */;
}
