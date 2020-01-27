cocci_test_suite() {
	int __init cocci_id/* drivers/gpio/gpiolib-sysfs.c 803 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpiolib-sysfs.c 744 */;
	struct gpio_device *cocci_id/* drivers/gpio/gpiolib-sysfs.c 740 */;
	const void *cocci_id/* drivers/gpio/gpiolib-sysfs.c 651 */;
	struct class cocci_id/* drivers/gpio/gpiolib-sysfs.c 543 */;
	struct class_attribute *cocci_id/* drivers/gpio/gpiolib-sysfs.c 454 */;
	struct class *cocci_id/* drivers/gpio/gpiolib-sysfs.c 453 */;
	const struct gpio_chip *cocci_id/* drivers/gpio/gpiolib-sysfs.c 415 */;
	const struct attribute_group *cocci_id/* drivers/gpio/gpiolib-sysfs.c 400 */[];
	const struct attribute_group cocci_id/* drivers/gpio/gpiolib-sysfs.c 395 */;
	struct attribute *cocci_id/* drivers/gpio/gpiolib-sysfs.c 387 */[];
	bool cocci_id/* drivers/gpio/gpiolib-sysfs.c 372 */;
	struct device cocci_id/* drivers/gpio/gpiolib-sysfs.c 368 */;
	umode_t cocci_id/* drivers/gpio/gpiolib-sysfs.c 365 */;
	struct kobject *cocci_id/* drivers/gpio/gpiolib-sysfs.c 365 */;
	struct attribute *cocci_id/* drivers/gpio/gpiolib-sysfs.c 365 */;
	long cocci_id/* drivers/gpio/gpiolib-sysfs.c 351 */;
	const char *cocci_id/* drivers/gpio/gpiolib-sysfs.c 347 */;
	size_t cocci_id/* drivers/gpio/gpiolib-sysfs.c 347 */;
	struct gpio_desc *cocci_id/* drivers/gpio/gpiolib-sysfs.c 333 */;
	struct gpiod_data *cocci_id/* drivers/gpio/gpiolib-sysfs.c 332 */;
	struct device_attribute *cocci_id/* drivers/gpio/gpiolib-sysfs.c 330 */;
	char *cocci_id/* drivers/gpio/gpiolib-sysfs.c 330 */;
	struct device *cocci_id/* drivers/gpio/gpiolib-sysfs.c 329 */;
	ssize_t cocci_id/* drivers/gpio/gpiolib-sysfs.c 329 */;
	unsigned int cocci_id/* drivers/gpio/gpiolib-sysfs.c 309 */;
	unsigned char cocci_id/* drivers/gpio/gpiolib-sysfs.c 266 */;
	int cocci_id/* drivers/gpio/gpiolib-sysfs.c 246 */;
	const struct {
		const char *name;
		unsigned char flags;
	} cocci_id/* drivers/gpio/gpiolib-sysfs.c 231 */[];
	void cocci_id/* drivers/gpio/gpiolib-sysfs.c 220 */;
	struct gpiod_data {
		struct gpio_desc *desc;
		struct mutex mutex;
		struct kernfs_node *value_kn;
		int irq;
		unsigned char irq_flags;
		bool direction_can_change;
	} cocci_id/* drivers/gpio/gpiolib-sysfs.c 20 */;
	unsigned long cocci_id/* drivers/gpio/gpiolib-sysfs.c 168 */;
	irqreturn_t cocci_id/* drivers/gpio/gpiolib-sysfs.c 154 */;
	void *cocci_id/* drivers/gpio/gpiolib-sysfs.c 154 */;
}
