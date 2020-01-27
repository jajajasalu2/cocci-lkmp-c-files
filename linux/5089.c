cocci_test_suite() {
	unsigned int cocci_id/* drivers/gpio/gpio-104-idi-48.c 91 */;
	const size_t cocci_id/* drivers/gpio/gpio-104-idi-48.c 90 */[];
	unsigned long cocci_id/* drivers/gpio/gpio-104-idi-48.c 88 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-104-idi-48.c 84 */;
	const unsigned int cocci_id/* drivers/gpio/gpio-104-idi-48.c 68 */[6];
	struct idi_48_gpio *const cocci_id/* drivers/gpio/gpio-104-idi-48.c 66 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-104-idi-48.c 59 */;
	unsigned cocci_id/* drivers/gpio/gpio-104-idi-48.c 59 */;
	int cocci_id/* drivers/gpio/gpio-104-idi-48.c 59 */;
	struct idi_48_gpio {
		struct gpio_chip chip;
		raw_spinlock_t lock;
		spinlock_t ack_lock;
		unsigned char irq_mask[6];
		unsigned base;
		unsigned char cos_enb;
	} cocci_id/* drivers/gpio/gpio-104-idi-48.c 45 */;
	struct isa_driver cocci_id/* drivers/gpio/gpio-104-idi-48.c 308 */;
	unsigned int cocci_id/* drivers/gpio/gpio-104-idi-48.c 27 */[MAX_NUM_IDI_48];
	const char *const cocci_id/* drivers/gpio/gpio-104-idi-48.c 253 */;
	struct idi_48_gpio *cocci_id/* drivers/gpio/gpio-104-idi-48.c 252 */;
	struct device *cocci_id/* drivers/gpio/gpio-104-idi-48.c 250 */;
	const char *cocci_id/* drivers/gpio/gpio-104-idi-48.c 239 */[IDI48_NGPIO];
	struct gpio_chip *const cocci_id/* drivers/gpio/gpio-104-idi-48.c 203 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-104-idi-48.c 195 */;
	void *cocci_id/* drivers/gpio/gpio-104-idi-48.c 195 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-104-idi-48.c 187 */;
	const unsigned cocci_id/* drivers/gpio/gpio-104-idi-48.c 115 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-104-idi-48.c 107 */;
	void cocci_id/* drivers/gpio/gpio-104-idi-48.c 107 */;
}
