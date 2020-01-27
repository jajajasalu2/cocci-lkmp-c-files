cocci_test_suite() {
	struct cpi_evbuf cocci_id/* drivers/s390/char/sclp_cpi_sys.c 96 */;
	struct cpi_sccb cocci_id/* drivers/s390/char/sclp_cpi_sys.c 95 */;
	struct sclp_req cocci_id/* drivers/s390/char/sclp_cpi_sys.c 85 */;
	struct cpi_evbuf *cocci_id/* drivers/s390/char/sclp_cpi_sys.c 83 */;
	struct cpi_sccb *cocci_id/* drivers/s390/char/sclp_cpi_sys.c 82 */;
	struct completion *cocci_id/* drivers/s390/char/sclp_cpi_sys.c 74 */;
	struct sclp_req *cocci_id/* drivers/s390/char/sclp_cpi_sys.c 72 */;
	void *cocci_id/* drivers/s390/char/sclp_cpi_sys.c 72 */;
	void cocci_id/* drivers/s390/char/sclp_cpi_sys.c 72 */;
	char *cocci_id/* drivers/s390/char/sclp_cpi_sys.c 65 */;
	u64 cocci_id/* drivers/s390/char/sclp_cpi_sys.c 63 */;
	char cocci_id/* drivers/s390/char/sclp_cpi_sys.c 61 */[CPI_LENGTH_NAME + 1];
	struct sclp_register cocci_id/* drivers/s390/char/sclp_cpi_sys.c 56 */;
	struct cpi_sccb {
		struct sccb_header header;
		struct cpi_evbuf cpi_evbuf;
	}__attribute__((packed)) cocci_id/* drivers/s390/char/sclp_cpi_sys.c 51 */;
	int __init cocci_id/* drivers/s390/char/sclp_cpi_sys.c 413 */;
	const u64 cocci_id/* drivers/s390/char/sclp_cpi_sys.c 386 */;
	struct kset *cocci_id/* drivers/s390/char/sclp_cpi_sys.c 383 */;
	struct attribute_group cocci_id/* drivers/s390/char/sclp_cpi_sys.c 379 */;
	struct attribute *cocci_id/* drivers/s390/char/sclp_cpi_sys.c 370 */[];
	struct cpi_evbuf {
		struct evbuf_header header;
		u8 id_format;
		u8 reserved0;
		u8 system_type[CPI_LENGTH_NAME];
		u64 reserved1;
		u8 system_name[CPI_LENGTH_NAME];
		u64 reserved2;
		u64 system_level;
		u64 reserved3;
		u8 sysplex_name[CPI_LENGTH_NAME];
		u8 reserved4[16];
	}__attribute__((packed)) cocci_id/* drivers/s390/char/sclp_cpi_sys.c 37 */;
	struct kobj_attribute cocci_id/* drivers/s390/char/sclp_cpi_sys.c 368 */;
	struct kobj_attribute *cocci_id/* drivers/s390/char/sclp_cpi_sys.c 354 */;
	struct kobject *cocci_id/* drivers/s390/char/sclp_cpi_sys.c 353 */;
	ssize_t cocci_id/* drivers/s390/char/sclp_cpi_sys.c 353 */;
	unsigned long long cocci_id/* drivers/s390/char/sclp_cpi_sys.c 319 */;
	size_t cocci_id/* drivers/s390/char/sclp_cpi_sys.c 181 */;
	const char *cocci_id/* drivers/s390/char/sclp_cpi_sys.c 179 */;
	int cocci_id/* drivers/s390/char/sclp_cpi_sys.c 179 */;
	struct completion cocci_id/* drivers/s390/char/sclp_cpi_sys.c 128 */;
	unsigned long cocci_id/* drivers/s390/char/sclp_cpi_sys.c 122 */;
}
