cocci_test_suite() {
	const cpumask_t *cocci_id/* drivers/firmware/qcom_scm.c 98 */;
	void cocci_id/* drivers/firmware/qcom_scm.c 83 */;
	int __init cocci_id/* drivers/firmware/qcom_scm.c 687 */;
	struct platform_driver cocci_id/* drivers/firmware/qcom_scm.c 678 */;
	const struct of_device_id cocci_id/* drivers/firmware/qcom_scm.c 654 */[];
	struct platform_device *cocci_id/* drivers/firmware/qcom_scm.c 564 */;
	struct qcom_scm *cocci_id/* drivers/firmware/qcom_scm.c 55 */;
	unsigned long cocci_id/* drivers/firmware/qcom_scm.c 513 */;
	void *cocci_id/* drivers/firmware/qcom_scm.c 511 */;
	__le32 *cocci_id/* drivers/firmware/qcom_scm.c 510 */;
	dma_addr_t cocci_id/* drivers/firmware/qcom_scm.c 504 */;
	struct qcom_scm_mem_map_info *cocci_id/* drivers/firmware/qcom_scm.c 500 */;
	struct qcom_scm_mem_map_info {
		__le64 mem_addr;
		__le64 mem_size;
	} cocci_id/* drivers/firmware/qcom_scm.c 50 */;
	struct qcom_scm_current_perm_info *cocci_id/* drivers/firmware/qcom_scm.c 499 */;
	unsigned int cocci_id/* drivers/firmware/qcom_scm.c 497 */;
	const struct qcom_scm_vmperm *cocci_id/* drivers/firmware/qcom_scm.c 496 */;
	unsigned int *cocci_id/* drivers/firmware/qcom_scm.c 495 */;
	phys_addr_t cocci_id/* drivers/firmware/qcom_scm.c 494 */;
	int cocci_id/* drivers/firmware/qcom_scm.c 494 */;
	size_t cocci_id/* drivers/firmware/qcom_scm.c 494 */;
	struct resource cocci_id/* drivers/firmware/qcom_scm.c 445 */;
	struct device_node *cocci_id/* drivers/firmware/qcom_scm.c 443 */;
	u64 *cocci_id/* drivers/firmware/qcom_scm.c 441 */;
	struct device *cocci_id/* drivers/firmware/qcom_scm.c 441 */;
	struct qcom_scm_current_perm_info {
		__le32 vmid;
		__le32 perm;
		__le64 ctx;
		__le32 ctx_size;
		__le32 unused;
	} cocci_id/* drivers/firmware/qcom_scm.c 42 */;
	u64 cocci_id/* drivers/firmware/qcom_scm.c 395 */;
	size_t *cocci_id/* drivers/firmware/qcom_scm.c 389 */;
	const struct reset_control_ops cocci_id/* drivers/firmware/qcom_scm.c 365 */;
	struct reset_controller_dev *cocci_id/* drivers/firmware/qcom_scm.c 347 */;
	struct qcom_scm {
		struct device *dev;
		struct clk *core_clk;
		struct clk *iface_clk;
		struct clk *bus_clk;
		struct reset_controller_dev reset;
		u64 dload_mode_addr;
	} cocci_id/* drivers/firmware/qcom_scm.c 32 */;
	bool cocci_id/* drivers/firmware/qcom_scm.c 25 */;
	const void *cocci_id/* drivers/firmware/qcom_scm.c 246 */;
	enum qcom_scm_ocmem_client cocci_id/* drivers/firmware/qcom_scm.c 213 */;
	u32 *cocci_id/* drivers/firmware/qcom_scm.c 161 */;
	struct qcom_scm_hdcp_req *cocci_id/* drivers/firmware/qcom_scm.c 161 */;
	u32 cocci_id/* drivers/firmware/qcom_scm.c 126 */;
}
