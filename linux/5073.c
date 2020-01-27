cocci_test_suite() {
	struct irq_data *cocci_id/* drivers/gpio/gpio-rcar.c 88 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-rcar.c 599 */;
	const char *cocci_id/* drivers/gpio/gpio-rcar.c 440 */;
	struct device *cocci_id/* drivers/gpio/gpio-rcar.c 439 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-rcar.c 438 */;
	struct resource *cocci_id/* drivers/gpio/gpio-rcar.c 436 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-rcar.c 433 */;
	struct of_phandle_args cocci_id/* drivers/gpio/gpio-rcar.c 414 */;
	const struct gpio_rcar_info *cocci_id/* drivers/gpio/gpio-rcar.c 413 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-rcar.c 412 */;
	unsigned int *cocci_id/* drivers/gpio/gpio-rcar.c 410 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-rcar.c 362 */[];
	const struct gpio_rcar_info cocci_id/* drivers/gpio/gpio-rcar.c 352 */;
	struct gpio_rcar_priv {
		void __iomem *base;
		spinlock_t lock;
		struct device *dev;
		struct gpio_chip gpio_chip;
		struct irq_chip irq_chip;
		unsigned int irq_parent;
		atomic_t wakeup_path;
		bool has_outdtsel;
		bool has_both_edge_trigger;
		struct gpio_rcar_bank_info bank_info;
	} cocci_id/* drivers/gpio/gpio-rcar.c 35 */;
	struct gpio_rcar_info {
		bool has_outdtsel;
		bool has_both_edge_trigger;
	} cocci_id/* drivers/gpio/gpio-rcar.c 347 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-rcar.c 316 */;
	u32 cocci_id/* drivers/gpio/gpio-rcar.c 296 */;
	unsigned cocci_id/* drivers/gpio/gpio-rcar.c 288 */;
	int cocci_id/* drivers/gpio/gpio-rcar.c 288 */;
	struct gpio_rcar_bank_info {
		u32 iointsel;
		u32 inoutsel;
		u32 outdt;
		u32 posneg;
		u32 edglevel;
		u32 bothedge;
		u32 intmsk;
	} cocci_id/* drivers/gpio/gpio-rcar.c 25 */;
	unsigned long cocci_id/* drivers/gpio/gpio-rcar.c 222 */;
	struct gpio_rcar_priv *cocci_id/* drivers/gpio/gpio-rcar.c 221 */;
	bool cocci_id/* drivers/gpio/gpio-rcar.c 219 */;
	unsigned int cocci_id/* drivers/gpio/gpio-rcar.c 218 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-rcar.c 217 */;
	void cocci_id/* drivers/gpio/gpio-rcar.c 217 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-rcar.c 199 */;
	void *cocci_id/* drivers/gpio/gpio-rcar.c 199 */;
}
