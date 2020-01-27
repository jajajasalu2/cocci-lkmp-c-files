cocci_test_suite() {
	struct asic3 cocci_id/* drivers/mfd/asic3.c 961 */;
	int cocci_id/* drivers/mfd/asic3.c 88 */(struct gpio_chip *chip,
						 unsigned offset);
	struct resource *cocci_id/* drivers/mfd/asic3.c 877 */;
	struct asic3_platform_data *cocci_id/* drivers/mfd/asic3.c 876 */;
	struct mfd_cell cocci_id/* drivers/mfd/asic3.c 848 */[ASIC3_NUM_LEDS];
	const struct mfd_cell *cocci_id/* drivers/mfd/asic3.c 827 */;
	const int cocci_id/* drivers/mfd/asic3.c 809 */[ASIC3_NUM_LEDS];
	struct asic3 {
		void __iomem *mapping;
		unsigned int bus_shift;
		unsigned int irq_nr;
		unsigned int irq_base;
		raw_spinlock_t lock;
		u16 irq_bothedge[4];
		struct gpio_chip gpio;
		struct device *dev;
		void __iomem *tmio_cnf;
		struct asic3_clk clocks[ARRAY_SIZE(asic3_clk_init)];
	} cocci_id/* drivers/mfd/asic3.c 74 */;
	struct resource cocci_id/* drivers/mfd/asic3.c 725 */[];
	struct tmio_mmc_data cocci_id/* drivers/mfd/asic3.c 718 */;
	const struct mfd_cell cocci_id/* drivers/mfd/asic3.c 694 */;
	struct ds1wm_driver_data cocci_id/* drivers/mfd/asic3.c 638 */;
	u32 cocci_id/* drivers/mfd/asic3.c 624 */;
	unsigned long cocci_id/* drivers/mfd/asic3.c 623 */;
	struct asic3_clk *cocci_id/* drivers/mfd/asic3.c 621 */;
	struct asic3 *cocci_id/* drivers/mfd/asic3.c 621 */;
	void cocci_id/* drivers/mfd/asic3.c 621 */;
	struct asic3_clk cocci_id/* drivers/mfd/asic3.c 59 */[]__initdata;
	u8 cocci_id/* drivers/mfd/asic3.c 566 */;
	u16 cocci_id/* drivers/mfd/asic3.c 550 */[ASIC3_NUM_GPIO_BANKS];
	u16 *cocci_id/* drivers/mfd/asic3.c 547 */;
	struct platform_device *cocci_id/* drivers/mfd/asic3.c 546 */;
	struct asic3_clk {
		int enabled;
		unsigned int cdex;
		unsigned long rate;
	} cocci_id/* drivers/mfd/asic3.c 47 */;
	unsigned int cocci_id/* drivers/mfd/asic3.c 443 */;
	unsigned cocci_id/* drivers/mfd/asic3.c 440 */;
	struct gpio_chip *cocci_id/* drivers/mfd/asic3.c 439 */;
	int cocci_id/* drivers/mfd/asic3.c 439 */;
	struct irq_chip cocci_id/* drivers/mfd/asic3.c 368 */;
	u16 cocci_id/* drivers/mfd/asic3.c 357 */;
	struct irq_data *cocci_id/* drivers/mfd/asic3.c 353 */;
	enum{ASIC3_CLOCK_SPI, ASIC3_CLOCK_OWM, ASIC3_CLOCK_PWM0, ASIC3_CLOCK_PWM1, ASIC3_CLOCK_LED0, ASIC3_CLOCK_LED1, ASIC3_CLOCK_LED2, ASIC3_CLOCK_SD_HOST, ASIC3_CLOCK_SD_BUS, ASIC3_CLOCK_SMBUS, ASIC3_CLOCK_EX0, ASIC3_CLOCK_EX1,} cocci_id/* drivers/mfd/asic3.c 32 */;
	struct irq_desc *cocci_id/* drivers/mfd/asic3.c 139 */;
	int __init cocci_id/* drivers/mfd/asic3.c 1069 */;
	struct platform_driver cocci_id/* drivers/mfd/asic3.c 1061 */;
	bool cocci_id/* drivers/mfd/asic3.c 104 */;
}
