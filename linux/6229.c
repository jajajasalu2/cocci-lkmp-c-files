cocci_test_suite() {
	u16 cocci_id/* drivers/mfd/ucb1x00-ts.c 54 */;
	int cocci_id/* drivers/mfd/ucb1x00-ts.c 52 */;
	void __exit cocci_id/* drivers/mfd/ucb1x00-ts.c 434 */;
	int __init cocci_id/* drivers/mfd/ucb1x00-ts.c 429 */;
	struct ucb1x00_driver cocci_id/* drivers/mfd/ucb1x00-ts.c 424 */;
	struct ucb1x00_ts {
		struct input_dev *idev;
		struct ucb1x00 *ucb;
		spinlock_t irq_lock;
		unsigned irq_disabled;
		wait_queue_head_t irq_wait;
		struct task_struct *rtask;
		u16 x_res;
		u16 y_res;
		unsigned int adcsync:1;
	} cocci_id/* drivers/mfd/ucb1x00-ts.c 38 */;
	struct ucb1x00_ts cocci_id/* drivers/mfd/ucb1x00-ts.c 370 */;
	struct input_dev *cocci_id/* drivers/mfd/ucb1x00-ts.c 367 */;
	struct ucb1x00_dev *cocci_id/* drivers/mfd/ucb1x00-ts.c 364 */;
	void cocci_id/* drivers/mfd/ucb1x00-ts.c 347 */;
	unsigned long cocci_id/* drivers/mfd/ucb1x00-ts.c 304 */;
	irqreturn_t cocci_id/* drivers/mfd/ucb1x00-ts.c 288 */;
	signed long cocci_id/* drivers/mfd/ucb1x00-ts.c 215 */;
	unsigned int cocci_id/* drivers/mfd/ucb1x00-ts.c 214 */;
	bool cocci_id/* drivers/mfd/ucb1x00-ts.c 208 */;
	struct ucb1x00_ts *cocci_id/* drivers/mfd/ucb1x00-ts.c 206 */;
	void *cocci_id/* drivers/mfd/ucb1x00-ts.c 204 */;
}
