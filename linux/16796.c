cocci_test_suite() {
	u32 cocci_id/* drivers/input/misc/msm-vibrator.c 45 */;
	struct msm_vibrator {
		struct input_dev *input;
		struct mutex mutex;
		struct work_struct worker;
		void __iomem *base;
		struct regulator *vcc;
		struct clk *clk;
		struct gpio_desc *enable_gpio;
		u16 magnitude;
		bool enabled;
	} cocci_id/* drivers/input/misc/msm-vibrator.c 32 */;
	struct platform_driver cocci_id/* drivers/input/misc/msm-vibrator.c 269 */;
	const struct of_device_id cocci_id/* drivers/input/misc/msm-vibrator.c 262 */[];
	struct device *cocci_id/* drivers/input/misc/msm-vibrator.c 248 */;
	int __maybe_unused cocci_id/* drivers/input/misc/msm-vibrator.c 248 */;
	struct resource *cocci_id/* drivers/input/misc/msm-vibrator.c 157 */;
	struct platform_device *cocci_id/* drivers/input/misc/msm-vibrator.c 154 */;
	struct msm_vibrator *cocci_id/* drivers/input/misc/msm-vibrator.c 148 */;
	struct input_dev *cocci_id/* drivers/input/misc/msm-vibrator.c 146 */;
	void cocci_id/* drivers/input/misc/msm-vibrator.c 146 */;
	struct ff_effect *cocci_id/* drivers/input/misc/msm-vibrator.c 128 */;
	void *cocci_id/* drivers/input/misc/msm-vibrator.c 127 */;
	int cocci_id/* drivers/input/misc/msm-vibrator.c 127 */;
	struct msm_vibrator cocci_id/* drivers/input/misc/msm-vibrator.c 118 */;
	struct work_struct *cocci_id/* drivers/input/misc/msm-vibrator.c 115 */;
}
