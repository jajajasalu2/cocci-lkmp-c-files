cocci_test_suite() {
	void __exit cocci_id/* drivers/clk/qcom/clk-rpm.c 651 */;
	int __init cocci_id/* drivers/clk/qcom/clk-rpm.c 645 */;
	struct platform_driver cocci_id/* drivers/clk/qcom/clk-rpm.c 636 */;
	const struct rpm_clk_desc *cocci_id/* drivers/clk/qcom/clk-rpm.c 575 */;
	struct clk_rpm **cocci_id/* drivers/clk/qcom/clk-rpm.c 574 */;
	struct qcom_rpm *cocci_id/* drivers/clk/qcom/clk-rpm.c 573 */;
	size_t cocci_id/* drivers/clk/qcom/clk-rpm.c 572 */;
	struct platform_device *cocci_id/* drivers/clk/qcom/clk-rpm.c 568 */;
	unsigned int cocci_id/* drivers/clk/qcom/clk-rpm.c 558 */;
	void *cocci_id/* drivers/clk/qcom/clk-rpm.c 555 */;
	struct of_phandle_args *cocci_id/* drivers/clk/qcom/clk-rpm.c 554 */;
	const struct of_device_id cocci_id/* drivers/clk/qcom/clk-rpm.c 546 */[];
	const struct rpm_clk_desc cocci_id/* drivers/clk/qcom/clk-rpm.c 541 */;
	struct clk_rpm *cocci_id/* drivers/clk/qcom/clk-rpm.c 515 */[];
	const struct clk_ops cocci_id/* drivers/clk/qcom/clk-rpm.c 453 */;
	unsigned long *cocci_id/* drivers/clk/qcom/clk-rpm.c 410 */;
	long cocci_id/* drivers/clk/qcom/clk-rpm.c 409 */;
	void cocci_id/* drivers/clk/qcom/clk-rpm.c 357 */;
	u32 cocci_id/* drivers/clk/qcom/clk-rpm.c 346 */;
	struct clk_rpm *cocci_id/* drivers/clk/qcom/clk-rpm.c 345 */;
	struct clk_hw *cocci_id/* drivers/clk/qcom/clk-rpm.c 343 */;
	int cocci_id/* drivers/clk/qcom/clk-rpm.c 343 */;
	struct rpm_cc *cocci_id/* drivers/clk/qcom/clk-rpm.c 306 */;
	unsigned long cocci_id/* drivers/clk/qcom/clk-rpm.c 224 */;
	struct rpm_clk_desc {
		struct clk_rpm **clks;
		size_t num_clks;
	} cocci_id/* drivers/clk/qcom/clk-rpm.c 157 */;
	struct rpm_cc {
		struct qcom_rpm *rpm;
		struct clk_rpm **clks;
		size_t num_clks;
		u32 xo_buffer_value;
		struct mutex xo_lock;
	} cocci_id/* drivers/clk/qcom/clk-rpm.c 149 */;
	struct clk_rpm {
		const int rpm_clk_id;
		const int xo_offset;
		const bool active_only;
		unsigned long rate;
		bool enabled;
		bool branch;
		struct clk_rpm *peer;
		struct clk_hw hw;
		struct qcom_rpm *rpm;
		struct rpm_cc *rpm_cc;
	} cocci_id/* drivers/clk/qcom/clk-rpm.c 136 */;
	struct rpm_cc cocci_id/* drivers/clk/qcom/clk-rpm.c 134 */;
	struct clk_rpm cocci_id/* drivers/clk/qcom/clk-rpm.c 132 */;
}
