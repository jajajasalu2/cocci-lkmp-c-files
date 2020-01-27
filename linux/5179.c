cocci_test_suite() {
	struct {
		spinlock_t lock;
		struct device *dev;
		struct gpio_chip chip;
		struct resource *gpio_base;
		struct resource *pm_base;
		struct ichx_desc *desc;
		u32 orig_gpio_ctrl;
		u8 use_gpio;
		int outlvl_cache[3];
	} cocci_id/* drivers/gpio/gpio-ich.c 87 */;
	struct ichx_desc {
		uint ngpio;
		const u8 *regs[3];
		const u8 *reglen;
		bool have_blink;
		bool uses_gpe0;
		u32 use_sel_ignore[3];
		int (*request)(struct gpio_chip *chip, unsigned offset);
		int (*get)(struct gpio_chip *chip, unsigned offset);
		bool use_outlvl_cache;
	} cocci_id/* drivers/gpio/gpio-ich.c 59 */;
	const u8 cocci_id/* drivers/gpio/gpio-ich.c 52 */[3];
	struct platform_driver cocci_id/* drivers/gpio/gpio-ich.c 481 */;
	const u8 cocci_id/* drivers/gpio/gpio-ich.c 46 */[4][3];
	struct resource *cocci_id/* drivers/gpio/gpio-ich.c 391 */;
	struct lpc_ich_info *cocci_id/* drivers/gpio/gpio-ich.c 390 */;
	struct device *cocci_id/* drivers/gpio/gpio-ich.c 389 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-ich.c 387 */;
	u8 cocci_id/* drivers/gpio/gpio-ich.c 369 */;
	const char *cocci_id/* drivers/gpio/gpio-ich.c 369 */;
	struct ichx_desc cocci_id/* drivers/gpio/gpio-ich.c 358 */;
	enum GPIO_REG{GPIO_USE_SEL=0, GPIO_IO_SEL, GPIO_LVL, GPO_BLINK,} cocci_id/* drivers/gpio/gpio-ich.c 28 */;
	void cocci_id/* drivers/gpio/gpio-ich.c 257 */;
	u32 cocci_id/* drivers/gpio/gpio-ich.c 202 */;
	unsigned long cocci_id/* drivers/gpio/gpio-ich.c 201 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-ich.c 199 */;
	unsigned cocci_id/* drivers/gpio/gpio-ich.c 199 */;
	int cocci_id/* drivers/gpio/gpio-ich.c 199 */;
	bool cocci_id/* drivers/gpio/gpio-ich.c 155 */;
}
