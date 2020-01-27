cocci_test_suite() {
	u32 cocci_id/* drivers/gpio/gpio-sta2x11.c 94 */;
	struct gsta_regs __iomem *cocci_id/* drivers/gpio/gpio-sta2x11.c 93 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-sta2x11.c 90 */;
	unsigned cocci_id/* drivers/gpio/gpio-sta2x11.c 90 */;
	void cocci_id/* drivers/gpio/gpio-sta2x11.c 53 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-sta2x11.c 412 */;
	struct gsta_gpio {
		spinlock_t lock;
		struct device *dev;
		void __iomem *reg_base;
		struct gsta_regs __iomem *regs[GSTA_NR_BLOCKS];
		struct gpio_chip gpio;
		int irq_base;
		unsigned irq_type[GSTA_NR_GPIO];
	} cocci_id/* drivers/gpio/gpio-sta2x11.c 38 */;
	struct pci_dev **cocci_id/* drivers/gpio/gpio-sta2x11.c 351 */;
	struct sta2x11_gpio_pdata *cocci_id/* drivers/gpio/gpio-sta2x11.c 348 */;
	struct pci_dev *cocci_id/* drivers/gpio/gpio-sta2x11.c 347 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-sta2x11.c 344 */;
	struct irq_chip_type *cocci_id/* drivers/gpio/gpio-sta2x11.c 304 */;
	struct irq_chip_generic *cocci_id/* drivers/gpio/gpio-sta2x11.c 303 */;
	struct gsta_gpio *cocci_id/* drivers/gpio/gpio-sta2x11.c 301 */;
	int cocci_id/* drivers/gpio/gpio-sta2x11.c 301 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-sta2x11.c 279 */;
	void *cocci_id/* drivers/gpio/gpio-sta2x11.c 279 */;
	unsigned int cocci_id/* drivers/gpio/gpio-sta2x11.c 261 */;
	unsigned long cocci_id/* drivers/gpio/gpio-sta2x11.c 218 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-sta2x11.c 210 */;
	struct gsta_regs {
		u32 dat;
		u32 dats;
		u32 datc;
		u32 pdis;
		u32 dir;
		u32 dirs;
		u32 dirc;
		u32 unused_1c;
		u32 afsela;
		u32 unused_24[7];
		u32 rimsc;
		u32 fimsc;
		u32 is;
		u32 ic;
	} cocci_id/* drivers/gpio/gpio-sta2x11.c 21 */;
}
