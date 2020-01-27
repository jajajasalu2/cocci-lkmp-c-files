cocci_test_suite() {
	unsigned long cocci_id/* drivers/gpio/gpio-104-dio-48e.c 74 */;
	const unsigned int cocci_id/* drivers/gpio/gpio-104-dio-48e.c 72 */;
	const unsigned cocci_id/* drivers/gpio/gpio-104-dio-48e.c 71 */;
	struct dio48e_gpio *const cocci_id/* drivers/gpio/gpio-104-dio-48e.c 70 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-104-dio-48e.c 68 */;
	unsigned cocci_id/* drivers/gpio/gpio-104-dio-48e.c 68 */;
	int cocci_id/* drivers/gpio/gpio-104-dio-48e.c 68 */;
	struct dio48e_gpio {
		struct gpio_chip chip;
		unsigned char io_state[6];
		unsigned char out_state[6];
		unsigned char control[2];
		raw_spinlock_t lock;
		unsigned base;
		unsigned char irq_mask;
	} cocci_id/* drivers/gpio/gpio-104-dio-48e.c 46 */;
	struct isa_driver cocci_id/* drivers/gpio/gpio-104-dio-48e.c 442 */;
	const char *const cocci_id/* drivers/gpio/gpio-104-dio-48e.c 374 */;
	struct dio48e_gpio *cocci_id/* drivers/gpio/gpio-104-dio-48e.c 373 */;
	struct device *cocci_id/* drivers/gpio/gpio-104-dio-48e.c 371 */;
	const char *cocci_id/* drivers/gpio/gpio-104-dio-48e.c 352 */[DIO48E_NGPIO];
	const unsigned long cocci_id/* drivers/gpio/gpio-104-dio-48e.c 335 */;
	struct gpio_chip *const cocci_id/* drivers/gpio/gpio-104-dio-48e.c 334 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-104-dio-48e.c 331 */;
	void *cocci_id/* drivers/gpio/gpio-104-dio-48e.c 331 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-104-dio-48e.c 323 */;
	unsigned int cocci_id/* drivers/gpio/gpio-104-dio-48e.c 27 */[MAX_NUM_DIO48E];
	struct irq_data *cocci_id/* drivers/gpio/gpio-104-dio-48e.c 253 */;
	size_t cocci_id/* drivers/gpio/gpio-104-dio-48e.c 231 */;
	void cocci_id/* drivers/gpio/gpio-104-dio-48e.c 205 */;
	unsigned int cocci_id/* drivers/gpio/gpio-104-dio-48e.c 189 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-104-dio-48e.c 183 */;
	const size_t cocci_id/* drivers/gpio/gpio-104-dio-48e.c 181 */[];
}
