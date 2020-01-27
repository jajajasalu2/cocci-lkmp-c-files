cocci_test_suite() {
	struct syscon_gpio_priv {
		struct gpio_chip chip;
		struct regmap *syscon;
		const struct syscon_gpio_data *data;
		u32 dreg_offset;
		u32 dir_reg_offset;
	} cocci_id/* drivers/gpio/gpio-syscon.c 50 */;
	struct syscon_gpio_data {
		const char *compatible;
		unsigned int flags;
		unsigned int bit_count;
		unsigned int dat_bit_offset;
		unsigned int dir_bit_offset;
		void (*set)(struct gpio_chip *chip, unsigned offset,
			    int value);
	} cocci_id/* drivers/gpio/gpio-syscon.c 40 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-syscon.c 268 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-syscon.c 213 */;
	struct device *cocci_id/* drivers/gpio/gpio-syscon.c 211 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-syscon.c 209 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-syscon.c 192 */[];
	unsigned int cocci_id/* drivers/gpio/gpio-syscon.c 166 */;
	struct syscon_gpio_priv *cocci_id/* drivers/gpio/gpio-syscon.c 165 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-syscon.c 163 */;
	unsigned cocci_id/* drivers/gpio/gpio-syscon.c 163 */;
	int cocci_id/* drivers/gpio/gpio-syscon.c 163 */;
	void cocci_id/* drivers/gpio/gpio-syscon.c 163 */;
	u32 cocci_id/* drivers/gpio/gpio-syscon.c 140 */;
	u8 cocci_id/* drivers/gpio/gpio-syscon.c 139 */;
	const struct syscon_gpio_data cocci_id/* drivers/gpio/gpio-syscon.c 126 */;
}
