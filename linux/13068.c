cocci_test_suite() {
	struct smp2p_entry {
		struct list_head node;
		struct qcom_smp2p *smp2p;
		const char *name;
		u32 *value;
		u32 last_value;
		struct irq_domain *domain;
	DECLARE_BITMAP(irq_enabled,32)
		;
	DECLARE_BITMAP(irq_rising,32)
		;
	DECLARE_BITMAP(irq_falling,32)
		;
		struct qcom_smem_state *state;
		spinlock_t lock;
	} cocci_id/* drivers/soc/qcom/smp2p.c 90 */;
	struct smp2p_smem_item {
		u32 magic;
		u8 version;
		unsigned features:24;
		u16 local_pid;
		u16 remote_pid;
		u16 total_entries;
		u16 valid_entries;
		u32 flags;
		struct {
			u8 name[SMP2P_MAX_ENTRY_NAME];
			u32 value;
		} entries[SMP2P_MAX_ENTRY];
	}__packed cocci_id/* drivers/soc/qcom/smp2p.c 60 */;
	struct platform_driver cocci_id/* drivers/soc/qcom/smp2p.c 587 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/smp2p.c 581 */[];
	const char *cocci_id/* drivers/soc/qcom/smp2p.c 446 */;
	struct platform_device *cocci_id/* drivers/soc/qcom/smp2p.c 441 */;
	struct device *cocci_id/* drivers/soc/qcom/smp2p.c 411 */;
	unsigned cocci_id/* drivers/soc/qcom/smp2p.c 369 */;
	struct smp2p_smem_item *cocci_id/* drivers/soc/qcom/smp2p.c 368 */;
	struct qcom_smp2p *cocci_id/* drivers/soc/qcom/smp2p.c 366 */;
	int cocci_id/* drivers/soc/qcom/smp2p.c 366 */;
	const struct qcom_smem_state_ops cocci_id/* drivers/soc/qcom/smp2p.c 337 */;
	struct device_node *cocci_id/* drivers/soc/qcom/smp2p.c 307 */;
	struct smp2p_entry *cocci_id/* drivers/soc/qcom/smp2p.c 306 */;
	const struct irq_domain_ops cocci_id/* drivers/soc/qcom/smp2p.c 300 */;
	irq_hw_number_t cocci_id/* drivers/soc/qcom/smp2p.c 288 */;
	unsigned int cocci_id/* drivers/soc/qcom/smp2p.c 287 */;
	struct irq_domain *cocci_id/* drivers/soc/qcom/smp2p.c 286 */;
	struct irq_chip cocci_id/* drivers/soc/qcom/smp2p.c 279 */;
	struct irq_data *cocci_id/* drivers/soc/qcom/smp2p.c 242 */;
	char cocci_id/* drivers/soc/qcom/smp2p.c 182 */[SMP2P_MAX_ENTRY_NAME];
	u32 cocci_id/* drivers/soc/qcom/smp2p.c 181 */;
	size_t cocci_id/* drivers/soc/qcom/smp2p.c 179 */;
	irqreturn_t cocci_id/* drivers/soc/qcom/smp2p.c 172 */;
	void *cocci_id/* drivers/soc/qcom/smp2p.c 172 */;
	void cocci_id/* drivers/soc/qcom/smp2p.c 151 */;
	struct qcom_smp2p {
		struct device *dev;
		struct smp2p_smem_item *in;
		struct smp2p_smem_item *out;
		unsigned smem_items[SMP2P_OUTBOUND + 1];
		unsigned valid_entries;
		unsigned local_pid;
		unsigned remote_pid;
		struct regmap *ipc_regmap;
		int ipc_offset;
		int ipc_bit;
		struct mbox_client mbox_client;
		struct mbox_chan *mbox_chan;
		struct list_head inbound;
		struct list_head outbound;
	} cocci_id/* drivers/soc/qcom/smp2p.c 127 */;
}
