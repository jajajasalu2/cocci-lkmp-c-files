cocci_test_suite() {
	const struct llcc_slice_config cocci_id/* drivers/soc/qcom/llcc-qcom.c 94 */[];
	struct qcom_llcc_config {
		const struct llcc_slice_config *sct_data;
		int size;
	} cocci_id/* drivers/soc/qcom/llcc-qcom.c 89 */;
	struct llcc_slice_config {
		u32 usecase_id;
		u32 slice_id;
		u32 max_cap;
		u32 priority;
		bool fixed_size;
		u32 bonus_ways;
		u32 res_ways;
		u32 cache_mode;
		u32 probe_target_ways;
		bool dis_cap_alloc;
		bool retain_on_pc;
		bool activate_on_init;
	} cocci_id/* drivers/soc/qcom/llcc-qcom.c 74 */;
	struct platform_driver cocci_id/* drivers/soc/qcom/llcc-qcom.c 505 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/llcc-qcom.c 499 */[];
	unsigned long cocci_id/* drivers/soc/qcom/llcc-qcom.c 468 */;
	const struct qcom_llcc_config *cocci_id/* drivers/soc/qcom/llcc-qcom.c 417 */;
	struct device *cocci_id/* drivers/soc/qcom/llcc-qcom.c 414 */;
	struct regmap_config cocci_id/* drivers/soc/qcom/llcc-qcom.c 392 */;
	void __iomem *cocci_id/* drivers/soc/qcom/llcc-qcom.c 391 */;
	struct resource *cocci_id/* drivers/soc/qcom/llcc-qcom.c 390 */;
	const char *cocci_id/* drivers/soc/qcom/llcc-qcom.c 388 */;
	struct regmap *cocci_id/* drivers/soc/qcom/llcc-qcom.c 387 */;
	struct llcc_slice_desc cocci_id/* drivers/soc/qcom/llcc-qcom.c 332 */;
	struct platform_device *cocci_id/* drivers/soc/qcom/llcc-qcom.c 321 */;
	size_t cocci_id/* drivers/soc/qcom/llcc-qcom.c 312 */;
	struct llcc_slice_desc *cocci_id/* drivers/soc/qcom/llcc-qcom.c 299 */;
	int cocci_id/* drivers/soc/qcom/llcc-qcom.c 299 */;
	u32 cocci_id/* drivers/soc/qcom/llcc-qcom.c 226 */;
	void cocci_id/* drivers/soc/qcom/llcc-qcom.c 175 */;
	const struct llcc_slice_config *cocci_id/* drivers/soc/qcom/llcc-qcom.c 143 */;
	struct llcc_drv_data *cocci_id/* drivers/soc/qcom/llcc-qcom.c 132 */;
	void *cocci_id/* drivers/soc/qcom/llcc-qcom.c 132 */;
	const struct qcom_llcc_config cocci_id/* drivers/soc/qcom/llcc-qcom.c 122 */;
}
