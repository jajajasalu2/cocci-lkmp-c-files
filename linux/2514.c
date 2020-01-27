cocci_test_suite() {
	struct stack_store *cocci_id/* drivers/md/persistent-data/dm-block-manager.c 78 */;
	unsigned cocci_id/* drivers/md/persistent-data/dm-block-manager.c 76 */;
	struct task_struct *cocci_id/* drivers/md/persistent-data/dm-block-manager.c 74 */;
	struct block_lock *cocci_id/* drivers/md/persistent-data/dm-block-manager.c 74 */;
	void cocci_id/* drivers/md/persistent-data/dm-block-manager.c 74 */;
	u32 cocci_id/* drivers/md/persistent-data/dm-block-manager.c 635 */;
	const void *cocci_id/* drivers/md/persistent-data/dm-block-manager.c 635 */;
	size_t cocci_id/* drivers/md/persistent-data/dm-block-manager.c 635 */;
	bool cocci_id/* drivers/md/persistent-data/dm-block-manager.c 617 */;
	struct waiter {
		struct list_head list;
		struct task_struct *task;
		int wants_write;
	} cocci_id/* drivers/md/persistent-data/dm-block-manager.c 54 */;
	struct dm_buffer **cocci_id/* drivers/md/persistent-data/dm-block-manager.c 463 */;
	struct dm_block **cocci_id/* drivers/md/persistent-data/dm-block-manager.c 457 */;
	struct dm_block_validator *cocci_id/* drivers/md/persistent-data/dm-block-manager.c 456 */;
	unsigned long long cocci_id/* drivers/md/persistent-data/dm-block-manager.c 440 */;
	struct block_lock {
		spinlock_t lock;
		__s32 count;
		struct list_head waiters;
		struct task_struct *holders[MAX_HOLDERS];
#ifdef CONFIG_DM_DEBUG_BLOCK_STACK_TRACING
		struct stack_store traces[MAX_HOLDERS];
#endif
	} cocci_id/* drivers/md/persistent-data/dm-block-manager.c 43 */;
	struct buffer_aux cocci_id/* drivers/md/persistent-data/dm-block-manager.c 392 */;
	struct stack_store {
		unsigned int nr_entries;
		unsigned long entries[MAX_STACK];
	} cocci_id/* drivers/md/persistent-data/dm-block-manager.c 38 */;
	struct dm_block_manager *cocci_id/* drivers/md/persistent-data/dm-block-manager.c 378 */;
	struct block_device *cocci_id/* drivers/md/persistent-data/dm-block-manager.c 378 */;
	struct dm_block_manager {
		struct dm_bufio_client *bufio;
		bool read_only:1;
	} cocci_id/* drivers/md/persistent-data/dm-block-manager.c 373 */;
	struct buffer_aux *cocci_id/* drivers/md/persistent-data/dm-block-manager.c 356 */;
	struct dm_buffer *cocci_id/* drivers/md/persistent-data/dm-block-manager.c 354 */;
	struct buffer_aux {
		struct dm_block_validator *validator;
		int write_locked;
#ifdef CONFIG_DM_DEBUG_BLOCK_MANAGER_LOCKING
		struct block_lock lock;
#endif
	} cocci_id/* drivers/md/persistent-data/dm-block-manager.c 345 */;
	struct dm_block *cocci_id/* drivers/md/persistent-data/dm-block-manager.c 339 */;
	void *cocci_id/* drivers/md/persistent-data/dm-block-manager.c 339 */;
	dm_block_t cocci_id/* drivers/md/persistent-data/dm-block-manager.c 333 */;
	struct waiter cocci_id/* drivers/md/persistent-data/dm-block-manager.c 194 */;
	int cocci_id/* drivers/md/persistent-data/dm-block-manager.c 184 */;
	struct waiter *cocci_id/* drivers/md/persistent-data/dm-block-manager.c 120 */;
}
