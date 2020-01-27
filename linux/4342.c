cocci_test_suite() {
	unsigned char *cocci_id/* drivers/char/random.c 940 */;
	struct crng_state cocci_id/* drivers/char/random.c 901 */;
	struct work_struct *cocci_id/* drivers/char/random.c 893 */;
	int __init cocci_id/* drivers/char/random.c 857 */;
	void cocci_id/* drivers/char/random.c 853 */(void);
	struct crng_state **cocci_id/* drivers/char/random.c 850 */;
	const int cocci_id/* drivers/char/random.c 715 */;
	struct fast_pool {
		__u32 pool[4];
		unsigned long last;
		unsigned short reg_idx;
		unsigned char count;
	} cocci_id/* drivers/char/random.c 653 */;
	int cocci_id/* drivers/char/random.c 636 */;
	const void *cocci_id/* drivers/char/random.c 635 */;
	struct entropy_store *cocci_id/* drivers/char/random.c 635 */;
	void cocci_id/* drivers/char/random.c 635 */;
	const char *cocci_id/* drivers/char/random.c 594 */;
	const __u32 cocci_id/* drivers/char/random.c 574 */[8];
	struct entropy_store cocci_id/* drivers/char/random.c 564 */;
	__u32 cocci_id/* drivers/char/random.c 554 */[INPUT_POOL_WORDS];
	void cocci_id/* drivers/char/random.c 553 */(struct work_struct *work);
	void cocci_id/* drivers/char/random.c 552 */(struct crng_state *crng,
						     struct entropy_store *r);
	ssize_t cocci_id/* drivers/char/random.c 549 */(struct entropy_store *r,
							void *buf,
							size_t nbytes,
							int fips);
	ssize_t cocci_id/* drivers/char/random.c 547 */(struct entropy_store *r,
							void *buf,
							size_t nbytes,
							int min, int rsvd);
	struct entropy_store {
		const struct poolinfo *poolinfo;
		__u32 *pool;
		const char *name;
		struct entropy_store *pull;
		struct work_struct push_work;
		unsigned long last_pulled;
		spinlock_t lock;
		unsigned short add_ptr;
		unsigned short input_rotate;
		int entropy_count;
		unsigned int initialized:1;
		unsigned int last_data_init:1;
		__u8 last_data[EXTRACT_SIZE];
	} cocci_id/* drivers/char/random.c 528 */;
	struct ratelimit_state cocci_id/* drivers/char/random.c 510 */;
	void cocci_id/* drivers/char/random.c 508 */(void *buf, int nbytes);
	void cocci_id/* drivers/char/random.c 505 */(struct crng_state *crng,
						     __u8 tmp[CHACHA_BLOCK_SIZE],
						     int used);
	void cocci_id/* drivers/char/random.c 504 */(struct crng_state *crng,
						     __u8 out[CHACHA_BLOCK_SIZE]);
	struct crng_state {
		__u32 state[16];
		unsigned long init_time;
		spinlock_t lock;
	} cocci_id/* drivers/char/random.c 481 */;
	struct fasync_struct *cocci_id/* drivers/char/random.c 476 */;
	const struct poolinfo {
		int poolbitshift,poolwords,poolbytes,poolfracbits;
#define S (x)ilog2(x) + 5, (x), (x) * 4, (x) << (ENTROPY_SHIFT + 5)
				int tap1,tap2,tap3,tap4,tap5;
	} cocci_id/* drivers/char/random.c 431 */[];
	unsigned int cocci_id/* drivers/char/random.c 2516 */;
	u8 *cocci_id/* drivers/char/random.c 2420 */;
	struct batched_entropy *cocci_id/* drivers/char/random.c 2409 */;
	u32 cocci_id/* drivers/char/random.c 2405 */;
	unsigned long *cocci_id/* drivers/char/random.c 2380 */;
	u64 cocci_id/* drivers/char/random.c 2372 */;
	struct batched_entropy {
		union {
			u64 entropy_u64[CHACHA_BLOCK_SIZE / sizeof(u64)];
			u32 entropy_u32[CHACHA_BLOCK_SIZE / sizeof(u32)];
		};
		unsigned int position;
		spinlock_t batch_lock;
	} cocci_id/* drivers/char/random.c 2351 */;
	struct ctl_table cocci_id/* drivers/char/random.c 2277 */[];
	int *cocci_id/* drivers/char/random.c 2268 */;
	struct ctl_table cocci_id/* drivers/char/random.c 2265 */;
	loff_t *cocci_id/* drivers/char/random.c 2263 */;
	size_t *cocci_id/* drivers/char/random.c 2263 */;
	struct ctl_table *cocci_id/* drivers/char/random.c 2262 */;
	unsigned char cocci_id/* drivers/char/random.c 2236 */[64];
	char cocci_id/* drivers/char/random.c 2221 */[16];
	const struct file_operations cocci_id/* drivers/char/random.c 2164 */;
	struct file *cocci_id/* drivers/char/random.c 2159 */;
	const char __user *cocci_id/* drivers/char/random.c 2130 */;
	int __user *cocci_id/* drivers/char/random.c 2105 */;
	poll_table *cocci_id/* drivers/char/random.c 2046 */;
	__poll_t cocci_id/* drivers/char/random.c 2045 */;
	char __user *cocci_id/* drivers/char/random.c 1986 */;
	ktime_t cocci_id/* drivers/char/random.c 1931 */;
	void __init cocci_id/* drivers/char/random.c 1928 */;
	int __must_check cocci_id/* drivers/char/random.c 1897 */;
	struct module *cocci_id/* drivers/char/random.c 1837 */;
	struct random_ready_callback *cocci_id/* drivers/char/random.c 1835 */;
	struct {
		unsigned long now;
		struct timer_list timer;
	} cocci_id/* drivers/char/random.c 1759 */;
	struct timer_list *cocci_id/* drivers/char/random.c 1748 */;
	__u8 cocci_id/* drivers/char/random.c 1706 */[CHACHA_BLOCK_SIZE]__aligned(4);
	bool cocci_id/* drivers/char/random.c 1678 */;
	const bool cocci_id/* drivers/char/random.c 1676 */;
	void **cocci_id/* drivers/char/random.c 1673 */;
	__u8 cocci_id/* drivers/char/random.c 1557 */[EXTRACT_SIZE];
	size_t cocci_id/* drivers/char/random.c 1554 */;
	void *cocci_id/* drivers/char/random.c 1553 */;
	ssize_t cocci_id/* drivers/char/random.c 1553 */;
	__u32 cocci_id/* drivers/char/random.c 1506 */[SHA_WORKSPACE_WORDS];
	union {
		__u32 w[5];
		unsigned long l[LONGS(20)];
	} cocci_id/* drivers/char/random.c 1502 */;
	__u8 *cocci_id/* drivers/char/random.c 1499 */;
	__u32 cocci_id/* drivers/char/random.c 1410 */[OUTPUT_POOL_WORDS];
	void cocci_id/* drivers/char/random.c 1397 */(struct entropy_store *r, size_t nbytes);
	struct gendisk *cocci_id/* drivers/char/random.c 1375 */;
	char *cocci_id/* drivers/char/random.c 1336 */;
	__u64 cocci_id/* drivers/char/random.c 1316 */;
	struct pt_regs *cocci_id/* drivers/char/random.c 1312 */;
	struct fast_pool *cocci_id/* drivers/char/random.c 1311 */;
	struct pt_regs cocci_id/* drivers/char/random.c 1301 */;
	long cocci_id/* drivers/char/random.c 1280 */;
	cycles_t cocci_id/* drivers/char/random.c 1278 */;
	unsigned char cocci_id/* drivers/char/random.c 1257 */;
	struct {
		long jiffies;
		unsigned cycles;
		unsigned num;
	} cocci_id/* drivers/char/random.c 1208 */;
	struct timer_rand_state *cocci_id/* drivers/char/random.c 1205 */;
	unsigned cocci_id/* drivers/char/random.c 1205 */;
	struct timer_rand_state cocci_id/* drivers/char/random.c 1193 */;
	struct timer_rand_state {
		cycles_t last_time;
		long last_delta,last_delta2;
	} cocci_id/* drivers/char/random.c 1162 */;
	void __user *cocci_id/* drivers/char/random.c 1119 */;
	__u32 cocci_id/* drivers/char/random.c 1093 */;
	__u32 *cocci_id/* drivers/char/random.c 1090 */;
	unsigned long cocci_id/* drivers/char/random.c 1089 */;
	__u8 cocci_id/* drivers/char/random.c 1087 */[CHACHA_BLOCK_SIZE];
	struct crng_state *cocci_id/* drivers/char/random.c 1086 */;
	union {
		__u8 block[CHACHA_BLOCK_SIZE];
		__u32 key[8];
	} cocci_id/* drivers/char/random.c 1004 */;
	__typeof__(struct fast_pool) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct batched_entropy) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
