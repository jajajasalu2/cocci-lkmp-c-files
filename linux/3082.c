cocci_test_suite() {
	int __init cocci_id/* drivers/block/paride/pt.c 962 */;
	const char __user *cocci_id/* drivers/block/paride/pt.c 862 */;
	loff_t *cocci_id/* drivers/block/paride/pt.c 765 */;
	char __user *cocci_id/* drivers/block/paride/pt.c 765 */;
	ssize_t cocci_id/* drivers/block/paride/pt.c 765 */;
	size_t cocci_id/* drivers/block/paride/pt.c 765 */;
	struct mtop cocci_id/* drivers/block/paride/pt.c 709 */;
	struct mtop __user *cocci_id/* drivers/block/paride/pt.c 708 */;
	void __user *cocci_id/* drivers/block/paride/pt.c 708 */;
	struct file *cocci_id/* drivers/block/paride/pt.c 705 */;
	unsigned long cocci_id/* drivers/block/paride/pt.c 705 */;
	unsigned int cocci_id/* drivers/block/paride/pt.c 705 */;
	long cocci_id/* drivers/block/paride/pt.c 705 */;
	struct inode *cocci_id/* drivers/block/paride/pt.c 659 */;
	void cocci_id/* drivers/block/paride/pt.c 601 */;
	char cocci_id/* drivers/block/paride/pt.c 538 */[36];
	char cocci_id/* drivers/block/paride/pt.c 533 */[12];
	char cocci_id/* drivers/block/paride/pt.c 532 */[10];
	char *cocci_id/* drivers/block/paride/pt.c 531 */[2];
	int cocci_id/* drivers/block/paride/pt.c 455 */[5];
	char cocci_id/* drivers/block/paride/pt.c 357 */[16];
	struct pi_adapter *cocci_id/* drivers/block/paride/pt.c 299 */;
	u8 cocci_id/* drivers/block/paride/pt.c 267 */;
	struct pt_unit *cocci_id/* drivers/block/paride/pt.c 267 */;
	struct class *cocci_id/* drivers/block/paride/pt.c 250 */;
	const struct file_operations cocci_id/* drivers/block/paride/pt.c 239 */;
	void *cocci_id/* drivers/block/paride/pt.c 235 */;
	char cocci_id/* drivers/block/paride/pt.c 234 */[512];
	struct pt_unit cocci_id/* drivers/block/paride/pt.c 232 */[PT_UNITS];
	int cocci_id/* drivers/block/paride/pt.c 230 */(struct pt_unit *tape);
	struct pt_unit {
		struct pi_adapter pia;
		struct pi_adapter *pi;
		int flags;
		int last_sense;
		int drive;
		atomic_t available;
		int bs;
		int capacity;
		int present;
		char *bufptr;
		char name[PT_NAMELEN];
	} cocci_id/* drivers/block/paride/pt.c 216 */;
	int cocci_id/* drivers/block/paride/pt.c 202 */(void);
	ssize_t cocci_id/* drivers/block/paride/pt.c 200 */(struct file *filp,
							    const char __user *buf,
							    size_t count,
							    loff_t *ppos);
	ssize_t cocci_id/* drivers/block/paride/pt.c 198 */(struct file *filp,
							    char __user *buf,
							    size_t count,
							    loff_t *ppos);
	long cocci_id/* drivers/block/paride/pt.c 196 */(struct file *file,
							 unsigned int cmd,
							 unsigned long arg);
	int cocci_id/* drivers/block/paride/pt.c 195 */(struct inode *inode,
							struct file *file);
	int *cocci_id/* drivers/block/paride/pt.c 130 */[4][6];
	int cocci_id/* drivers/block/paride/pt.c 125 */[6];
	int cocci_id/* drivers/block/paride/pt.c 123 */;
	char *cocci_id/* drivers/block/paride/pt.c 122 */;
	void __exit cocci_id/* drivers/block/paride/pt.c 1007 */;
}
