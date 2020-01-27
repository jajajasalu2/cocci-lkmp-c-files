cocci_test_suite() {
	long cocci_id/* fs/orangefs/orangefs-bufmap.c 83 */;
	void *cocci_id/* fs/orangefs/orangefs-bufmap.c 542 */;
	struct orangefs_bufmap_desc *cocci_id/* fs/orangefs/orangefs-bufmap.c 492 */;
	size_t cocci_id/* fs/orangefs/orangefs-bufmap.c 490 */;
	struct iov_iter *cocci_id/* fs/orangefs/orangefs-bufmap.c 488 */;
	unsigned long cocci_id/* fs/orangefs/orangefs-bufmap.c 337 */;
	unsigned long *cocci_id/* fs/orangefs/orangefs-bufmap.c 28 */;
	void cocci_id/* fs/orangefs/orangefs-bufmap.c 28 */;
	struct page *cocci_id/* fs/orangefs/orangefs-bufmap.c 247 */;
	struct orangefs_bufmap_desc cocci_id/* fs/orangefs/orangefs-bufmap.c 238 */;
	struct slot_map cocci_id/* fs/orangefs/orangefs-bufmap.c 22 */;
	struct ORANGEFS_dev_map_desc *cocci_id/* fs/orangefs/orangefs-bufmap.c 219 */;
	struct orangefs_bufmap *cocci_id/* fs/orangefs/orangefs-bufmap.c 218 */;
	struct orangefs_bufmap {
		int desc_size;
		int desc_shift;
		int desc_count;
		int total_size;
		int page_count;
		struct page **page_array;
		struct orangefs_bufmap_desc *desc_array;
		unsigned long *buffer_index_array;
#define N DIV_ROUND_UP(ORANGEFS_READDIR_DEFAULT_DESC_COUNT, BITS_PER_LONG)
			unsigned long readdir_index_array[N];
#undef N 
	} *cocci_id/* fs/orangefs/orangefs-bufmap.c 147 */;
	struct orangefs_bufmap_desc {
		void __user *uaddr;
		struct page **page_array;
		int array_count;
		struct list_head list_link;
	} cocci_id/* fs/orangefs/orangefs-bufmap.c 140 */;
	struct slot_map *cocci_id/* fs/orangefs/orangefs-bufmap.c 124 */;
	int cocci_id/* fs/orangefs/orangefs-bufmap.c 124 */;
	struct slot_map {
		int c;
		wait_queue_head_t q;
		int count;
		unsigned long *map;
	} cocci_id/* fs/orangefs/orangefs-bufmap.c 11 */;
}
