cocci_test_suite() {
	struct qcom_smsm {
		struct device *dev;
		u32 local_host;
		u32 num_hosts;
		u32 num_entries;
		u32 *local_state;
		u32 *subscription;
		struct qcom_smem_state *state;
		spinlock_t lock;
		struct smsm_entry *entries;
		struct smsm_host *hosts;
	} cocci_id/* drivers/soc/qcom/smsm.c 75 */;
	struct platform_driver cocci_id/* drivers/soc/qcom/smsm.c 610 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/smsm.c 604 */[];
	unsigned cocci_id/* drivers/soc/qcom/smsm.c 593 */;
	struct smsm_host cocci_id/* drivers/soc/qcom/smsm.c 486 */;
	struct smsm_entry cocci_id/* drivers/soc/qcom/smsm.c 479 */;
	u32 cocci_id/* drivers/soc/qcom/smsm.c 464 */;
	size_t cocci_id/* drivers/soc/qcom/smsm.c 462 */;
	u32 *cocci_id/* drivers/soc/qcom/smsm.c 461 */;
	struct qcom_smsm *cocci_id/* drivers/soc/qcom/smsm.c 460 */;
	struct smsm_entry *cocci_id/* drivers/soc/qcom/smsm.c 459 */;
	struct device_node *cocci_id/* drivers/soc/qcom/smsm.c 457 */;
	struct platform_device *cocci_id/* drivers/soc/qcom/smsm.c 455 */;
	int cocci_id/* drivers/soc/qcom/smsm.c 455 */;
	struct {
		u32 num_hosts;
		u32 num_entries;
		u32 reserved0;
		u32 reserved1;
	} *cocci_id/* drivers/soc/qcom/smsm.c 426 */;
	void *cocci_id/* drivers/soc/qcom/smsm.c 397 */;
	char cocci_id/* drivers/soc/qcom/smsm.c 348 */[16];
	struct smsm_host *cocci_id/* drivers/soc/qcom/smsm.c 347 */;
	const struct irq_domain_ops cocci_id/* drivers/soc/qcom/smsm.c 330 */;
	irq_hw_number_t cocci_id/* drivers/soc/qcom/smsm.c 319 */;
	unsigned int cocci_id/* drivers/soc/qcom/smsm.c 318 */;
	struct irq_domain *cocci_id/* drivers/soc/qcom/smsm.c 317 */;
	struct irq_chip cocci_id/* drivers/soc/qcom/smsm.c 304 */;
	struct irq_data *cocci_id/* drivers/soc/qcom/smsm.c 237 */;
	void cocci_id/* drivers/soc/qcom/smsm.c 237 */;
	irqreturn_t cocci_id/* drivers/soc/qcom/smsm.c 198 */;
	const struct qcom_smem_state_ops cocci_id/* drivers/soc/qcom/smsm.c 186 */;
	unsigned long cocci_id/* drivers/soc/qcom/smsm.c 143 */;
	struct smsm_host {
		struct regmap *ipc_regmap;
		int ipc_offset;
		int ipc_bit;
	} cocci_id/* drivers/soc/qcom/smsm.c 124 */;
	struct smsm_entry {
		struct qcom_smsm *smsm;
		struct irq_domain *domain;
	DECLARE_BITMAP(irq_enabled,32)
		;
	DECLARE_BITMAP(irq_rising,32)
		;
	DECLARE_BITMAP(irq_falling,32)
		;
		u32 last_value;
		u32 *remote_state;
		u32 *subscription;
	} cocci_id/* drivers/soc/qcom/smsm.c 105 */;
}
