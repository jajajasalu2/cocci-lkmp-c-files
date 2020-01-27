cocci_test_suite() {
	struct commit_callback {
		void (*callback)(void *, int success);
		void *context;
	} cocci_id/* drivers/md/dm-snap-persistent.c 94 */;
	struct dm_exception_store_type cocci_id/* drivers/md/dm-snap-persistent.c 938 */;
	unsigned long long cocci_id/* drivers/md/dm-snap-persistent.c 917 */;
	status_type_t cocci_id/* drivers/md/dm-snap-persistent.c 907 */;
	unsigned cocci_id/* drivers/md/dm-snap-persistent.c 906 */;
	struct core_exception {
		uint64_t old_chunk;
		uint64_t new_chunk;
	} cocci_id/* drivers/md/dm-snap-persistent.c 89 */;
	char cocci_id/* drivers/md/dm-snap-persistent.c 884 */;
	char *cocci_id/* drivers/md/dm-snap-persistent.c 853 */;
	struct disk_exception {
		__le64 old_chunk;
		__le64 new_chunk;
	}__packed cocci_id/* drivers/md/dm-snap-persistent.c 84 */;
	chunk_t *cocci_id/* drivers/md/dm-snap-persistent.c 766 */;
	struct commit_callback *cocci_id/* drivers/md/dm-snap-persistent.c 707 */;
	void (*cocci_id/* drivers/md/dm-snap-persistent.c 701 */)(void *,
								  int success);
	struct dm_exception *cocci_id/* drivers/md/dm-snap-persistent.c 700 */;
	sector_t cocci_id/* drivers/md/dm-snap-persistent.c 680 */;
	struct disk_header {
		__le32 magic;
		__le32 valid;
		__le32 version;
		__le32 chunk_size;
	}__packed cocci_id/* drivers/md/dm-snap-persistent.c 65 */;
	struct disk_exception cocci_id/* drivers/md/dm-snap-persistent.c 630 */;
	sector_t *cocci_id/* drivers/md/dm-snap-persistent.c 576 */;
	struct dm_exception_store *cocci_id/* drivers/md/dm-snap-persistent.c 570 */;
	struct dm_buffer *cocci_id/* drivers/md/dm-snap-persistent.c 519 */;
	struct dm_bufio_client *cocci_id/* drivers/md/dm-snap-persistent.c 499 */;
	struct core_exception cocci_id/* drivers/md/dm-snap-persistent.c 456 */;
	unsigned int cocci_id/* drivers/md/dm-snap-persistent.c 455 */;
	int *cocci_id/* drivers/md/dm-snap-persistent.c 452 */;
	int (*cocci_id/* drivers/md/dm-snap-persistent.c 449 */)(void *callback_context,
								 chunk_t old,
								 chunk_t new);
	struct disk_exception *cocci_id/* drivers/md/dm-snap-persistent.c 436 */;
	uint32_t cocci_id/* drivers/md/dm-snap-persistent.c 434 */;
	void cocci_id/* drivers/md/dm-snap-persistent.c 434 */;
	struct core_exception *cocci_id/* drivers/md/dm-snap-persistent.c 415 */;
	struct disk_header *cocci_id/* drivers/md/dm-snap-persistent.c 313 */;
	chunk_t cocci_id/* drivers/md/dm-snap-persistent.c 288 */;
	struct mdata_req cocci_id/* drivers/md/dm-snap-persistent.c 245 */;
	struct dm_io_request cocci_id/* drivers/md/dm-snap-persistent.c 237 */;
	struct dm_io_region cocci_id/* drivers/md/dm-snap-persistent.c 232 */;
	void *cocci_id/* drivers/md/dm-snap-persistent.c 229 */;
	struct mdata_req *cocci_id/* drivers/md/dm-snap-persistent.c 221 */;
	struct work_struct *cocci_id/* drivers/md/dm-snap-persistent.c 219 */;
	struct mdata_req {
		struct dm_io_region *where;
		struct dm_io_request *io_req;
		struct work_struct work;
		int result;
	} cocci_id/* drivers/md/dm-snap-persistent.c 212 */;
	size_t cocci_id/* drivers/md/dm-snap-persistent.c 170 */;
	struct pstore *cocci_id/* drivers/md/dm-snap-persistent.c 167 */;
	int cocci_id/* drivers/md/dm-snap-persistent.c 167 */;
	struct pstore {
		struct dm_exception_store *store;
		int version;
		int valid;
		uint32_t exceptions_per_area;
		void *area;
		void *zero_area;
		void *header_area;
		chunk_t current_area;
		chunk_t next_free;
		uint32_t current_committed;
		atomic_t pending_count;
		uint32_t callback_count;
		struct commit_callback *callbacks;
		struct dm_io_client *io_client;
		struct workqueue_struct *metadata_wq;
	} cocci_id/* drivers/md/dm-snap-persistent.c 102 */;
}
