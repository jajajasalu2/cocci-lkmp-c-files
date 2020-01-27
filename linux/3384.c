cocci_test_suite() {
	struct pwm_state *cocci_id/* drivers/pwm/pwm-rockchip.c 62 */;
	struct rockchip_pwm_chip cocci_id/* drivers/pwm/pwm-rockchip.c 57 */;
	struct rockchip_pwm_data {
		struct rockchip_pwm_regs regs;
		unsigned int prescaler;
		bool supports_polarity;
		bool supports_lock;
		u32 enable_conf;
	} cocci_id/* drivers/pwm/pwm-rockchip.c 47 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-rockchip.c 407 */;
	struct rockchip_pwm_regs {
		unsigned long duty;
		unsigned long period;
		unsigned long cntr;
		unsigned long ctrl;
	} cocci_id/* drivers/pwm/pwm-rockchip.c 40 */;
	struct rockchip_pwm_chip {
		struct pwm_chip chip;
		struct clk *clk;
		struct clk *pclk;
		const struct rockchip_pwm_data *data;
		void __iomem *base;
	} cocci_id/* drivers/pwm/pwm-rockchip.c 32 */;
	struct resource *cocci_id/* drivers/pwm/pwm-rockchip.c 295 */;
	const struct of_device_id *cocci_id/* drivers/pwm/pwm-rockchip.c 293 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-rockchip.c 291 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-rockchip.c 282 */[];
	const struct rockchip_pwm_data cocci_id/* drivers/pwm/pwm-rockchip.c 227 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-rockchip.c 221 */;
	bool cocci_id/* drivers/pwm/pwm-rockchip.c 190 */;
	struct pwm_state cocci_id/* drivers/pwm/pwm-rockchip.c 189 */;
	struct rockchip_pwm_chip *cocci_id/* drivers/pwm/pwm-rockchip.c 188 */;
	const struct pwm_state *cocci_id/* drivers/pwm/pwm-rockchip.c 186 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-rockchip.c 185 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-rockchip.c 185 */;
	int cocci_id/* drivers/pwm/pwm-rockchip.c 185 */;
	u32 cocci_id/* drivers/pwm/pwm-rockchip.c 107 */;
	u64 cocci_id/* drivers/pwm/pwm-rockchip.c 106 */;
	unsigned long cocci_id/* drivers/pwm/pwm-rockchip.c 105 */;
	void cocci_id/* drivers/pwm/pwm-rockchip.c 101 */;
}
