cocci_test_suite() {
	unsigned long cocci_id/* drivers/gpio/gpio-vx855.c 84 */;
	struct vx855_gpio *cocci_id/* drivers/gpio/gpio-vx855.c 83 */;
	unsigned int cocci_id/* drivers/gpio/gpio-vx855.c 81 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-vx855.c 80 */;
	u_int32_t cocci_id/* drivers/gpio/gpio-vx855.c 42 */;
	int cocci_id/* drivers/gpio/gpio-vx855.c 42 */;
	struct vx855_gpio {
		struct gpio_chip gpio;
		spinlock_t lock;
		u32 io_gpi;
		u32 io_gpo;
	} cocci_id/* drivers/gpio/gpio-vx855.c 34 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-vx855.c 273 */;
	struct resource *cocci_id/* drivers/gpio/gpio-vx855.c 230 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-vx855.c 228 */;
	void cocci_id/* drivers/gpio/gpio-vx855.c 209 */;
	const char *cocci_id/* drivers/gpio/gpio-vx855.c 196 */[NR_VX855_GP];
	enum pin_config_param cocci_id/* drivers/gpio/gpio-vx855.c 176 */;
}
