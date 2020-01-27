cocci_test_suite() {
	unsigned int cocci_id/* drivers/s390/char/diag_ftp.c 76 */;
	struct ext_code cocci_id/* drivers/s390/char/diag_ftp.c 75 */;
	void cocci_id/* drivers/s390/char/diag_ftp.c 75 */;
	struct diag_ftp_ldfpl {
		u64 bufaddr;
		u64 buflen;
		u64 offset;
		u64 intparm;
		u64 transferred;
		u64 fsize;
		u64 failaddr;
		u64 spare;
		u8 fident[HMCDRV_FTP_FIDENT_MAX];
	}__packed cocci_id/* drivers/s390/char/diag_ftp.c 54 */;
	void *cocci_id/* drivers/s390/char/diag_ftp.c 155 */;
	unsigned long cocci_id/* drivers/s390/char/diag_ftp.c 147 */;
	const struct hmcdrv_ftp_cmdspec *cocci_id/* drivers/s390/char/diag_ftp.c 142 */;
	size_t *cocci_id/* drivers/s390/char/diag_ftp.c 142 */;
	ssize_t cocci_id/* drivers/s390/char/diag_ftp.c 142 */;
	enum hmcdrv_ftp_cmdid cocci_id/* drivers/s390/char/diag_ftp.c 103 */;
	struct diag_ftp_ldfpl *cocci_id/* drivers/s390/char/diag_ftp.c 102 */;
	int cocci_id/* drivers/s390/char/diag_ftp.c 102 */;
}
