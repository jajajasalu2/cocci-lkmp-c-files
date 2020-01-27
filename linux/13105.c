cocci_test_suite() {
	int cocci_id/* drivers/gnss/sirf.c 88 */;
	struct serdev_device_driver cocci_id/* drivers/gnss/sirf.c 564 */;
	const struct of_device_id cocci_id/* drivers/gnss/sirf.c 553 */[];
	struct device *cocci_id/* drivers/gnss/sirf.c 397 */;
	u32 cocci_id/* drivers/gnss/sirf.c 386 */;
	struct device_node *cocci_id/* drivers/gnss/sirf.c 385 */;
	struct sirf_data {
		struct gnss_device *gdev;
		struct serdev_device *serdev;
		speed_t speed;
		struct regulator *vcc;
		struct regulator *lna;
		struct gpio_desc *on_off;
		struct gpio_desc *wakeup;
		int irq;
		bool active;
		struct mutex gdev_mutex;
		bool open;
		struct mutex serdev_mutex;
		int serdev_count;
		wait_queue_head_t power_wait;
	} cocci_id/* drivers/gnss/sirf.c 38 */;
	int __maybe_unused cocci_id/* drivers/gnss/sirf.c 363 */;
	unsigned long cocci_id/* drivers/gnss/sirf.c 261 */;
	bool cocci_id/* drivers/gnss/sirf.c 259 */;
	irqreturn_t cocci_id/* drivers/gnss/sirf.c 188 */;
	void *cocci_id/* drivers/gnss/sirf.c 188 */;
	const struct serdev_device_ops cocci_id/* drivers/gnss/sirf.c 183 */;
	const unsigned char *cocci_id/* drivers/gnss/sirf.c 164 */;
	size_t cocci_id/* drivers/gnss/sirf.c 164 */;
	const struct gnss_operations cocci_id/* drivers/gnss/sirf.c 157 */;
	struct serdev_device *cocci_id/* drivers/gnss/sirf.c 128 */;
	struct sirf_data *cocci_id/* drivers/gnss/sirf.c 127 */;
	struct gnss_device *cocci_id/* drivers/gnss/sirf.c 125 */;
	void cocci_id/* drivers/gnss/sirf.c 125 */;
}
