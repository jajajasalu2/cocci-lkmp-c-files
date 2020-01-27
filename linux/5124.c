cocci_test_suite() {
	pm_message_t cocci_id/* drivers/gpio/gpio-mlxbf.c 91 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-mlxbf.c 54 */;
	struct device *cocci_id/* drivers/gpio/gpio-mlxbf.c 53 */;
	struct mlxbf_gpio_state *cocci_id/* drivers/gpio/gpio-mlxbf.c 52 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-mlxbf.c 50 */;
	int cocci_id/* drivers/gpio/gpio-mlxbf.c 50 */;
	struct mlxbf_gpio_state {
		struct gpio_chip gc;
		void __iomem *base;
#ifdef CONFIG_PM
		struct mlxbf_gpio_context_save_regs csave_regs;
#endif
	} cocci_id/* drivers/gpio/gpio-mlxbf.c 39 */;
	struct mlxbf_gpio_context_save_regs {
		u64 scratchpad;
		u64 pad_control[MLXBF_GPIO_NR];
		u64 pin_dir_i;
		u64 pin_dir_o;
	} cocci_id/* drivers/gpio/gpio-mlxbf.c 30 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-mlxbf.c 136 */;
	const struct acpi_device_id cocci_id/* drivers/gpio/gpio-mlxbf.c 130 */[];
}
