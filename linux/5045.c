cocci_test_suite() {
	struct irq_data *cocci_id/* drivers/gpio/gpio-siox.c 98 */;
	void cocci_id/* drivers/gpio/gpio-siox.c 98 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-siox.c 79 */;
	u32 cocci_id/* drivers/gpio/gpio-siox.c 43 */;
	size_t cocci_id/* drivers/gpio/gpio-siox.c 42 */;
	const u8 cocci_id/* drivers/gpio/gpio-siox.c 39 */[];
	struct siox_device *cocci_id/* drivers/gpio/gpio-siox.c 39 */;
	u8 cocci_id/* drivers/gpio/gpio-siox.c 28 */[];
	struct siox_driver cocci_id/* drivers/gpio/gpio-siox.c 256 */;
	struct device *cocci_id/* drivers/gpio/gpio-siox.c 215 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-siox.c 214 */;
	unsigned int cocci_id/* drivers/gpio/gpio-siox.c 185 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-siox.c 184 */;
	int cocci_id/* drivers/gpio/gpio-siox.c 184 */;
	u8 cocci_id/* drivers/gpio/gpio-siox.c 172 */;
	struct gpio_siox_ddata cocci_id/* drivers/gpio/gpio-siox.c 147 */;
	struct gpio_siox_ddata *cocci_id/* drivers/gpio/gpio-siox.c 146 */;
	struct gpio_siox_ddata {
		struct gpio_chip gchip;
		struct irq_chip ichip;
		struct mutex lock;
		u8 setdata[1];
		u8 getdata[3];
		spinlock_t irqlock;
		u32 irq_enable;
		u32 irq_status;
		u32 irq_type[20];
	} cocci_id/* drivers/gpio/gpio-siox.c 11 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-siox.c 100 */;
}
