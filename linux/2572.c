cocci_test_suite() {
	int __init cocci_id/* drivers/md/dm-io.c 558 */;
	struct dm_io_request *cocci_id/* drivers/md/dm-io.c 537 */;
	unsigned cocci_id/* drivers/md/dm-io.c 537 */;
	struct io *cocci_id/* drivers/md/dm-io.c 470 */;
	io_notify_fn cocci_id/* drivers/md/dm-io.c 468 */;
	struct dpages *cocci_id/* drivers/md/dm-io.c 468 */;
	void *cocci_id/* drivers/md/dm-io.c 468 */;
	struct dm_io_region *cocci_id/* drivers/md/dm-io.c 467 */;
	struct dm_io_client *cocci_id/* drivers/md/dm-io.c 466 */;
	unsigned int cocci_id/* drivers/md/dm-io.c 466 */;
	int cocci_id/* drivers/md/dm-io.c 466 */;
	struct sync_io cocci_id/* drivers/md/dm-io.c 437 */;
	struct kmem_cache *cocci_id/* drivers/md/dm-io.c 43 */;
	struct sync_io *cocci_id/* drivers/md/dm-io.c 426 */;
	struct sync_io {
		unsigned long error_bits;
		struct completion wait;
	} cocci_id/* drivers/md/dm-io.c 419 */;
	struct dpages cocci_id/* drivers/md/dm-io.c 395 */;
	struct io {
		unsigned long error_bits;
		atomic_t count;
		struct dm_io_client *client;
		io_notify_fn callback;
		void *context;
		void *vma_invalidate_address;
		unsigned long vma_invalidate_size;
	}__attribute__((aligned(DM_IO_MAX_REGIONS))) cocci_id/* drivers/md/dm-io.c 33 */;
	unsigned short cocci_id/* drivers/md/dm-io.c 307 */;
	struct request_queue *cocci_id/* drivers/md/dm-io.c 306 */;
	struct page *cocci_id/* drivers/md/dm-io.c 301 */;
	struct dm_io_client {
		mempool_t pool;
		struct bio_set bios;
	} cocci_id/* drivers/md/dm-io.c 24 */;
	struct bio *cocci_id/* drivers/md/dm-io.c 230 */;
	void cocci_id/* drivers/md/dm-io.c 230 */;
	sector_t cocci_id/* drivers/md/dm-io.c 219 */;
	struct bio_vec cocci_id/* drivers/md/dm-io.c 211 */;
	struct bio_vec *cocci_id/* drivers/md/dm-io.c 211 */;
	unsigned long *cocci_id/* drivers/md/dm-io.c 209 */;
	unsigned *cocci_id/* drivers/md/dm-io.c 209 */;
	struct page **cocci_id/* drivers/md/dm-io.c 208 */;
	struct page_list *cocci_id/* drivers/md/dm-io.c 197 */;
	struct dpages {
		void (*get_page)(struct dpages *dp, struct page **p,
				 unsigned long *len, unsigned *offset);
		void (*next_page)(struct dpages *dp);
		union {
			unsigned context_u;
			struct bvec_iter context_bi;
		};
		void *context_ptr;
		void *vma_invalidate_address;
		unsigned long vma_invalidate_size;
	} cocci_id/* drivers/md/dm-io.c 161 */;
	blk_status_t cocci_id/* drivers/md/dm-io.c 128 */;
	unsigned long cocci_id/* drivers/md/dm-io.c 116 */;
	struct io **cocci_id/* drivers/md/dm-io.c 101 */;
}
