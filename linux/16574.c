cocci_test_suite() {
	loff_t cocci_id/* drivers/s390/char/hmcdrv_cache.c 64 */;
	struct hmcdrv_cache_entry cocci_id/* drivers/s390/char/hmcdrv_cache.c 48 */;
	int cocci_id/* drivers/s390/char/hmcdrv_cache.c 46 */;
	struct hmcdrv_cache_entry {
		enum hmcdrv_ftp_cmdid id;
		char fname[HMCDRV_FTP_FIDENT_MAX];
		size_t fsize;
		loff_t ofs;
		unsigned long timeout;
		void *content;
		size_t len;
	} cocci_id/* drivers/s390/char/hmcdrv_cache.c 36 */;
	unsigned long cocci_id/* drivers/s390/char/hmcdrv_cache.c 244 */;
	void cocci_id/* drivers/s390/char/hmcdrv_cache.c 241 */;
	void *cocci_id/* drivers/s390/char/hmcdrv_cache.c 221 */;
	size_t cocci_id/* drivers/s390/char/hmcdrv_cache.c 216 */;
	hmcdrv_cache_ftpfunc cocci_id/* drivers/s390/char/hmcdrv_cache.c 178 */;
	const struct hmcdrv_ftp_cmdspec *cocci_id/* drivers/s390/char/hmcdrv_cache.c 177 */;
	ssize_t cocci_id/* drivers/s390/char/hmcdrv_cache.c 177 */;
	struct hmcdrv_ftp_cmdspec cocci_id/* drivers/s390/char/hmcdrv_cache.c 130 */;
}
