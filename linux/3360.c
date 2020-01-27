cocci_test_suite() {
	void __iomem *cocci_id/* drivers/pwm/pwm-renesas-tpu.c 94 */;
	struct tpu_device {
		struct platform_device *pdev;
		struct pwm_chip chip;
		spinlock_t lock;
		void __iomem *base;
		struct clk *clk;
	} cocci_id/* drivers/pwm/pwm-renesas-tpu.c 81 */;
	struct tpu_pwm_device {
		bool timer_on;
		struct tpu_device *tpu;
		unsigned int channel;
		enum pwm_polarity polarity;
		unsigned int prescaler;
		u16 period;
		u16 duty;
	} cocci_id/* drivers/pwm/pwm-renesas-tpu.c 69 */;
	struct tpu_device cocci_id/* drivers/pwm/pwm-renesas-tpu.c 67 */;
	enum tpu_pin_state{TPU_PIN_INACTIVE, TPU_PIN_PWM, TPU_PIN_ACTIVE,} cocci_id/* drivers/pwm/pwm-renesas-tpu.c 61 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-renesas-tpu.c 457 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-renesas-tpu.c 446 */[];
	struct resource *cocci_id/* drivers/pwm/pwm-renesas-tpu.c 386 */;
	struct tpu_device *cocci_id/* drivers/pwm/pwm-renesas-tpu.c 385 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-renesas-tpu.c 383 */;
	int cocci_id/* drivers/pwm/pwm-renesas-tpu.c 383 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-renesas-tpu.c 369 */;
	void cocci_id/* drivers/pwm/pwm-renesas-tpu.c 359 */;
	enum pwm_polarity cocci_id/* drivers/pwm/pwm-renesas-tpu.c 328 */;
	u32 cocci_id/* drivers/pwm/pwm-renesas-tpu.c 252 */;
	bool cocci_id/* drivers/pwm/pwm-renesas-tpu.c 251 */;
	unsigned int cocci_id/* drivers/pwm/pwm-renesas-tpu.c 250 */;
	struct tpu_pwm_device *cocci_id/* drivers/pwm/pwm-renesas-tpu.c 248 */;
	const unsigned int cocci_id/* drivers/pwm/pwm-renesas-tpu.c 247 */[];
	struct pwm_device *cocci_id/* drivers/pwm/pwm-renesas-tpu.c 244 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-renesas-tpu.c 244 */;
	u16 cocci_id/* drivers/pwm/pwm-renesas-tpu.c 130 */;
	unsigned long cocci_id/* drivers/pwm/pwm-renesas-tpu.c 129 */;
	const char *constcocci_id/* drivers/pwm/pwm-renesas-tpu.c 103 */[];
	enum tpu_pin_state cocci_id/* drivers/pwm/pwm-renesas-tpu.c 101 */;
}
