cocci_test_suite() {
	u32 cocci_id/* drivers/gpio/gpio-xilinx.c 89 */;
	struct xgpio_instance {
		struct gpio_chip gc;
		void __iomem *regs;
		unsigned int gpio_width[2];
		u32 gpio_state[2];
		u32 gpio_dir[2];
		spinlock_t gpio_lock[2];
	} cocci_id/* drivers/gpio/gpio-xilinx.c 42 */;
	void __exit cocci_id/* drivers/gpio/gpio-xilinx.c 369 */;
	void cocci_id/* drivers/gpio/gpio-xilinx.c 369 */;
	int __init cocci_id/* drivers/gpio/gpio-xilinx.c 362 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-xilinx.c 354 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-xilinx.c 347 */[];
	struct device_node *cocci_id/* drivers/gpio/gpio-xilinx.c 270 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-xilinx.c 266 */;
	struct xgpio_instance *cocci_id/* drivers/gpio/gpio-xilinx.c 185 */;
	unsigned long cocci_id/* drivers/gpio/gpio-xilinx.c 184 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-xilinx.c 182 */;
	unsigned int cocci_id/* drivers/gpio/gpio-xilinx.c 182 */;
	int cocci_id/* drivers/gpio/gpio-xilinx.c 182 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-xilinx.c 136 */;
}
