cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 70 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 68 */;
	int cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 68 */;
	u32 cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 48 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 47 */;
	struct pwrkey_drv_data *cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 46 */;
	struct timer_list *cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 44 */;
	void cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 44 */;
	struct pwrkey_drv_data {
		struct regmap *snvs;
		int irq;
		int keycode;
		int keystate;
		int wakeup;
		struct timer_list check_timer;
		struct input_dev *input;
		u8 minor_rev;
	} cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 33 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 204 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 198 */[];
	struct device_node *cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 113 */;
	void *cocci_id/* drivers/input/keyboard/snvs_pwrkey.c 102 */;
}
