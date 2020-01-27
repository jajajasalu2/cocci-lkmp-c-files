cocci_test_suite() {
	struct dln2_gpio_pin cocci_id/* drivers/gpio/gpio-dln2.c 90 */;
	__le16 cocci_id/* drivers/gpio/gpio-dln2.c 76 */;
	struct dln2_gpio_pin_val {
		__le16 pin __packed;
		u8 value;
	} cocci_id/* drivers/gpio/gpio-dln2.c 68 */;
	struct dln2_gpio_pin {
		__le16 pin;
	} cocci_id/* drivers/gpio/gpio-dln2.c 64 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-dln2.c 511 */;
	struct dln2_gpio {
		struct platform_device *pdev;
		struct gpio_chip gpio;
	DECLARE_BITMAP(output_enabled,DLN2_GPIO_MAX_PINS)
		;
	DECLARE_BITMAP(unmasked_irqs,DLN2_GPIO_MAX_PINS)
		;
	DECLARE_BITMAP(enabled_irqs,DLN2_GPIO_MAX_PINS)
		;
		int irq_type[DLN2_GPIO_MAX_PINS];
		struct mutex irq_lock;
	} cocci_id/* drivers/gpio/gpio-dln2.c 46 */;
	struct device *cocci_id/* drivers/gpio/gpio-dln2.c 442 */;
	const struct {
		__le16 count;
		__u8 type;
		__le16 pin;
		__u8 value;
	}__packed *cocci_id/* drivers/gpio/gpio-dln2.c 400 */;
	const void *cocci_id/* drivers/gpio/gpio-dln2.c 396 */;
	u16 cocci_id/* drivers/gpio/gpio-dln2.c 395 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-dln2.c 395 */;
	void cocci_id/* drivers/gpio/gpio-dln2.c 395 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-dln2.c 386 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-dln2.c 349 */;
	struct {
		__le16 pin;
		u8 type;
		__le16 period;
	}__packed cocci_id/* drivers/gpio/gpio-dln2.c 288 */;
	__le32 cocci_id/* drivers/gpio/gpio-dln2.c 275 */;
	unsigned long cocci_id/* drivers/gpio/gpio-dln2.c 272 */;
	struct dln2_gpio *cocci_id/* drivers/gpio/gpio-dln2.c 261 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-dln2.c 253 */;
	unsigned cocci_id/* drivers/gpio/gpio-dln2.c 253 */;
	int cocci_id/* drivers/gpio/gpio-dln2.c 253 */;
	unsigned int cocci_id/* drivers/gpio/gpio-dln2.c 208 */;
	struct dln2_gpio_pin_val cocci_id/* drivers/gpio/gpio-dln2.c 138 */;
}
