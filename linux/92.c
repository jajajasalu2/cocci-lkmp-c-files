cocci_test_suite() {
	struct swap_map_page *cocci_id/* kernel/power/swap.c 988 */;
	struct swap_map_page_list *cocci_id/* kernel/power/swap.c 965 */;
	unsigned int *cocci_id/* kernel/power/swap.c 962 */;
	struct swap_map_handle {
		struct swap_map_page *cur;
		struct swap_map_page_list *maps;
		sector_t cur_swap;
		sector_t first_sector;
		unsigned int k;
		unsigned long reqd_free_pages;
		u32 crc32;
	} cocci_id/* kernel/power/swap.c 95 */;
	unsigned int cocci_id/* kernel/power/swap.c 880 */;
	struct swap_map_page_list {
		struct swap_map_page *map;
		struct swap_map_page_list *next;
	} cocci_id/* kernel/power/swap.c 85 */;
	struct swap_map_page {
		sector_t entries[MAP_PAGE_ENTRIES];
		sector_t next_swap;
	} cocci_id/* kernel/power/swap.c 80 */;
	struct cmp_data cocci_id/* kernel/power/swap.c 706 */;
	unsigned char *cocci_id/* kernel/power/swap.c 679 */;
	struct cmp_data *cocci_id/* kernel/power/swap.c 637 */;
	struct cmp_data {
		struct task_struct *thr;
		atomic_t ready;
		atomic_t stop;
		int ret;
		wait_queue_head_t go;
		wait_queue_head_t done;
		size_t unc_len;
		size_t cmp_len;
		unsigned char unc[LZO_UNC_SIZE];
		unsigned char cmp[LZO_CMP_SIZE];
		unsigned char wrk[LZO1X_1_MEM_COMPRESS];
	} cocci_id/* kernel/power/swap.c 618 */;
	unsigned cocci_id/* kernel/power/swap.c 594 */;
	struct crc_data *cocci_id/* kernel/power/swap.c 593 */;
	void *cocci_id/* kernel/power/swap.c 591 */;
	struct crc_data {
		struct task_struct *thr;
		atomic_t ready;
		atomic_t stop;
		unsigned run_threads;
		wait_queue_head_t go;
		wait_queue_head_t done;
		u32 *crc32;
		size_t *unc_len[LZO_THREADS];
		unsigned char *unc[LZO_THREADS];
	} cocci_id/* kernel/power/swap.c 576 */;
	struct swap_map_handle *cocci_id/* kernel/power/swap.c 480 */;
	bool cocci_id/* kernel/power/swap.c 45 */;
	blk_status_t cocci_id/* kernel/power/swap.c 295 */;
	pgoff_t cocci_id/* kernel/power/swap.c 263 */;
	unsigned long long cocci_id/* kernel/power/swap.c 246 */;
	struct page *cocci_id/* kernel/power/swap.c 241 */;
	struct hib_bio_batch *cocci_id/* kernel/power/swap.c 240 */;
	struct bio *cocci_id/* kernel/power/swap.c 238 */;
	struct hib_bio_batch {
		atomic_t count;
		wait_queue_head_t wait;
		blk_status_t error;
	} cocci_id/* kernel/power/swap.c 225 */;
	struct block_device *cocci_id/* kernel/power/swap.c 223 */;
	unsigned short cocci_id/* kernel/power/swap.c 222 */;
	struct swsusp_extent cocci_id/* kernel/power/swap.c 204 */;
	struct swsusp_extent *cocci_id/* kernel/power/swap.c 201 */;
	struct rb_node *cocci_id/* kernel/power/swap.c 198 */;
	void cocci_id/* kernel/power/swap.c 196 */;
	unsigned long cocci_id/* kernel/power/swap.c 178 */;
	sector_t cocci_id/* kernel/power/swap.c 176 */;
	int cocci_id/* kernel/power/swap.c 176 */;
	fmode_t cocci_id/* kernel/power/swap.c 1553 */;
	struct swsusp_info *cocci_id/* kernel/power/swap.c 1479 */;
	struct snapshot_handle cocci_id/* kernel/power/swap.c 1478 */;
	struct swap_map_handle cocci_id/* kernel/power/swap.c 1477 */;
	size_t *cocci_id/* kernel/power/swap.c 1336 */;
	struct rb_node **cocci_id/* kernel/power/swap.c 132 */;
	struct rb_root cocci_id/* kernel/power/swap.c 128 */;
	struct swsusp_extent {
		struct rb_node node;
		unsigned long start;
		unsigned long end;
	} cocci_id/* kernel/power/swap.c 122 */;
	struct crc_data cocci_id/* kernel/power/swap.c 1205 */;
	struct dec_data cocci_id/* kernel/power/swap.c 1197 */;
	struct dec_data *cocci_id/* kernel/power/swap.c 1171 */;
	unsigned char **cocci_id/* kernel/power/swap.c 1170 */;
	size_t cocci_id/* kernel/power/swap.c 1165 */;
	struct swsusp_header *cocci_id/* kernel/power/swap.c 115 */;
	struct dec_data {
		struct task_struct *thr;
		atomic_t ready;
		atomic_t stop;
		int ret;
		wait_queue_head_t go;
		wait_queue_head_t done;
		size_t unc_len;
		size_t cmp_len;
		unsigned char unc[LZO_UNC_SIZE];
		unsigned char cmp[LZO_CMP_SIZE];
	} cocci_id/* kernel/power/swap.c 1103 */;
	struct hib_bio_batch cocci_id/* kernel/power/swap.c 1057 */;
	ktime_t cocci_id/* kernel/power/swap.c 1055 */;
	struct snapshot_handle *cocci_id/* kernel/power/swap.c 1050 */;
	struct swsusp_header {
		char reserved[PAGE_SIZE - 20 - sizeof(sector_t) - sizeof(int) - sizeof(u32)];
		u32 crc32;
		sector_t image;
		unsigned int flags;
		char orig_sig[10];
		char sig[10];
	}__packed cocci_id/* kernel/power/swap.c 105 */;
}
