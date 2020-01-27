cocci_test_suite() {
	const struct sh_pfc_pin *cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 77 */;
	void __iomem *cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 59 */;
	phys_addr_t cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 58 */;
	const struct pinmux_data_reg *cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 56 */;
	u32 cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 55 */;
	struct sh_pfc_gpio_pin *cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 49 */;
	unsigned int *cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 46 */;
	struct sh_pfc_gpio_data_reg **cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 45 */;
	void cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 44 */;
	const struct sh_pfc_pin_range *cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 375 */;
	struct sh_pfc_window *cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 298 */;
	int (*cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 297 */)(struct sh_pfc_chip *);
	struct sh_pfc_chip {
		struct sh_pfc *pfc;
		struct gpio_chip gpio_chip;
		struct sh_pfc_window *mem;
		struct sh_pfc_gpio_data_reg *regs;
		struct sh_pfc_gpio_pin *pins;
	} cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 29 */;
	struct sh_pfc_chip *cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 276 */;
	unsigned long cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 260 */;
	unsigned int cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 259 */;
	struct sh_pfc *cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 258 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 256 */;
	unsigned cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 256 */;
	int cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 256 */;
	struct sh_pfc_gpio_pin {
		u8 dbit;
		u8 dreg;
	} cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 24 */;
	const short *cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 204 */;
	struct sh_pfc_gpio_data_reg {
		const struct pinmux_data_reg *info;
		u32 shadow;
	} cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 19 */;
	struct sh_pfc_gpio_data_reg *cocci_id/* drivers/pinctrl/sh-pfc/gpio.c 182 */;
}
