cocci_test_suite() {
	const char *cocci_id/* drivers/gpio/gpio-lpc32xx.c 97 */[LPC32XX_GPIO_P2_MAX];
	const char *cocci_id/* drivers/gpio/gpio-lpc32xx.c 88 */[LPC32XX_GPIO_P1_MAX];
	const char *cocci_id/* drivers/gpio/gpio-lpc32xx.c 83 */[LPC32XX_GPIO_P0_MAX];
	struct gpio_regs {
		unsigned long inp_state;
		unsigned long outp_state;
		unsigned long outp_set;
		unsigned long outp_clr;
		unsigned long dir_set;
		unsigned long dir_clr;
	} cocci_id/* drivers/gpio/gpio-lpc32xx.c 71 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-lpc32xx.c 535 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-lpc32xx.c 529 */[];
	void __iomem *cocci_id/* drivers/gpio/gpio-lpc32xx.c 508 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-lpc32xx.c 505 */;
	const struct of_phandle_args *cocci_id/* drivers/gpio/gpio-lpc32xx.c 492 */;
	u32 *cocci_id/* drivers/gpio/gpio-lpc32xx.c 492 */;
	struct lpc32xx_gpio_chip cocci_id/* drivers/gpio/gpio-lpc32xx.c 397 */[];
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-lpc32xx.c 305 */;
	unsigned cocci_id/* drivers/gpio/gpio-lpc32xx.c 251 */;
	struct lpc32xx_gpio_chip *cocci_id/* drivers/gpio/gpio-lpc32xx.c 250 */;
	int cocci_id/* drivers/gpio/gpio-lpc32xx.c 250 */;
	u32 cocci_id/* drivers/gpio/gpio-lpc32xx.c 192 */;
	void cocci_id/* drivers/gpio/gpio-lpc32xx.c 178 */;
	unsigned long cocci_id/* drivers/gpio/gpio-lpc32xx.c 168 */;
	struct lpc32xx_gpio_chip {
		struct gpio_chip chip;
		struct gpio_regs *gpio_grp;
		void __iomem *reg_base;
	} cocci_id/* drivers/gpio/gpio-lpc32xx.c 162 */;
	struct gpio_regs cocci_id/* drivers/gpio/gpio-lpc32xx.c 129 */;
	const char *cocci_id/* drivers/gpio/gpio-lpc32xx.c 120 */[LPC32XX_GPO_P3_MAX];
	const char *cocci_id/* drivers/gpio/gpio-lpc32xx.c 109 */[LPC32XX_GPI_P3_MAX];
	const char *cocci_id/* drivers/gpio/gpio-lpc32xx.c 104 */[LPC32XX_GPIO_P3_MAX];
}
