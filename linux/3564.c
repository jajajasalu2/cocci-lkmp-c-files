cocci_test_suite() {
	u8 cocci_id/* drivers/mmc/core/mmc_test.c 991 */;
	struct mmc_test_transfer_result {
		struct list_head link;
		unsigned int count;
		unsigned int sectors;
		struct timespec64 ts;
		unsigned int rate;
		unsigned int iops;
	} cocci_id/* drivers/mmc/core/mmc_test.c 96 */;
	struct mmc_data cocci_id/* drivers/mmc/core/mmc_test.c 915 */;
	struct mmc_command cocci_id/* drivers/mmc/core/mmc_test.c 913 */;
	struct mmc_request cocci_id/* drivers/mmc/core/mmc_test.c 912 */;
	unsigned cocci_id/* drivers/mmc/core/mmc_test.c 910 */;
	struct mmc_test_req cocci_id/* drivers/mmc/core/mmc_test.c 859 */;
	struct mmc_test_req *cocci_id/* drivers/mmc/core/mmc_test.c 843 */;
	struct mmc_test_req {
		struct mmc_request mrq;
		struct mmc_command sbc;
		struct mmc_command cmd;
		struct mmc_command stop;
		struct mmc_command status;
		struct mmc_data data;
	} cocci_id/* drivers/mmc/core/mmc_test.c 767 */;
	struct mmc_test_area {
		unsigned long max_sz;
		unsigned int dev_addr;
		unsigned int max_tfr;
		unsigned int max_segs;
		unsigned int max_seg_sz;
		unsigned int blocks;
		unsigned int sg_len;
		struct mmc_test_mem *mem;
		struct scatterlist *sg;
	} cocci_id/* drivers/mmc/core/mmc_test.c 75 */;
	struct mmc_request *cocci_id/* drivers/mmc/core/mmc_test.c 736 */;
	u64 cocci_id/* drivers/mmc/core/mmc_test.c 599 */;
	struct timespec64 *cocci_id/* drivers/mmc/core/mmc_test.c 582 */;
	uint64_t cocci_id/* drivers/mmc/core/mmc_test.c 581 */;
	struct mmc_test_mem {
		struct mmc_test_pages *arr;
		unsigned int cnt;
	} cocci_id/* drivers/mmc/core/mmc_test.c 58 */;
	uint32_t cocci_id/* drivers/mmc/core/mmc_test.c 524 */;
	struct mmc_test_pages {
		struct page *page;
		unsigned int order;
	} cocci_id/* drivers/mmc/core/mmc_test.c 48 */;
	void *cocci_id/* drivers/mmc/core/mmc_test.c 468 */;
	unsigned int *cocci_id/* drivers/mmc/core/mmc_test.c 410 */;
	struct scatterlist *cocci_id/* drivers/mmc/core/mmc_test.c 408 */;
	gfp_t cocci_id/* drivers/mmc/core/mmc_test.c 367 */;
	struct page *cocci_id/* drivers/mmc/core/mmc_test.c 365 */;
	struct mmc_test_mem *cocci_id/* drivers/mmc/core/mmc_test.c 333 */;
	void __exit cocci_id/* drivers/mmc/core/mmc_test.c 3260 */;
	void cocci_id/* drivers/mmc/core/mmc_test.c 3260 */;
	int __init cocci_id/* drivers/mmc/core/mmc_test.c 3255 */;
	struct mmc_driver cocci_id/* drivers/mmc/core/mmc_test.c 3246 */;
	struct mmc_test_dbgfs_file *cocci_id/* drivers/mmc/core/mmc_test.c 3167 */;
	struct dentry *cocci_id/* drivers/mmc/core/mmc_test.c 3166 */;
	umode_t cocci_id/* drivers/mmc/core/mmc_test.c 3164 */;
	const struct file_operations *cocci_id/* drivers/mmc/core/mmc_test.c 3164 */;
	const char *cocci_id/* drivers/mmc/core/mmc_test.c 3164 */;
	struct mmc_card *cocci_id/* drivers/mmc/core/mmc_test.c 3163 */;
	const struct file_operations cocci_id/* drivers/mmc/core/mmc_test.c 3121 */;
	long cocci_id/* drivers/mmc/core/mmc_test.c 3078 */;
	loff_t *cocci_id/* drivers/mmc/core/mmc_test.c 3073 */;
	size_t cocci_id/* drivers/mmc/core/mmc_test.c 3073 */;
	const char __user *cocci_id/* drivers/mmc/core/mmc_test.c 3072 */;
	ssize_t cocci_id/* drivers/mmc/core/mmc_test.c 3072 */;
	struct inode *cocci_id/* drivers/mmc/core/mmc_test.c 3067 */;
	struct file *cocci_id/* drivers/mmc/core/mmc_test.c 3067 */;
	struct seq_file *cocci_id/* drivers/mmc/core/mmc_test.c 3039 */;
	struct mmc_test_transfer_result *cocci_id/* drivers/mmc/core/mmc_test.c 3020 */;
	struct mmc_test_general_result *cocci_id/* drivers/mmc/core/mmc_test.c 3015 */;
	u8 *cocci_id/* drivers/mmc/core/mmc_test.c 289 */;
	const struct mmc_test_case cocci_id/* drivers/mmc/core/mmc_test.c 2548 */[];
	struct mmc_command *cocci_id/* drivers/mmc/core/mmc_test.c 248 */;
	struct mmc_test_area *cocci_id/* drivers/mmc/core/mmc_test.c 2465 */;
	unsigned long cocci_id/* drivers/mmc/core/mmc_test.c 2462 */;
	struct mmc_test_card *cocci_id/* drivers/mmc/core/mmc_test.c 2461 */;
	int cocci_id/* drivers/mmc/core/mmc_test.c 2461 */;
	u32 cocci_id/* drivers/mmc/core/mmc_test.c 2358 */;
	struct mmc_host *cocci_id/* drivers/mmc/core/mmc_test.c 2352 */;
	struct mmc_test_multiple_rw cocci_id/* drivers/mmc/core/mmc_test.c 2202 */;
	unsigned int cocci_id/* drivers/mmc/core/mmc_test.c 2200 */[];
	struct mmc_test_multiple_rw *cocci_id/* drivers/mmc/core/mmc_test.c 2071 */;
	struct mmc_test_multiple_rw {
		unsigned int *sg_len;
		unsigned int *bs;
		unsigned int len;
		unsigned int size;
		bool do_write;
		bool do_nonblock_req;
		enum mmc_test_prep_media prepare;
	} cocci_id/* drivers/mmc/core/mmc_test.c 160 */;
	enum mmc_test_prep_media{MMC_TEST_PREP_NONE=0, MMC_TEST_PREP_WRITE_FULL=1 << 0, MMC_TEST_PREP_ERASE=1 << 1,} cocci_id/* drivers/mmc/core/mmc_test.c 154 */;
	struct timespec64 cocci_id/* drivers/mmc/core/mmc_test.c 1440 */;
	bool cocci_id/* drivers/mmc/core/mmc_test.c 1438 */;
	struct mmc_test_card {
		struct mmc_card *card;
		u8 scratch[BUFFER_SIZE];
		u8 *buffer;
#ifdef CONFIG_HIGHMEM
		struct page *highmem;
#endif
		struct mmc_test_area area;
		struct mmc_test_general_result *gr;
	} cocci_id/* drivers/mmc/core/mmc_test.c 142 */;
	struct mmc_test_dbgfs_file {
		struct list_head link;
		struct mmc_card *card;
		struct dentry *file;
	} cocci_id/* drivers/mmc/core/mmc_test.c 127 */;
	struct scatterlist cocci_id/* drivers/mmc/core/mmc_test.c 1245 */;
	unsigned int cocci_id/* drivers/mmc/core/mmc_test.c 1244 */;
	struct mmc_test_general_result {
		struct list_head link;
		struct mmc_card *card;
		int testcase;
		int result;
		struct list_head tr_lst;
	} cocci_id/* drivers/mmc/core/mmc_test.c 113 */;
	struct mmc_test_case {
		const char *name;
		int (*prepare)(struct mmc_test_card *);
		int (*run)(struct mmc_test_card *);
		int (*cleanup)(struct mmc_test_card *);
	} cocci_id/* drivers/mmc/core/mmc_test.c 1016 */;
}
