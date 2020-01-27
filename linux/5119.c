cocci_test_suite() {
	unsigned int cocci_id/* drivers/gpio/gpio-mockup.c 83 */;
	struct gpio_mockup_chip *cocci_id/* drivers/gpio/gpio-mockup.c 82 */;
	int cocci_id/* drivers/gpio/gpio-mockup.c 82 */;
	struct dentry *cocci_id/* drivers/gpio/gpio-mockup.c 70 */;
	bool cocci_id/* drivers/gpio/gpio-mockup.c 66 */;
	int cocci_id/* drivers/gpio/gpio-mockup.c 62 */[GPIO_MOCKUP_MAX_RANGES];
	void __exit cocci_id/* drivers/gpio/gpio-mockup.c 563 */;
	struct gpio_mockup_dbgfs_private {
		struct gpio_mockup_chip *chip;
		struct gpio_desc *desc;
		unsigned int offset;
	} cocci_id/* drivers/gpio/gpio-mockup.c 56 */;
	u16 cocci_id/* drivers/gpio/gpio-mockup.c 500 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-mockup.c 499 */;
	struct platform_device_info cocci_id/* drivers/gpio/gpio-mockup.c 498 */;
	struct property_entry cocci_id/* drivers/gpio/gpio-mockup.c 496 */[GPIO_MOCKUP_MAX_PROP];
	int __init cocci_id/* drivers/gpio/gpio-mockup.c 494 */;
	struct gpio_mockup_chip {
		struct gpio_chip gc;
		struct gpio_mockup_line_status *lines;
		struct irq_sim irqsim;
		struct dentry *dbg_dir;
		struct mutex lock;
	} cocci_id/* drivers/gpio/gpio-mockup.c 48 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-mockup.c 479 */[GPIO_MOCKUP_MAX_GC];
	struct platform_driver cocci_id/* drivers/gpio/gpio-mockup.c 472 */;
	struct gpio_mockup_line_status {
		int dir;
		int value;
		int pull;
	} cocci_id/* drivers/gpio/gpio-mockup.c 42 */;
	const char *const *cocci_id/* drivers/gpio/gpio-mockup.c 387 */;
	char **cocci_id/* drivers/gpio/gpio-mockup.c 373 */;
	char *cocci_id/* drivers/gpio/gpio-mockup.c 341 */;
	const char *cocci_id/* drivers/gpio/gpio-mockup.c 340 */;
	struct device *cocci_id/* drivers/gpio/gpio-mockup.c 335 */;
	const struct file_operations cocci_id/* drivers/gpio/gpio-mockup.c 326 */;
	struct inode *cocci_id/* drivers/gpio/gpio-mockup.c 300 */;
	struct file *cocci_id/* drivers/gpio/gpio-mockup.c 300 */;
	const char __user *cocci_id/* drivers/gpio/gpio-mockup.c 275 */;
	char cocci_id/* drivers/gpio/gpio-mockup.c 258 */[3];
	struct seq_file *cocci_id/* drivers/gpio/gpio-mockup.c 255 */;
	struct gpio_mockup_dbgfs_private *cocci_id/* drivers/gpio/gpio-mockup.c 253 */;
	loff_t *cocci_id/* drivers/gpio/gpio-mockup.c 251 */;
	size_t cocci_id/* drivers/gpio/gpio-mockup.c 251 */;
	char __user *cocci_id/* drivers/gpio/gpio-mockup.c 250 */;
	ssize_t cocci_id/* drivers/gpio/gpio-mockup.c 249 */;
	unsigned long cocci_id/* drivers/gpio/gpio-mockup.c 184 */;
	struct irq_sim *cocci_id/* drivers/gpio/gpio-mockup.c 149 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-mockup.c 148 */;
	struct gpio_desc *cocci_id/* drivers/gpio/gpio-mockup.c 147 */;
	void cocci_id/* drivers/gpio/gpio-mockup.c 116 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-mockup.c 101 */;
}
