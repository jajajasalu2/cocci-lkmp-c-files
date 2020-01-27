cocci_test_suite() {
	unsigned char cocci_id/* drivers/input/keyboard/sh_keysc.c 91 */;
	struct sh_keysc_info *cocci_id/* drivers/input/keyboard/sh_keysc.c 85 */;
	struct sh_keysc_priv *cocci_id/* drivers/input/keyboard/sh_keysc.c 84 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/sh_keysc.c 83 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/sh_keysc.c 81 */;
	void *cocci_id/* drivers/input/keyboard/sh_keysc.c 81 */;
	int cocci_id/* drivers/input/keyboard/sh_keysc.c 81 */;
	const char *cocci_id/* drivers/input/keyboard/sh_keysc.c 73 */;
	struct device *cocci_id/* drivers/input/keyboard/sh_keysc.c 72 */;
	unsigned long *cocci_id/* drivers/input/keyboard/sh_keysc.c 72 */;
	unsigned long cocci_id/* drivers/input/keyboard/sh_keysc.c 61 */;
	void cocci_id/* drivers/input/keyboard/sh_keysc.c 60 */;
	struct sh_keysc_priv {
		void __iomem *iomem_base;
	DECLARE_BITMAP(last_keys,SH_KEYSC_MAXKEYS)
		;
		struct input_dev *input;
		struct sh_keysc_info pdata;
	} cocci_id/* drivers/input/keyboard/sh_keysc.c 34 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/sh_keysc.c 324 */;
	unsigned short cocci_id/* drivers/input/keyboard/sh_keysc.c 292 */;
	const struct {
		unsigned char kymd,keyout,keyin;
	} cocci_id/* drivers/input/keyboard/sh_keysc.c 23 */[];
	struct input_dev *cocci_id/* drivers/input/keyboard/sh_keysc.c 166 */;
	struct resource *cocci_id/* drivers/input/keyboard/sh_keysc.c 165 */;
}
