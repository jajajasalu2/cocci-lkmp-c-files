cocci_test_suite() {
	struct resource *cocci_id/* drivers/input/keyboard/pxa930_rotary.c 87 */;
	struct pxa930_rotary_platform_data *cocci_id/* drivers/input/keyboard/pxa930_rotary.c 83 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/pxa930_rotary.c 81 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/pxa930_rotary.c 74 */;
	int cocci_id/* drivers/input/keyboard/pxa930_rotary.c 65 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/pxa930_rotary.c 37 */;
	void *cocci_id/* drivers/input/keyboard/pxa930_rotary.c 37 */;
	uint32_t cocci_id/* drivers/input/keyboard/pxa930_rotary.c 31 */;
	struct pxa930_rotary *cocci_id/* drivers/input/keyboard/pxa930_rotary.c 29 */;
	void cocci_id/* drivers/input/keyboard/pxa930_rotary.c 29 */;
	struct pxa930_rotary {
		struct input_dev *input_dev;
		void __iomem *mmio_base;
		int last_ercr;
		struct pxa930_rotary_platform_data *pdata;
	} cocci_id/* drivers/input/keyboard/pxa930_rotary.c 21 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/pxa930_rotary.c 184 */;
	struct pxa930_rotary cocci_id/* drivers/input/keyboard/pxa930_rotary.c 106 */;
}
