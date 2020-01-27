cocci_test_suite() {
	void cocci_id/* drivers/gpio/gpio-amd-fch.c 98 */;
	unsigned long cocci_id/* drivers/gpio/gpio-amd-fch.c 50 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-amd-fch.c 47 */;
	int cocci_id/* drivers/gpio/gpio-amd-fch.c 47 */;
	u32 cocci_id/* drivers/gpio/gpio-amd-fch.c 44 */;
	unsigned int cocci_id/* drivers/gpio/gpio-amd-fch.c 42 */;
	struct amd_fch_gpio_priv *cocci_id/* drivers/gpio/gpio-amd-fch.c 41 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-amd-fch.c 41 */;
	struct amd_fch_gpio_priv {
		struct gpio_chip gc;
		void __iomem *base;
		struct amd_fch_gpio_pdata *pdata;
		spinlock_t lock;
	} cocci_id/* drivers/gpio/gpio-amd-fch.c 34 */;
	const struct resource cocci_id/* drivers/gpio/gpio-amd-fch.c 28 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-amd-fch.c 180 */;
	struct amd_fch_gpio_pdata *cocci_id/* drivers/gpio/gpio-amd-fch.c 142 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-amd-fch.c 139 */;
}
