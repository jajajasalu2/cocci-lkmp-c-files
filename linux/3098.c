cocci_test_suite() {
	void __exit cocci_id/* drivers/block/paride/pg.c 713 */;
	int __init cocci_id/* drivers/block/paride/pg.c 665 */;
	struct pg_read_hdr cocci_id/* drivers/block/paride/pg.c 627 */;
	loff_t *cocci_id/* drivers/block/paride/pg.c 624 */;
	char __user *cocci_id/* drivers/block/paride/pg.c 624 */;
	ssize_t cocci_id/* drivers/block/paride/pg.c 624 */;
	size_t cocci_id/* drivers/block/paride/pg.c 624 */;
	struct pg_write_hdr cocci_id/* drivers/block/paride/pg.c 579 */;
	const char __user *cocci_id/* drivers/block/paride/pg.c 576 */;
	struct inode *cocci_id/* drivers/block/paride/pg.c 526 */;
	struct file *cocci_id/* drivers/block/paride/pg.c 526 */;
	int *cocci_id/* drivers/block/paride/pg.c 504 */;
	void cocci_id/* drivers/block/paride/pg.c 478 */;
	char cocci_id/* drivers/block/paride/pg.c 443 */[36];
	char cocci_id/* drivers/block/paride/pg.c 442 */[12];
	char cocci_id/* drivers/block/paride/pg.c 441 */[10];
	char *cocci_id/* drivers/block/paride/pg.c 440 */[2];
	char cocci_id/* drivers/block/paride/pg.c 424 */;
	int cocci_id/* drivers/block/paride/pg.c 391 */[5];
	unsigned long cocci_id/* drivers/block/paride/pg.c 320 */;
	u8 cocci_id/* drivers/block/paride/pg.c 278 */;
	struct pg *cocci_id/* drivers/block/paride/pg.c 278 */;
	const struct file_operations cocci_id/* drivers/block/paride/pg.c 234 */;
	void *cocci_id/* drivers/block/paride/pg.c 230 */;
	struct class *cocci_id/* drivers/block/paride/pg.c 229 */;
	char cocci_id/* drivers/block/paride/pg.c 227 */[512];
	int cocci_id/* drivers/block/paride/pg.c 225 */(struct pg *dev,
							int log);
	struct pg cocci_id/* drivers/block/paride/pg.c 223 */[PG_UNITS];
	struct pg {
		struct pi_adapter pia;
		struct pi_adapter *pi;
		int busy;
		int start;
		int dlen;
		unsigned long timeout;
		int status;
		int drive;
		unsigned long access;
		int present;
		char *bufptr;
		char name[PG_NAMELEN];
	} cocci_id/* drivers/block/paride/pg.c 208 */;
	int cocci_id/* drivers/block/paride/pg.c 204 */(void);
	ssize_t cocci_id/* drivers/block/paride/pg.c 202 */(struct file *filp,
							    const char __user *buf,
							    size_t count,
							    loff_t *ppos);
	ssize_t cocci_id/* drivers/block/paride/pg.c 200 */(struct file *filp,
							    char __user *buf,
							    size_t count,
							    loff_t *ppos);
	int cocci_id/* drivers/block/paride/pg.c 198 */(struct inode *inode,
							struct file *file);
	enum{D_PRT, D_PRO, D_UNI, D_MOD, D_SLV, D_DLY,} cocci_id/* drivers/block/paride/pg.c 153 */;
	int *cocci_id/* drivers/block/paride/pg.c 150 */[4][6];
	int cocci_id/* drivers/block/paride/pg.c 145 */[6];
	int cocci_id/* drivers/block/paride/pg.c 143 */;
	char *cocci_id/* drivers/block/paride/pg.c 142 */;
}
