cocci_test_suite() {
	struct neponset_drvdata {
		void __iomem *base;
		struct platform_device *sa1111;
		struct platform_device *smc91x;
		unsigned irq_base;
		struct gpio_chip *gpio[4];
	} cocci_id/* arch/arm/mach-sa1100/neponset.c 76 */;
	const char *cocci_id/* arch/arm/mach-sa1100/neponset.c 72 */[];
	struct neponset_gpio_chip cocci_id/* arch/arm/mach-sa1100/neponset.c 57 */;
	void cocci_id/* arch/arm/mach-sa1100/neponset.c 55 */(void);
	int __init cocci_id/* arch/arm/mach-sa1100/neponset.c 435 */;
	void cocci_id/* arch/arm/mach-sa1100/neponset.c 435 */;
	struct platform_driver cocci_id/* arch/arm/mach-sa1100/neponset.c 426 */;
	const struct dev_pm_ops cocci_id/* arch/arm/mach-sa1100/neponset.c 417 */;
	struct smc91x_platdata cocci_id/* arch/arm/mach-sa1100/neponset.c 250 */;
	struct platform_device_info cocci_id/* arch/arm/mach-sa1100/neponset.c 233 */;
	struct resource cocci_id/* arch/arm/mach-sa1100/neponset.c 229 */[];
	struct resource *cocci_id/* arch/arm/mach-sa1100/neponset.c 228 */;
	struct platform_device *cocci_id/* arch/arm/mach-sa1100/neponset.c 225 */;
	struct sa1111_platform_data cocci_id/* arch/arm/mach-sa1100/neponset.c 221 */;
	struct gpio_chip *cocci_id/* arch/arm/mach-sa1100/neponset.c 209 */;
	const char *const*cocci_id/* arch/arm/mach-sa1100/neponset.c 207 */;
	bool cocci_id/* arch/arm/mach-sa1100/neponset.c 207 */;
	unsigned cocci_id/* arch/arm/mach-sa1100/neponset.c 207 */;
	const char *cocci_id/* arch/arm/mach-sa1100/neponset.c 206 */;
	struct device *cocci_id/* arch/arm/mach-sa1100/neponset.c 206 */;
	void __iomem *cocci_id/* arch/arm/mach-sa1100/neponset.c 206 */;
	struct gpio_chip **cocci_id/* arch/arm/mach-sa1100/neponset.c 205 */;
	int cocci_id/* arch/arm/mach-sa1100/neponset.c 205 */;
	struct irq_chip cocci_id/* arch/arm/mach-sa1100/neponset.c 198 */;
	struct irq_data *cocci_id/* arch/arm/mach-sa1100/neponset.c 194 */;
	unsigned int cocci_id/* arch/arm/mach-sa1100/neponset.c 144 */;
	struct irq_desc *cocci_id/* arch/arm/mach-sa1100/neponset.c 141 */;
	unsigned long cocci_id/* arch/arm/mach-sa1100/neponset.c 126 */;
	struct neponset_drvdata *cocci_id/* arch/arm/mach-sa1100/neponset.c 121 */;
	struct gpiod_lookup_table cocci_id/* arch/arm/mach-sa1100/neponset.c 108 */;
}
