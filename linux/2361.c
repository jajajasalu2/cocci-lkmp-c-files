cocci_test_suite() {
	struct q6v5_wcss {
		struct device *dev;
		void __iomem *reg_base;
		void __iomem *rmb_base;
		struct regmap *halt_map;
		u32 halt_q6;
		u32 halt_wcss;
		u32 halt_nc;
		struct reset_control *wcss_aon_reset;
		struct reset_control *wcss_reset;
		struct reset_control *wcss_q6_reset;
		struct qcom_q6v5 q6v5;
		phys_addr_t mem_phys;
		phys_addr_t mem_reloc;
		void *mem_region;
		size_t mem_size;
	} cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 73 */;
	struct platform_driver cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 590 */;
	const struct of_device_id cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 584 */[];
	struct device *cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 503 */;
	struct device_node *cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 502 */;
	struct reserved_mem *cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 501 */;
	struct q6v5_wcss *cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 499 */;
	int cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 499 */;
	struct resource *cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 467 */;
	struct of_phandle_args cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 466 */;
	struct platform_device *cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 464 */;
	const struct rproc_ops cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 430 */;
	const struct firmware *cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 421 */;
	u64 cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 409 */;
	struct rproc *cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 409 */;
	void *cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 409 */;
	u32 cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 319 */;
	unsigned int cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 241 */;
	unsigned long cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 240 */;
	struct regmap *cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 237 */;
	void cocci_id/* drivers/remoteproc/qcom_q6v5_wcss.c 236 */;
}
