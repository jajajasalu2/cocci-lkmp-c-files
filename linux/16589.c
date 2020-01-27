cocci_test_suite() {
	u16 cocci_id/* drivers/s390/char/hmcdrv_ftp.c 86 */;
	const struct hmcdrv_ftp_cmd_desc *cocci_id/* drivers/s390/char/hmcdrv_ftp.c 84 */;
	const struct hmcdrv_ftp_cmd_desc cocci_id/* drivers/s390/char/hmcdrv_ftp.c 67 */[7];
	struct hmcdrv_ftp_cmd_desc {
		const char *str;
		enum hmcdrv_ftp_cmdid cmd;
	} cocci_id/* drivers/s390/char/hmcdrv_ftp.c 53 */;
	enum hmcdrv_ftp_cmdid cocci_id/* drivers/s390/char/hmcdrv_ftp.c 50 */;
	const char *cocci_id/* drivers/s390/char/hmcdrv_ftp.c 50 */;
	unsigned cocci_id/* drivers/s390/char/hmcdrv_ftp.c 43 */;
	const struct hmcdrv_ftp_ops *cocci_id/* drivers/s390/char/hmcdrv_ftp.c 41 */;
	int cocci_id/* drivers/s390/char/hmcdrv_ftp.c 39 */(char *cmd,
							    struct hmcdrv_ftp_cmdspec *ftp);
	enum hmcdrv_ftp_cmdid cocci_id/* drivers/s390/char/hmcdrv_ftp.c 38 */(const char *cmd,
									      int len);
	struct hmcdrv_ftp_ops {
		int (*startup)(void);
		void (*shutdown)(void);
		ssize_t (*transfer)(const struct hmcdrv_ftp_cmdspec *ftp,
				    size_t *fsize);
	} cocci_id/* drivers/s390/char/hmcdrv_ftp.c 31 */;
	const struct hmcdrv_ftp_ops cocci_id/* drivers/s390/char/hmcdrv_ftp.c 294 */;
	unsigned long cocci_id/* drivers/s390/char/hmcdrv_ftp.c 282 */;
	void *cocci_id/* drivers/s390/char/hmcdrv_ftp.c 249 */;
	struct hmcdrv_ftp_cmdspec cocci_id/* drivers/s390/char/hmcdrv_ftp.c 242 */;
	int cocci_id/* drivers/s390/char/hmcdrv_ftp.c 240 */;
	char __user *cocci_id/* drivers/s390/char/hmcdrv_ftp.c 238 */;
	size_t cocci_id/* drivers/s390/char/hmcdrv_ftp.c 238 */;
	loff_t cocci_id/* drivers/s390/char/hmcdrv_ftp.c 237 */;
	char __kernel *cocci_id/* drivers/s390/char/hmcdrv_ftp.c 237 */;
	ssize_t cocci_id/* drivers/s390/char/hmcdrv_ftp.c 237 */;
	void cocci_id/* drivers/s390/char/hmcdrv_ftp.c 185 */;
	long long cocci_id/* drivers/s390/char/hmcdrv_ftp.c 169 */;
	const struct hmcdrv_ftp_cmdspec *cocci_id/* drivers/s390/char/hmcdrv_ftp.c 161 */;
	struct hmcdrv_ftp_cmdspec *cocci_id/* drivers/s390/char/hmcdrv_ftp.c 112 */;
	char *cocci_id/* drivers/s390/char/hmcdrv_ftp.c 112 */;
}
