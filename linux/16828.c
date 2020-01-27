cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/input/misc/palmas-pwrbutton.c 92 */;
	void *cocci_id/* drivers/input/misc/palmas-pwrbutton.c 92 */;
	int cocci_id/* drivers/input/misc/palmas-pwrbutton.c 67 */;
	unsigned int cocci_id/* drivers/input/misc/palmas-pwrbutton.c 66 */;
	struct input_dev *cocci_id/* drivers/input/misc/palmas-pwrbutton.c 65 */;
	struct palmas_pwron cocci_id/* drivers/input/misc/palmas-pwrbutton.c 63 */;
	struct palmas_pwron *cocci_id/* drivers/input/misc/palmas-pwrbutton.c 62 */;
	struct work_struct *cocci_id/* drivers/input/misc/palmas-pwrbutton.c 60 */;
	void cocci_id/* drivers/input/misc/palmas-pwrbutton.c 60 */;
	struct palmas_pwron_config {
		u8 long_press_time_val;
		u8 pwron_debounce_val;
	} cocci_id/* drivers/input/misc/palmas-pwrbutton.c 51 */;
	struct palmas_pwron {
		struct palmas *palmas;
		struct input_dev *input_dev;
		struct delayed_work input_work;
		int irq;
	} cocci_id/* drivers/input/misc/palmas-pwrbutton.c 39 */;
	struct platform_driver cocci_id/* drivers/input/misc/palmas-pwrbutton.c 315 */;
	const struct of_device_id cocci_id/* drivers/input/misc/palmas-pwrbutton.c 307 */[];
	int __maybe_unused cocci_id/* drivers/input/misc/palmas-pwrbutton.c 292 */;
	struct palmas_pwron_config cocci_id/* drivers/input/misc/palmas-pwrbutton.c 168 */;
	struct palmas *cocci_id/* drivers/input/misc/palmas-pwrbutton.c 164 */;
	struct platform_device *cocci_id/* drivers/input/misc/palmas-pwrbutton.c 162 */;
	int cocci_id/* drivers/input/misc/palmas-pwrbutton.c 119 */[];
	u8 cocci_id/* drivers/input/misc/palmas-pwrbutton.c 118 */[];
	u32 cocci_id/* drivers/input/misc/palmas-pwrbutton.c 116 */;
	struct device_node *cocci_id/* drivers/input/misc/palmas-pwrbutton.c 115 */;
	struct palmas_pwron_config *cocci_id/* drivers/input/misc/palmas-pwrbutton.c 113 */;
	struct device *cocci_id/* drivers/input/misc/palmas-pwrbutton.c 112 */;
}
