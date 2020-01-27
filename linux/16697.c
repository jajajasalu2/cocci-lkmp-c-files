cocci_test_suite() {
	void cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 98 */;
	enum mtk_pmic_keys_lp_mode{LP_DISABLE, LP_ONEKEY, LP_TWOKEY,} cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 92 */;
	struct mtk_pmic_keys {
		struct input_dev *input_dev;
		struct device *dev;
		struct regmap *regmap;
		struct mtk_pmic_keys_info keys[MTK_PMIC_MAX_KEY_COUNT];
	} cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 85 */;
	struct mtk_pmic_keys_info {
		struct mtk_pmic_keys *keys;
		const struct mtk_pmic_keys_regs *regs;
		unsigned int keycode;
		int irq;
		bool wakeup:1;
	} cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 77 */;
	const struct mtk_pmic_regs cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 67 */;
	struct mtk_pmic_regs {
		const struct mtk_pmic_keys_regs keys_regs[MTK_PMIC_MAX_KEY_COUNT];
		u32 pmic_rst_reg;
	} cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 52 */;
	struct mtk_pmic_keys_regs {
		u32 deb_reg;
		u32 deb_mask;
		u32 intsel_reg;
		u32 intsel_mask;
	} cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 36 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 321 */;
	const struct of_device_id *cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 247 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 246 */;
	const struct mtk_pmic_regs *cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 245 */;
	struct device_node *cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 243 */;
	struct mt6397_chip *cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 242 */;
	unsigned int cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 241 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 238 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 225 */[];
	struct device *cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 209 */;
	int __maybe_unused cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 209 */;
	struct mtk_pmic_keys_info *cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 169 */;
	struct mtk_pmic_keys *cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 168 */;
	int cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 168 */;
	u32 cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 151 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 148 */;
	void *cocci_id/* drivers/input/keyboard/mtk-pmic-keys.c 148 */;
}
