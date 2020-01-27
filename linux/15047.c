cocci_test_suite() {
	void __exit cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 817 */;
	int __init cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 811 */;
	struct platform_driver cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 803 */;
	const struct rpm_smd_clk_desc *cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 746 */;
	struct clk_smd_rpm **cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 745 */;
	size_t cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 743 */;
	struct platform_device *cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 739 */;
	unsigned int cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 729 */;
	struct rpm_cc *cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 728 */;
	void *cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 726 */;
	struct of_phandle_args *cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 725 */;
	const struct of_device_id cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 715 */[];
	const struct rpm_smd_clk_desc cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 450 */;
	struct clk_smd_rpm *cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 423 */[];
	const struct clk_ops cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 404 */;
	struct clk_smd_rpm_req cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 370 */;
	struct qcom_smd_rpm *cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 367 */;
	int cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 367 */;
	unsigned long *cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 344 */;
	long cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 343 */;
	void cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 269 */;
	unsigned long cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 224 */;
	struct clk_hw *cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 220 */;
	struct clk_smd_rpm *cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 154 */;
	struct rpm_smd_clk_desc {
		struct clk_smd_rpm **clks;
		size_t num_clks;
	} cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 147 */;
	struct rpm_cc {
		struct qcom_rpm *rpm;
		struct clk_smd_rpm **clks;
		size_t num_clks;
	} cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 141 */;
	struct clk_smd_rpm_req {
		__le32 key;
		__le32 nbytes;
		__le32 value;
	} cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 135 */;
	struct clk_smd_rpm {
		const int rpm_res_type;
		const int rpm_key;
		const int rpm_clk_id;
		const int rpm_status_id;
		const bool active_only;
		bool enabled;
		bool branch;
		struct clk_smd_rpm *peer;
		struct clk_hw hw;
		unsigned long rate;
		struct qcom_smd_rpm *rpm;
	} cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 121 */;
	struct clk_smd_rpm cocci_id/* drivers/clk/qcom/clk-smd-rpm.c 119 */;
}
