cocci_test_suite() {
	unsigned long cocci_id/* drivers/gpio/gpio-ws16c48.c 70 */;
	const unsigned cocci_id/* drivers/gpio/gpio-ws16c48.c 68 */;
	struct ws16c48_gpio *const cocci_id/* drivers/gpio/gpio-ws16c48.c 67 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-ws16c48.c 65 */;
	unsigned cocci_id/* drivers/gpio/gpio-ws16c48.c 65 */;
	int cocci_id/* drivers/gpio/gpio-ws16c48.c 65 */;
	struct isa_driver cocci_id/* drivers/gpio/gpio-ws16c48.c 431 */;
	struct ws16c48_gpio {
		struct gpio_chip chip;
		unsigned char io_state[6];
		unsigned char out_state[6];
		raw_spinlock_t lock;
		unsigned long irq_mask;
		unsigned long flow_mask;
		unsigned base;
	} cocci_id/* drivers/gpio/gpio-ws16c48.c 43 */;
	const char *const cocci_id/* drivers/gpio/gpio-ws16c48.c 371 */;
	struct ws16c48_gpio *cocci_id/* drivers/gpio/gpio-ws16c48.c 370 */;
	struct device *cocci_id/* drivers/gpio/gpio-ws16c48.c 368 */;
	const char *cocci_id/* drivers/gpio/gpio-ws16c48.c 353 */[WS16C48_NGPIO];
	struct gpio_chip *const cocci_id/* drivers/gpio/gpio-ws16c48.c 327 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-ws16c48.c 324 */;
	void *cocci_id/* drivers/gpio/gpio-ws16c48.c 324 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-ws16c48.c 316 */;
	unsigned int cocci_id/* drivers/gpio/gpio-ws16c48.c 25 */;
	unsigned int cocci_id/* drivers/gpio/gpio-ws16c48.c 24 */[MAX_NUM_WS16C48];
	const unsigned long cocci_id/* drivers/gpio/gpio-ws16c48.c 208 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-ws16c48.c 204 */;
	size_t cocci_id/* drivers/gpio/gpio-ws16c48.c 180 */;
	void cocci_id/* drivers/gpio/gpio-ws16c48.c 150 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-ws16c48.c 129 */;
}
