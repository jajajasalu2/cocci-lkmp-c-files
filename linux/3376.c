cocci_test_suite() {
	struct atmel_tcb_pwm_chip cocci_id/* drivers/pwm/pwm-atmel-tcb.c 58 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-atmel-tcb.c 503 */;
	struct atmel_tcb_channel *cocci_id/* drivers/pwm/pwm-atmel-tcb.c 485 */;
	struct atmel_tcb_pwm_chip {
		struct pwm_chip chip;
		spinlock_t lock;
		struct atmel_tc *tc;
		struct atmel_tcb_pwm_device *pwms[NPWM];
		struct atmel_tcb_channel bkup[NPWM / 2];
	} cocci_id/* drivers/pwm/pwm-atmel-tcb.c 48 */;
	struct device *cocci_id/* drivers/pwm/pwm-atmel-tcb.c 478 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-atmel-tcb.c 454 */[];
	struct atmel_tcb_channel {
		u32 enabled;
		u32 cmr;
		u32 ra;
		u32 rb;
		u32 rc;
	} cocci_id/* drivers/pwm/pwm-atmel-tcb.c 40 */;
	struct device_node *cocci_id/* drivers/pwm/pwm-atmel-tcb.c 382 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-atmel-tcb.c 379 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-atmel-tcb.c 369 */;
	struct atmel_tcb_pwm_device {
		enum pwm_polarity polarity;
		unsigned div;
		unsigned duty;
		unsigned period;
	} cocci_id/* drivers/pwm/pwm-atmel-tcb.c 33 */;
	u64 cocci_id/* drivers/pwm/pwm-atmel-tcb.c 309 */;
	unsigned long long cocci_id/* drivers/pwm/pwm-atmel-tcb.c 297 */;
	struct atmel_tc *cocci_id/* drivers/pwm/pwm-atmel-tcb.c 291 */;
	unsigned cocci_id/* drivers/pwm/pwm-atmel-tcb.c 288 */;
	struct atmel_tcb_pwm_device *cocci_id/* drivers/pwm/pwm-atmel-tcb.c 287 */;
	struct atmel_tcb_pwm_chip *cocci_id/* drivers/pwm/pwm-atmel-tcb.c 286 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-atmel-tcb.c 283 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-atmel-tcb.c 283 */;
	int cocci_id/* drivers/pwm/pwm-atmel-tcb.c 283 */;
	u32 cocci_id/* drivers/pwm/pwm-atmel-tcb.c 208 */;
	enum pwm_polarity cocci_id/* drivers/pwm/pwm-atmel-tcb.c 150 */;
	void __iomem *cocci_id/* drivers/pwm/pwm-atmel-tcb.c 146 */;
	void cocci_id/* drivers/pwm/pwm-atmel-tcb.c 141 */;
}
