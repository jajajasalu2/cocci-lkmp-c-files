cocci_test_suite() {
	u32 cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 80 */;
	void __iomem *cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 80 */;
	int __init cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 707 */;
	struct platform_driver cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 698 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 693 */[];
	struct plgpio {
		spinlock_t lock;
		void __iomem *base;
		struct clk *clk;
		struct gpio_chip chip;
		int (*p2o)(int pin);
		int (*o2p)(int offset);
		u32 p2o_regs;
		struct plgpio_regs regs;
#ifdef CONFIG_PM_SLEEP
		struct plgpio_regs *csave_regs;
#endif
	} cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 65 */;
	struct device *cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 646 */;
	struct gpio_irq_chip *cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 572 */;
	struct platform_device *cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 515 */;
	struct device_node *cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 447 */;
	struct plgpio_regs {
		u32 enb;
		u32 wdata;
		u32 dir;
		u32 rdata;
		u32 ie;
		u32 mis;
		u32 eit;
	} cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 41 */;
	int *cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 374 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 363 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 359 */;
	struct irq_chip cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 352 */;
	unsigned int cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 324 */;
	struct irq_data *cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 280 */;
	void cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 249 */;
	unsigned long cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 111 */;
	struct plgpio *cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 110 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 108 */;
	unsigned cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 108 */;
	int cocci_id/* drivers/pinctrl/spear/pinctrl-plgpio.c 108 */;
}
