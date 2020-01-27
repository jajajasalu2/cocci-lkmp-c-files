cocci_test_suite() {
	u64 cocci_id/* drivers/media/rc/ir-rx51.c 72 */;
	ktime_t cocci_id/* drivers/media/rc/ir-rx51.c 58 */;
	enum hrtimer_restart cocci_id/* drivers/media/rc/ir-rx51.c 55 */;
	struct hrtimer *cocci_id/* drivers/media/rc/ir-rx51.c 55 */;
	struct pwm_device *cocci_id/* drivers/media/rc/ir-rx51.c 45 */;
	struct ir_rx51 *cocci_id/* drivers/media/rc/ir-rx51.c 43 */;
	int cocci_id/* drivers/media/rc/ir-rx51.c 43 */;
	void cocci_id/* drivers/media/rc/ir-rx51.c 38 */;
	struct platform_driver cocci_id/* drivers/media/rc/ir-rx51.c 282 */;
	const struct of_device_id cocci_id/* drivers/media/rc/ir-rx51.c 274 */[];
	struct platform_device *cocci_id/* drivers/media/rc/ir-rx51.c 229 */;
	pm_message_t cocci_id/* drivers/media/rc/ir-rx51.c 199 */;
	struct ir_rx51 {
		struct rc_dev *rcdev;
		struct pwm_device *pwm;
		struct hrtimer timer;
		struct device *dev;
		wait_queue_head_t wqueue;
		unsigned int freq;
		unsigned int duty_cycle;
		int wbuf[WBUF_LEN];
		int wbuf_index;
		unsigned long device_is_open;
	} cocci_id/* drivers/media/rc/ir-rx51.c 19 */;
	u32 cocci_id/* drivers/media/rc/ir-rx51.c 176 */;
	struct ir_rx51 cocci_id/* drivers/media/rc/ir-rx51.c 171 */;
	struct rc_dev *cocci_id/* drivers/media/rc/ir-rx51.c 142 */;
	unsigned int cocci_id/* drivers/media/rc/ir-rx51.c 105 */;
	unsigned int *cocci_id/* drivers/media/rc/ir-rx51.c 104 */;
}
