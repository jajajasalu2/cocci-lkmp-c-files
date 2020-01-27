cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/char/tlclk.c 876 */;
	void *cocci_id/* drivers/char/tlclk.c 876 */;
	struct timer_list *cocci_id/* drivers/char/tlclk.c 858 */;
	void cocci_id/* drivers/char/tlclk.c 858 */;
	void __exit cocci_id/* drivers/char/tlclk.c 845 */;
	struct tlclk_alarms cocci_id/* drivers/char/tlclk.c 786 */;
	int __init cocci_id/* drivers/char/tlclk.c 776 */;
	struct platform_device *cocci_id/* drivers/char/tlclk.c 774 */;
	const struct attribute_group cocci_id/* drivers/char/tlclk.c 769 */;
	struct attribute *cocci_id/* drivers/char/tlclk.c 744 */[];
	unsigned char cocci_id/* drivers/char/tlclk.c 396 */;
	const char *cocci_id/* drivers/char/tlclk.c 392 */;
	size_t cocci_id/* drivers/char/tlclk.c 392 */;
	unsigned long cocci_id/* drivers/char/tlclk.c 314 */;
	struct device_attribute *cocci_id/* drivers/char/tlclk.c 312 */;
	char *cocci_id/* drivers/char/tlclk.c 312 */;
	struct device *cocci_id/* drivers/char/tlclk.c 311 */;
	ssize_t cocci_id/* drivers/char/tlclk.c 311 */;
	struct miscdevice cocci_id/* drivers/char/tlclk.c 273 */;
	const struct file_operations cocci_id/* drivers/char/tlclk.c 265 */;
	loff_t *cocci_id/* drivers/char/tlclk.c 244 */;
	char __user *cocci_id/* drivers/char/tlclk.c 243 */;
	struct inode *cocci_id/* drivers/char/tlclk.c 204 */;
	struct file *cocci_id/* drivers/char/tlclk.c 204 */;
	irqreturn_t cocci_id/* drivers/char/tlclk.c 197 */(int irq,
							   void *dev_id);
	struct tlclk_alarms *cocci_id/* drivers/char/tlclk.c 191 */;
	struct timer_list cocci_id/* drivers/char/tlclk.c 188 */;
	void cocci_id/* drivers/char/tlclk.c 187 */(struct timer_list *t);
	int cocci_id/* drivers/char/tlclk.c 185 */;
	unsigned int cocci_id/* drivers/char/tlclk.c 182 */;
	struct tlclk_alarms {
		__u32 lost_clocks;
		__u32 lost_primary_clock;
		__u32 lost_secondary_clock;
		__u32 primary_clock_back;
		__u32 secondary_clock_back;
		__u32 switchover_primary;
		__u32 switchover_secondary;
		__u32 pll_holdover;
		__u32 pll_end_holdover;
		__u32 pll_lost_sync;
		__u32 pll_sync;
	} cocci_id/* drivers/char/tlclk.c 121 */;
}
