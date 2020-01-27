cocci_test_suite() {
	u32 cocci_id/* drivers/gpio/gpio-mt7621.c 98 */;
	unsigned long cocci_id/* drivers/gpio/gpio-mt7621.c 92 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-mt7621.c 89 */;
	void *cocci_id/* drivers/gpio/gpio-mt7621.c 87 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-mt7621.c 86 */;
	struct mtk_gc cocci_id/* drivers/gpio/gpio-mt7621.c 63 */;
	struct mtk {
		struct device *dev;
		void __iomem *base;
		int gpio_irq;
		struct mtk_gc gc_map[MTK_BANK_CNT];
	} cocci_id/* drivers/gpio/gpio-mt7621.c 53 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-mt7621.c 330 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-mt7621.c 324 */[];
	struct mtk_gc {
		struct irq_chip irq_chip;
		struct gpio_chip chip;
		spinlock_t lock;
		int bank;
		u32 rising;
		u32 falling;
		u32 hlevel;
		u32 llevel;
	} cocci_id/* drivers/gpio/gpio-mt7621.c 32 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-mt7621.c 295 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-mt7621.c 252 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-mt7621.c 215 */;
	struct mtk_gc *cocci_id/* drivers/gpio/gpio-mt7621.c 214 */;
	struct mtk *cocci_id/* drivers/gpio/gpio-mt7621.c 213 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-mt7621.c 211 */;
	struct device *cocci_id/* drivers/gpio/gpio-mt7621.c 210 */;
	int cocci_id/* drivers/gpio/gpio-mt7621.c 209 */;
	const struct of_phandle_args *cocci_id/* drivers/gpio/gpio-mt7621.c 195 */;
	u32 *cocci_id/* drivers/gpio/gpio-mt7621.c 195 */;
	unsigned int cocci_id/* drivers/gpio/gpio-mt7621.c 151 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-mt7621.c 130 */;
	void cocci_id/* drivers/gpio/gpio-mt7621.c 129 */;
}
