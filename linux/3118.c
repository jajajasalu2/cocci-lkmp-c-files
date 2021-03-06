cocci_test_suite() {
	sector_t cocci_id/* drivers/block/drbd/drbd_bitmap.c 988 */;
	struct bio *cocci_id/* drivers/block/drbd/drbd_bitmap.c 981 */;
	struct drbd_bm_aio_ctx *cocci_id/* drivers/block/drbd/drbd_bitmap.c 979 */;
	struct kref *cocci_id/* drivers/block/drbd/drbd_bitmap.c 926 */;
	struct drbd_bitmap {
		struct page **bm_pages;
		spinlock_t bm_lock;
		unsigned int n_bitmap_hints;
		unsigned int al_bitmap_hints[AL_UPDATES_PER_TRANSACTION];
		unsigned long bm_set;
		unsigned long bm_bits;
		size_t bm_words;
		size_t bm_number_of_pages;
		sector_t bm_dev_capacity;
		struct mutex bm_change;
		wait_queue_head_t bm_io_wait;
		enum bm_flag bm_flags;
		char *bm_why;
		struct task_struct *bm_task;
	} cocci_id/* drivers/block/drbd/drbd_bitmap.c 83 */;
	unsigned long long cocci_id/* drivers/block/drbd/drbd_bitmap.c 647 */;
	bool cocci_id/* drivers/block/drbd/drbd_bitmap.c 639 */;
	struct drbd_backing_dev *cocci_id/* drivers/block/drbd/drbd_bitmap.c 614 */;
	long cocci_id/* drivers/block/drbd/drbd_bitmap.c 606 */;
	size_t cocci_id/* drivers/block/drbd/drbd_bitmap.c 584 */;
	struct drbd_bitmap cocci_id/* drivers/block/drbd/drbd_bitmap.c 439 */;
	struct page **cocci_id/* drivers/block/drbd/drbd_bitmap.c 353 */;
	struct page *cocci_id/* drivers/block/drbd/drbd_bitmap.c 314 */;
	u64 cocci_id/* drivers/block/drbd/drbd_bitmap.c 304 */;
	volatile const unsigned long *cocci_id/* drivers/block/drbd/drbd_bitmap.c 271 */;
	void *cocci_id/* drivers/block/drbd/drbd_bitmap.c 214 */;
	unsigned int cocci_id/* drivers/block/drbd/drbd_bitmap.c 1357 */;
	unsigned long *cocci_id/* drivers/block/drbd/drbd_bitmap.c 1355 */;
	struct drbd_bitmap *cocci_id/* drivers/block/drbd/drbd_bitmap.c 1354 */;
	unsigned long cocci_id/* drivers/block/drbd/drbd_bitmap.c 1352 */;
	const unsigned long cocci_id/* drivers/block/drbd/drbd_bitmap.c 1351 */;
	struct drbd_device *cocci_id/* drivers/block/drbd/drbd_bitmap.c 1351 */;
	int cocci_id/* drivers/block/drbd/drbd_bitmap.c 1351 */;
	unsigned cocci_id/* drivers/block/drbd/drbd_bitmap.c 1263 */;
	const int cocci_id/* drivers/block/drbd/drbd_bitmap.c 1258 */;
	enum bm_flag cocci_id/* drivers/block/drbd/drbd_bitmap.c 124 */;
	char *cocci_id/* drivers/block/drbd/drbd_bitmap.c 124 */;
	const char *cocci_id/* drivers/block/drbd/drbd_bitmap.c 113 */;
	void cocci_id/* drivers/block/drbd/drbd_bitmap.c 113 */;
	struct drbd_bm_aio_ctx cocci_id/* drivers/block/drbd/drbd_bitmap.c 1051 */;
	char cocci_id/* drivers/block/drbd/drbd_bitmap.c 1039 */[10];
	const unsigned int cocci_id/* drivers/block/drbd/drbd_bitmap.c 1033 */;
}
