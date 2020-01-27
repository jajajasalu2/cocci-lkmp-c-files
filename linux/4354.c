cocci_test_suite() {
	void cocci_id/* drivers/char/ipmi/bt-bmc.c 89 */;
	uint32_t cocci_id/* drivers/char/ipmi/bt-bmc.c 80 */;
	const struct regmap_config cocci_id/* drivers/char/ipmi/bt-bmc.c 72 */;
	atomic_t cocci_id/* drivers/char/ipmi/bt-bmc.c 70 */;
	struct bt_bmc {
		struct device dev;
		struct miscdevice miscdev;
		struct regmap *map;
		int offset;
		int irq;
		wait_queue_head_t queue;
		struct timer_list poll_timer;
		struct mutex mutex;
	} cocci_id/* drivers/char/ipmi/bt-bmc.c 59 */;
	struct platform_driver cocci_id/* drivers/char/ipmi/bt-bmc.c 517 */;
	const struct of_device_id cocci_id/* drivers/char/ipmi/bt-bmc.c 511 */[];
	void __iomem *cocci_id/* drivers/char/ipmi/bt-bmc.c 447 */;
	struct device *cocci_id/* drivers/char/ipmi/bt-bmc.c 399 */;
	struct platform_device *cocci_id/* drivers/char/ipmi/bt-bmc.c 397 */;
	struct bt_bmc *cocci_id/* drivers/char/ipmi/bt-bmc.c 396 */;
	int cocci_id/* drivers/char/ipmi/bt-bmc.c 396 */;
	u32 cocci_id/* drivers/char/ipmi/bt-bmc.c 378 */;
	irqreturn_t cocci_id/* drivers/char/ipmi/bt-bmc.c 375 */;
	void *cocci_id/* drivers/char/ipmi/bt-bmc.c 375 */;
	struct timer_list *cocci_id/* drivers/char/ipmi/bt-bmc.c 366 */;
	const struct file_operations cocci_id/* drivers/char/ipmi/bt-bmc.c 356 */;
	u8 cocci_id/* drivers/char/ipmi/bt-bmc.c 341 */;
	__poll_t cocci_id/* drivers/char/ipmi/bt-bmc.c 337 */;
	poll_table *cocci_id/* drivers/char/ipmi/bt-bmc.c 337 */;
	unsigned long cocci_id/* drivers/char/ipmi/bt-bmc.c 316 */;
	struct file *cocci_id/* drivers/char/ipmi/bt-bmc.c 315 */;
	unsigned int cocci_id/* drivers/char/ipmi/bt-bmc.c 315 */;
	long cocci_id/* drivers/char/ipmi/bt-bmc.c 315 */;
	const char __user *cocci_id/* drivers/char/ipmi/bt-bmc.c 259 */;
	u8 cocci_id/* drivers/char/ipmi/bt-bmc.c 199 */[BT_BMC_BUFFER_SIZE];
	loff_t *cocci_id/* drivers/char/ipmi/bt-bmc.c 194 */;
	size_t cocci_id/* drivers/char/ipmi/bt-bmc.c 194 */;
	char __user *cocci_id/* drivers/char/ipmi/bt-bmc.c 193 */;
	ssize_t cocci_id/* drivers/char/ipmi/bt-bmc.c 193 */;
	struct inode *cocci_id/* drivers/char/ipmi/bt-bmc.c 167 */;
	struct bt_bmc cocci_id/* drivers/char/ipmi/bt-bmc.c 164 */;
	u8 *cocci_id/* drivers/char/ipmi/bt-bmc.c 134 */;
}
