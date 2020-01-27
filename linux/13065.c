cocci_test_suite() {
	int cocci_id/* drivers/soc/qcom/smem_state.c 94 */;
	struct of_phandle_args cocci_id/* drivers/soc/qcom/smem_state.c 93 */;
	unsigned *cocci_id/* drivers/soc/qcom/smem_state.c 90 */;
	const char *cocci_id/* drivers/soc/qcom/smem_state.c 89 */;
	struct device *cocci_id/* drivers/soc/qcom/smem_state.c 88 */;
	struct qcom_smem_state *cocci_id/* drivers/soc/qcom/smem_state.c 59 */;
	struct device_node *cocci_id/* drivers/soc/qcom/smem_state.c 59 */;
	u32 cocci_id/* drivers/soc/qcom/smem_state.c 46 */;
	struct qcom_smem_state {
		struct kref refcount;
		bool orphan;
		struct list_head list;
		struct device_node *of_node;
		void *priv;
		struct qcom_smem_state_ops ops;
	} cocci_id/* drivers/soc/qcom/smem_state.c 25 */;
	void *cocci_id/* drivers/soc/qcom/smem_state.c 162 */;
	const struct qcom_smem_state_ops *cocci_id/* drivers/soc/qcom/smem_state.c 161 */;
	void cocci_id/* drivers/soc/qcom/smem_state.c 146 */;
	struct qcom_smem_state cocci_id/* drivers/soc/qcom/smem_state.c 136 */;
	struct kref *cocci_id/* drivers/soc/qcom/smem_state.c 134 */;
}
