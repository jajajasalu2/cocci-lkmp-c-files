cocci_test_suite() {
	struct meson_pwm_data {
		const char *const*parent_names;
		unsigned int num_parents;
	} cocci_id/* drivers/pwm/pwm-meson.c 98 */;
	struct meson_pwm_channel {
		unsigned int hi;
		unsigned int lo;
		u8 pre_div;
		struct clk *clk_parent;
		struct clk_mux mux;
		struct clk *clk;
	} cocci_id/* drivers/pwm/pwm-meson.c 88 */;
	struct meson_pwm_channel_data {
		u8 reg_offset;
		u8 clk_sel_shift;
		u8 clk_div_shift;
		u32 clk_en_mask;
		u32 pwm_en_mask;
	} cocci_id/* drivers/pwm/pwm-meson.c 65 */[MESON_NUM_PWMS];
	struct platform_driver cocci_id/* drivers/pwm/pwm-meson.c 584 */;
	struct resource *cocci_id/* drivers/pwm/pwm-meson.c 540 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-meson.c 537 */;
	char cocci_id/* drivers/pwm/pwm-meson.c 497 */[255];
	struct clk_init_data cocci_id/* drivers/pwm/pwm-meson.c 495 */;
	struct device *cocci_id/* drivers/pwm/pwm-meson.c 494 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-meson.c 455 */[];
	const struct meson_pwm_data cocci_id/* drivers/pwm/pwm-meson.c 423 */;
	const char *constcocci_id/* drivers/pwm/pwm-meson.c 419 */[];
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-meson.c 371 */;
	struct pwm_state *cocci_id/* drivers/pwm/pwm-meson.c 331 */;
	u32 cocci_id/* drivers/pwm/pwm-meson.c 311 */;
	struct meson_pwm *cocci_id/* drivers/pwm/pwm-meson.c 271 */;
	struct meson_pwm_channel *cocci_id/* drivers/pwm/pwm-meson.c 270 */;
	const struct pwm_state *cocci_id/* drivers/pwm/pwm-meson.c 268 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-meson.c 267 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-meson.c 267 */;
	int cocci_id/* drivers/pwm/pwm-meson.c 267 */;
	void cocci_id/* drivers/pwm/pwm-meson.c 253 */;
	struct meson_pwm_channel_data *cocci_id/* drivers/pwm/pwm-meson.c 228 */;
	u64 cocci_id/* drivers/pwm/pwm-meson.c 182 */;
	unsigned long cocci_id/* drivers/pwm/pwm-meson.c 166 */;
	unsigned int cocci_id/* drivers/pwm/pwm-meson.c 165 */;
	struct meson_pwm cocci_id/* drivers/pwm/pwm-meson.c 117 */;
	struct meson_pwm {
		struct pwm_chip chip;
		const struct meson_pwm_data *data;
		struct meson_pwm_channel channels[MESON_NUM_PWMS];
		void __iomem *base;
		spinlock_t lock;
	} cocci_id/* drivers/pwm/pwm-meson.c 103 */;
}
