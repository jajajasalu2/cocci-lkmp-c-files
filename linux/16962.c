cocci_test_suite() {
	bool cocci_id/* drivers/input/touchscreen/ts4800-ts.c 81 */;
	u16 cocci_id/* drivers/input/touchscreen/ts4800-ts.c 79 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/ts4800-ts.c 65 */;
	void cocci_id/* drivers/input/touchscreen/ts4800-ts.c 65 */;
	struct ts4800_ts {
		struct input_dev *input;
		struct device *dev;
		char phys[32];
		void __iomem *base;
		struct regmap *regmap;
		unsigned int reg;
		unsigned int bit;
		bool pendown;
		int debounce;
	} cocci_id/* drivers/input/touchscreen/ts4800-ts.c 34 */;
	struct platform_driver cocci_id/* drivers/input/touchscreen/ts4800-ts.c 211 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/ts4800-ts.c 205 */[];
	u32 cocci_id/* drivers/input/touchscreen/ts4800-ts.c 114 */;
	struct device_node *cocci_id/* drivers/input/touchscreen/ts4800-ts.c 112 */;
	struct device *cocci_id/* drivers/input/touchscreen/ts4800-ts.c 111 */;
	struct ts4800_ts *cocci_id/* drivers/input/touchscreen/ts4800-ts.c 109 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/ts4800-ts.c 108 */;
	int cocci_id/* drivers/input/touchscreen/ts4800-ts.c 108 */;
}
