cocci_test_suite() {
	char cocci_id/* drivers/block/aoe/aoechr.c 86 */[16];
	struct sk_buff *cocci_id/* drivers/block/aoe/aoechr.c 85 */;
	struct aoedev *cocci_id/* drivers/block/aoe/aoechr.c 84 */;
	struct aoe_chardev cocci_id/* drivers/block/aoe/aoechr.c 53 */[];
	struct class *cocci_id/* drivers/block/aoe/aoechr.c 52 */;
	spinlock_t cocci_id/* drivers/block/aoe/aoechr.c 50 */;
	struct completion cocci_id/* drivers/block/aoe/aoechr.c 49 */;
	struct ErrMsg cocci_id/* drivers/block/aoe/aoechr.c 47 */[NMSG];
	struct ErrMsg {
		short flags;
		short len;
		char *msg;
	} cocci_id/* drivers/block/aoe/aoechr.c 35 */;
	enum{EMFL_VALID=1,} cocci_id/* drivers/block/aoe/aoechr.c 33 */;
	int cocci_id/* drivers/block/aoe/aoechr.c 313 */;
	int __init cocci_id/* drivers/block/aoe/aoechr.c 283 */;
	struct aoe_chardev {
		ulong minor;
		char name[32];
	} cocci_id/* drivers/block/aoe/aoechr.c 28 */;
	umode_t *cocci_id/* drivers/block/aoe/aoechr.c 278 */;
	struct device *cocci_id/* drivers/block/aoe/aoechr.c 278 */;
	char *cocci_id/* drivers/block/aoe/aoechr.c 278 */;
	const struct file_operations cocci_id/* drivers/block/aoe/aoechr.c 269 */;
	loff_t *cocci_id/* drivers/block/aoe/aoechr.c 213 */;
	char __user *cocci_id/* drivers/block/aoe/aoechr.c 213 */;
	size_t cocci_id/* drivers/block/aoe/aoechr.c 213 */;
	ssize_t cocci_id/* drivers/block/aoe/aoechr.c 212 */;
	void *cocci_id/* drivers/block/aoe/aoechr.c 195 */;
	unsigned long cocci_id/* drivers/block/aoe/aoechr.c 195 */;
	struct inode *cocci_id/* drivers/block/aoe/aoechr.c 189 */;
	struct file *cocci_id/* drivers/block/aoe/aoechr.c 189 */;
	enum{MINOR_ERR=2, MINOR_DISCOVER, MINOR_INTERFACES, MINOR_REVALIDATE, MINOR_FLUSH, MSGSZ=2048, NMSG=100,} cocci_id/* drivers/block/aoe/aoechr.c 17 */;
	const char __user *cocci_id/* drivers/block/aoe/aoechr.c 162 */;
	ulong cocci_id/* drivers/block/aoe/aoechr.c 130 */;
	struct ErrMsg *cocci_id/* drivers/block/aoe/aoechr.c 128 */;
	void cocci_id/* drivers/block/aoe/aoechr.c 125 */;
	struct sk_buff_head cocci_id/* drivers/block/aoe/aoechr.c 117 */;
}
