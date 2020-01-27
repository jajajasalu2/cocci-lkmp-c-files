cocci_test_suite() {
	unsigned short cocci_id/* drivers/input/misc/cobalt_btns.c 94 */;
	struct resource *cocci_id/* drivers/input/misc/cobalt_btns.c 65 */;
	struct input_dev *cocci_id/* drivers/input/misc/cobalt_btns.c 64 */;
	struct buttons_dev *cocci_id/* drivers/input/misc/cobalt_btns.c 63 */;
	struct platform_device *cocci_id/* drivers/input/misc/cobalt_btns.c 61 */;
	int cocci_id/* drivers/input/misc/cobalt_btns.c 61 */;
	uint32_t cocci_id/* drivers/input/misc/cobalt_btns.c 38 */;
	void cocci_id/* drivers/input/misc/cobalt_btns.c 35 */;
	struct buttons_dev {
		unsigned short keymap[ARRAY_SIZE(cobalt_map)];
		int count[ARRAY_SIZE(cobalt_map)];
		void __iomem *reg;
	} cocci_id/* drivers/input/misc/cobalt_btns.c 29 */;
	const unsigned short cocci_id/* drivers/input/misc/cobalt_btns.c 18 */[];
	struct platform_driver cocci_id/* drivers/input/misc/cobalt_btns.c 122 */;
}
