cocci_test_suite() {
	u32 cocci_id/* drivers/input/keyboard/davinci_keyscan.c 67 */;
	struct davinci_ks_platform_data *cocci_id/* drivers/input/keyboard/davinci_keyscan.c 66 */;
	struct device *cocci_id/* drivers/input/keyboard/davinci_keyscan.c 65 */;
	struct davinci_ks *cocci_id/* drivers/input/keyboard/davinci_keyscan.c 63 */;
	int __init cocci_id/* drivers/input/keyboard/davinci_keyscan.c 63 */;
	struct davinci_ks {
		struct input_dev *input;
		struct davinci_ks_platform_data *pdata;
		int irq;
		void __iomem *base;
		resource_size_t pbase;
		size_t base_size;
		unsigned short keymap[];
	} cocci_id/* drivers/input/keyboard/davinci_keyscan.c 52 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/davinci_keyscan.c 304 */;
	unsigned short cocci_id/* drivers/input/keyboard/davinci_keyscan.c 175 */;
	struct davinci_ks cocci_id/* drivers/input/keyboard/davinci_keyscan.c 174 */;
	struct resource *cocci_id/* drivers/input/keyboard/davinci_keyscan.c 156 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/davinci_keyscan.c 155 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/davinci_keyscan.c 152 */;
	bool cocci_id/* drivers/input/keyboard/davinci_keyscan.c 112 */;
	unsigned short *cocci_id/* drivers/input/keyboard/davinci_keyscan.c 109 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/davinci_keyscan.c 105 */;
	void *cocci_id/* drivers/input/keyboard/davinci_keyscan.c 105 */;
	int cocci_id/* drivers/input/keyboard/davinci_keyscan.c 105 */;
}
