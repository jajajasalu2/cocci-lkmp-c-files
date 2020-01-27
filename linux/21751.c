cocci_test_suite() {
	struct prng_data_s {
		struct mutex mutex;
		union {
			struct prng_ws_s prngws;
			struct prno_ws_s prnows;
		};
		u8 *buf;
		u32 rest;
		u8 *prev;
	} cocci_id/* arch/s390/crypto/prng.c 94 */;
	void __exit cocci_id/* arch/s390/crypto/prng.c 916 */;
	void cocci_id/* arch/s390/crypto/prng.c 916 */;
	struct prno_ws_s {
		u32 res;
		u32 reseed_counter;
		u64 stream_bytes;
		u8 V[112];
		u8 C[112];
	} cocci_id/* arch/s390/crypto/prng.c 86 */;
	int __init cocci_id/* arch/s390/crypto/prng.c 821 */;
	struct attribute_group cocci_id/* arch/s390/crypto/prng.c 811 */;
	struct prng_ws_s {
		u8 parm_block[32];
		u32 reseed_counter;
		u64 byte_counter;
	} cocci_id/* arch/s390/crypto/prng.c 80 */;
	struct attribute *cocci_id/* arch/s390/crypto/prng.c 794 */[];
	unsigned cocci_id/* arch/s390/crypto/prng.c 765 */;
	const char *cocci_id/* arch/s390/crypto/prng.c 763 */;
	u64 cocci_id/* arch/s390/crypto/prng.c 705 */;
	char *cocci_id/* arch/s390/crypto/prng.c 694 */;
	struct device_attribute *cocci_id/* arch/s390/crypto/prng.c 693 */;
	struct device *cocci_id/* arch/s390/crypto/prng.c 692 */;
	ssize_t cocci_id/* arch/s390/crypto/prng.c 692 */;
	struct miscdevice cocci_id/* arch/s390/crypto/prng.c 677 */;
	const struct file_operations cocci_id/* arch/s390/crypto/prng.c 662 */;
	bool cocci_id/* arch/s390/crypto/prng.c 64 */;
	loff_t *cocci_id/* arch/s390/crypto/prng.c 591 */;
	char __user *cocci_id/* arch/s390/crypto/prng.c 590 */;
	unsigned long long *cocci_id/* arch/s390/crypto/prng.c 552 */;
	struct inode *cocci_id/* arch/s390/crypto/prng.c 506 */;
	struct file *cocci_id/* arch/s390/crypto/prng.c 506 */;
	unsigned int cocci_id/* arch/s390/crypto/prng.c 50 */;
	u8 cocci_id/* arch/s390/crypto/prng.c 452 */[64];
	struct prng_data_s cocci_id/* arch/s390/crypto/prng.c 378 */;
	u8 cocci_id/* arch/s390/crypto/prng.c 371 */[128 + 16];
	struct prno_ws_s cocci_id/* arch/s390/crypto/prng.c 333 */;
	u8 cocci_id/* arch/s390/crypto/prng.c 332 */[sizeof(random)];
	const u8 cocci_id/* arch/s390/crypto/prng.c 261 */[]__initconst;
	__u64 *cocci_id/* arch/s390/crypto/prng.c 212 */;
	char cocci_id/* arch/s390/crypto/prng.c 203 */[16];
	__u64 cocci_id/* arch/s390/crypto/prng.c 189 */[4];
	unsigned long cocci_id/* arch/s390/crypto/prng.c 180 */;
	u64 *cocci_id/* arch/s390/crypto/prng.c 166 */;
	u8 *cocci_id/* arch/s390/crypto/prng.c 135 */;
	int cocci_id/* arch/s390/crypto/prng.c 135 */;
	size_t cocci_id/* arch/s390/crypto/prng.c 135 */;
	const u8 cocci_id/* arch/s390/crypto/prng.c 108 */[32]__initconst;
	struct prng_data_s *cocci_id/* arch/s390/crypto/prng.c 105 */;
}
