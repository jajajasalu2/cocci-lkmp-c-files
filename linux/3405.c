cocci_test_suite() {
	u64 cocci_id/* drivers/pwm/pwm-mtk-disp.c 74 */;
	u32 cocci_id/* drivers/pwm/pwm-mtk-disp.c 73 */;
	struct mtk_disp_pwm *cocci_id/* drivers/pwm/pwm-mtk-disp.c 72 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-mtk-disp.c 69 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-mtk-disp.c 69 */;
	int cocci_id/* drivers/pwm/pwm-mtk-disp.c 69 */;
	void __iomem *cocci_id/* drivers/pwm/pwm-mtk-disp.c 60 */;
	struct mtk_disp_pwm cocci_id/* drivers/pwm/pwm-mtk-disp.c 54 */;
	struct mtk_disp_pwm {
		struct pwm_chip chip;
		const struct mtk_pwm_data *data;
		struct clk *clk_main;
		struct clk *clk_mm;
		void __iomem *base;
	} cocci_id/* drivers/pwm/pwm-mtk-disp.c 44 */;
	struct mtk_pwm_data {
		u32 enable_mask;
		unsigned int con0;
		u32 con0_sel;
		unsigned int con1;
		bool has_commit;
		unsigned int commit;
		unsigned int commit_mask;
		unsigned int bls_debug;
		u32 bls_debug_mask;
	} cocci_id/* drivers/pwm/pwm-mtk-disp.c 30 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-mtk-disp.c 291 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-mtk-disp.c 282 */[];
	const struct mtk_pwm_data cocci_id/* drivers/pwm/pwm-mtk-disp.c 252 */;
	struct resource *cocci_id/* drivers/pwm/pwm-mtk-disp.c 175 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-mtk-disp.c 172 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-mtk-disp.c 165 */;
	void cocci_id/* drivers/pwm/pwm-mtk-disp.c 154 */;
}
