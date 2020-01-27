cocci_test_suite() {
	unsigned long cocci_id/* drivers/reset/reset-meson-audio-arb.c 93 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/reset-meson-audio-arb.c 92 */;
	int cocci_id/* drivers/reset/reset-meson-audio-arb.c 92 */;
	struct meson_audio_arb_data cocci_id/* drivers/reset/reset-meson-audio-arb.c 85 */;
	u32 cocci_id/* drivers/reset/reset-meson-audio-arb.c 83 */;
	bool cocci_id/* drivers/reset/reset-meson-audio-arb.c 60 */;
	const struct meson_audio_arb_match_data cocci_id/* drivers/reset/reset-meson-audio-arb.c 38 */;
	const unsigned int cocci_id/* drivers/reset/reset-meson-audio-arb.c 29 */[];
	struct meson_audio_arb_match_data {
		const unsigned int *reset_bits;
		unsigned int reset_num;
	} cocci_id/* drivers/reset/reset-meson-audio-arb.c 22 */;
	struct platform_driver cocci_id/* drivers/reset/reset-meson-audio-arb.c 194 */;
	struct resource *cocci_id/* drivers/reset/reset-meson-audio-arb.c 141 */;
	struct meson_audio_arb_data *cocci_id/* drivers/reset/reset-meson-audio-arb.c 140 */;
	struct meson_audio_arb_data {
		struct reset_controller_dev rstc;
		void __iomem *regs;
		struct clk *clk;
		const unsigned int *reset_bits;
		spinlock_t lock;
	} cocci_id/* drivers/reset/reset-meson-audio-arb.c 14 */;
	const struct meson_audio_arb_match_data *cocci_id/* drivers/reset/reset-meson-audio-arb.c 139 */;
	struct device *cocci_id/* drivers/reset/reset-meson-audio-arb.c 138 */;
	struct platform_device *cocci_id/* drivers/reset/reset-meson-audio-arb.c 136 */;
	const struct of_device_id cocci_id/* drivers/reset/reset-meson-audio-arb.c 110 */[];
	const struct reset_control_ops cocci_id/* drivers/reset/reset-meson-audio-arb.c 104 */;
}
