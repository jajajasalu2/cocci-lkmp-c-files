cocci_test_suite() {
	struct clk_rpmh_desc {
		struct clk_hw **clks;
		size_t num_clks;
	} cocci_id/* drivers/clk/qcom/clk-rpmh.c 66 */;
	struct clk_rpmh {
		struct clk_hw hw;
		const char *res_name;
		u8 div;
		u32 res_addr;
		u32 res_on_val;
		u32 state;
		u32 aggr_state;
		u32 last_sent_aggr_state;
		u32 valid_state_mask;
		u32 unit;
		struct device *dev;
		struct clk_rpmh *peer;
	} cocci_id/* drivers/clk/qcom/clk-rpmh.c 51 */;
	void __exit cocci_id/* drivers/clk/qcom/clk-rpmh.c 505 */;
	int __init cocci_id/* drivers/clk/qcom/clk-rpmh.c 499 */;
	struct platform_driver cocci_id/* drivers/clk/qcom/clk-rpmh.c 491 */;
	const struct of_device_id cocci_id/* drivers/clk/qcom/clk-rpmh.c 483 */[];
	void *cocci_id/* drivers/clk/qcom/clk-rpmh.c 472 */;
	const struct bcm_db *cocci_id/* drivers/clk/qcom/clk-rpmh.c 437 */;
	size_t cocci_id/* drivers/clk/qcom/clk-rpmh.c 436 */;
	const char *cocci_id/* drivers/clk/qcom/clk-rpmh.c 434 */;
	const struct clk_rpmh_desc *cocci_id/* drivers/clk/qcom/clk-rpmh.c 424 */;
	struct clk_hw **cocci_id/* drivers/clk/qcom/clk-rpmh.c 422 */;
	struct platform_device *cocci_id/* drivers/clk/qcom/clk-rpmh.c 420 */;
	unsigned int cocci_id/* drivers/clk/qcom/clk-rpmh.c 410 */;
	struct clk_rpmh_desc *cocci_id/* drivers/clk/qcom/clk-rpmh.c 409 */;
	struct of_phandle_args *cocci_id/* drivers/clk/qcom/clk-rpmh.c 406 */;
	const struct clk_rpmh_desc cocci_id/* drivers/clk/qcom/clk-rpmh.c 401 */;
	struct clk_hw *cocci_id/* drivers/clk/qcom/clk-rpmh.c 388 */[];
	const struct clk_ops cocci_id/* drivers/clk/qcom/clk-rpmh.c 329 */;
	unsigned long cocci_id/* drivers/clk/qcom/clk-rpmh.c 321 */;
	unsigned long *cocci_id/* drivers/clk/qcom/clk-rpmh.c 316 */;
	long cocci_id/* drivers/clk/qcom/clk-rpmh.c 315 */;
	void cocci_id/* drivers/clk/qcom/clk-rpmh.c 292 */;
	struct bcm_db {
		__le32 unit;
		__le16 width;
		u8 vcd;
		u8 reserved;
	} cocci_id/* drivers/clk/qcom/clk-rpmh.c 29 */;
	struct clk_hw *cocci_id/* drivers/clk/qcom/clk-rpmh.c 285 */;
	u32 cocci_id/* drivers/clk/qcom/clk-rpmh.c 250 */;
	struct tcs_cmd cocci_id/* drivers/clk/qcom/clk-rpmh.c 249 */;
	bool cocci_id/* drivers/clk/qcom/clk-rpmh.c 183 */;
	struct clk_rpmh *cocci_id/* drivers/clk/qcom/clk-rpmh.c 182 */;
	int cocci_id/* drivers/clk/qcom/clk-rpmh.c 182 */;
	enum rpmh_state cocci_id/* drivers/clk/qcom/clk-rpmh.c 150 */;
	struct clk_rpmh cocci_id/* drivers/clk/qcom/clk-rpmh.c 137 */;
}
