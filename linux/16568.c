cocci_test_suite() {
	struct sclp_sd_file *cocci_id/* drivers/s390/char/sclp_sd.c 96 */;
	struct kset *cocci_id/* drivers/s390/char/sclp_sd.c 95 */;
	struct sclp_sd_file cocci_id/* drivers/s390/char/sclp_sd.c 93 */;
	struct sclp_sd_file {
		struct kobject kobj;
		struct bin_attribute data_attr;
		struct mutex data_mutex;
		struct sclp_sd_data data;
		u8 di;
	} cocci_id/* drivers/s390/char/sclp_sd.c 86 */;
	struct sclp_sd_listener {
		struct list_head list;
		u32 id;
		struct completion completion;
		struct sclp_sd_evbuf evbuf;
	} cocci_id/* drivers/s390/char/sclp_sd.c 71 */;
	struct sclp_sd_data {
		size_t esize_bytes;
		size_t dsize_bytes;
		void *data;
	} cocci_id/* drivers/s390/char/sclp_sd.c 58 */;
	int cocci_id/* drivers/s390/char/sclp_sd.c 498 */;
	u8 cocci_id/* drivers/s390/char/sclp_sd.c 495 */;
	struct sclp_sd_sccb {
		struct sccb_header hdr;
		struct sclp_sd_evbuf evbuf;
	}__packed __aligned(PAGE_SIZE) cocci_id/* drivers/s390/char/sclp_sd.c 47 */;
	loff_t cocci_id/* drivers/s390/char/sclp_sd.c 456 */;
	size_t cocci_id/* drivers/s390/char/sclp_sd.c 456 */;
	struct bin_attribute *cocci_id/* drivers/s390/char/sclp_sd.c 455 */;
	char *cocci_id/* drivers/s390/char/sclp_sd.c 455 */;
	struct kobject *cocci_id/* drivers/s390/char/sclp_sd.c 454 */;
	struct file *cocci_id/* drivers/s390/char/sclp_sd.c 454 */;
	ssize_t cocci_id/* drivers/s390/char/sclp_sd.c 454 */;
	struct kobj_type cocci_id/* drivers/s390/char/sclp_sd.c 437 */;
	struct attribute *cocci_id/* drivers/s390/char/sclp_sd.c 432 */[];
	struct kobj_attribute cocci_id/* drivers/s390/char/sclp_sd.c 430 */;
	const char *cocci_id/* drivers/s390/char/sclp_sd.c 421 */;
	struct kobj_attribute *cocci_id/* drivers/s390/char/sclp_sd.c 420 */;
	async_cookie_t cocci_id/* drivers/s390/char/sclp_sd.c 407 */;
	void *cocci_id/* drivers/s390/char/sclp_sd.c 407 */;
	struct sclp_sd_data cocci_id/* drivers/s390/char/sclp_sd.c 379 */;
	struct sclp_sd_data *cocci_id/* drivers/s390/char/sclp_sd.c 346 */;
	void cocci_id/* drivers/s390/char/sclp_sd.c 346 */;
	u64 cocci_id/* drivers/s390/char/sclp_sd.c 318 */;
	struct sclp_sd_evbuf {
		struct evbuf_header hdr;
		u8 eq;
		u8 di;
		u8 rflags;
		u64:56;
		u32 id;
		u16:16;
		u8 fmt;
		u8 status;
		u64 sat;
		u64 sa;
		u32 esize;
		u32 dsize;
	}__packed cocci_id/* drivers/s390/char/sclp_sd.c 31 */;
	unsigned long cocci_id/* drivers/s390/char/sclp_sd.c 287 */;
	addr_t cocci_id/* drivers/s390/char/sclp_sd.c 196 */;
	struct sclp_sd_listener cocci_id/* drivers/s390/char/sclp_sd.c 192 */;
	struct sclp_sd_sccb *cocci_id/* drivers/s390/char/sclp_sd.c 191 */;
	u32 *cocci_id/* drivers/s390/char/sclp_sd.c 189 */;
	struct sclp_register cocci_id/* drivers/s390/char/sclp_sd.c 167 */;
	struct sclp_sd_evbuf *cocci_id/* drivers/s390/char/sclp_sd.c 146 */;
	struct evbuf_header *cocci_id/* drivers/s390/char/sclp_sd.c 144 */;
	u32 cocci_id/* drivers/s390/char/sclp_sd.c 131 */;
	struct sclp_sd_listener *cocci_id/* drivers/s390/char/sclp_sd.c 105 */;
}
