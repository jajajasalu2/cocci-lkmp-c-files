cocci_test_suite() {
	unsigned long cocci_id/* drivers/gpio/gpio-gpio-mm.c 68 */;
	const unsigned int cocci_id/* drivers/gpio/gpio-gpio-mm.c 65 */;
	struct gpiomm_gpio *const cocci_id/* drivers/gpio/gpio-gpio-mm.c 64 */;
	unsigned int cocci_id/* drivers/gpio/gpio-gpio-mm.c 62 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-gpio-mm.c 61 */;
	int cocci_id/* drivers/gpio/gpio-gpio-mm.c 61 */;
	struct gpiomm_gpio {
		struct gpio_chip chip;
		unsigned char io_state[6];
		unsigned char out_state[6];
		unsigned char control[2];
		spinlock_t lock;
		unsigned int base;
	} cocci_id/* drivers/gpio/gpio-gpio-mm.c 39 */;
	struct isa_driver cocci_id/* drivers/gpio/gpio-gpio-mm.c 307 */;
	const char *const cocci_id/* drivers/gpio/gpio-gpio-mm.c 258 */;
	struct gpiomm_gpio *cocci_id/* drivers/gpio/gpio-gpio-mm.c 257 */;
	struct device *cocci_id/* drivers/gpio/gpio-gpio-mm.c 255 */;
	unsigned int cocci_id/* drivers/gpio/gpio-gpio-mm.c 25 */[MAX_NUM_GPIOMM];
	const char *cocci_id/* drivers/gpio/gpio-gpio-mm.c 244 */[GPIOMM_NGPIO];
	size_t cocci_id/* drivers/gpio/gpio-gpio-mm.c 221 */;
	void cocci_id/* drivers/gpio/gpio-gpio-mm.c 194 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-gpio-mm.c 172 */;
	const size_t cocci_id/* drivers/gpio/gpio-gpio-mm.c 170 */[];
}
