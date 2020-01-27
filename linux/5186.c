cocci_test_suite() {
	void __iomem *cocci_id/* drivers/gpio/gpio-janz-ttl.c 82 */;
	void cocci_id/* drivers/gpio/gpio-janz-ttl.c 79 */;
	u8 *cocci_id/* drivers/gpio/gpio-janz-ttl.c 60 */;
	struct ttl_module *cocci_id/* drivers/gpio/gpio-janz-ttl.c 59 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-janz-ttl.c 57 */;
	unsigned cocci_id/* drivers/gpio/gpio-janz-ttl.c 57 */;
	int cocci_id/* drivers/gpio/gpio-janz-ttl.c 57 */;
	struct ttl_module {
		struct gpio_chip gpio;
		struct ttl_control_regs __iomem *regs;
		u8 portc_shadow;
		u8 portb_shadow;
		u8 porta_shadow;
		spinlock_t lock;
	} cocci_id/* drivers/gpio/gpio-janz-ttl.c 44 */;
	struct ttl_control_regs {
		__be16 portc;
		__be16 portb;
		__be16 porta;
		__be16 control;
	} cocci_id/* drivers/gpio/gpio-janz-ttl.c 37 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-janz-ttl.c 188 */;
	struct janz_platform_data *cocci_id/* drivers/gpio/gpio-janz-ttl.c 142 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-janz-ttl.c 140 */;
	u8 cocci_id/* drivers/gpio/gpio-janz-ttl.c 108 */;
	u16 cocci_id/* drivers/gpio/gpio-janz-ttl.c 108 */;
}
