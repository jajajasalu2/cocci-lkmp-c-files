cocci_test_suite() {
	struct mlxsw_pci_queue_type_group {
		struct mlxsw_pci_queue *q;
		u8 count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 97 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 941 */;
	const struct mlxsw_pci_queue_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 886 */;
	const struct mlxsw_pci_queue_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 805 */;
	struct mlxsw_pci_queue_ops {
		const char *name;
		enum mlxsw_pci_queue_type type;
		void (*pre_init)(struct mlxsw_pci *mlxsw_pci,
				 struct mlxsw_pci_queue *q);
		int (*init)(struct mlxsw_pci *mlxsw_pci, char *mbox,
			    struct mlxsw_pci_queue *q);
		void (*fini)(struct mlxsw_pci *mlxsw_pci,
			     struct mlxsw_pci_queue *q);
		void (*tasklet)(unsigned long data);
		u16 (*elem_count_f)(const struct mlxsw_pci_queue *q);
		u8 (*elem_size_f)(const struct mlxsw_pci_queue *q);
		u16 elem_count;
		u8 elem_size;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 773 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 728 */[BITS_TO_LONGS(MLXSW_PCI_CQS_MAX)];
	struct mlxsw_pci_queue {
		spinlock_t lock;
		struct mlxsw_pci_mem_item mem_item;
		struct mlxsw_pci_queue_elem_info *elem_info;
		u16 producer_counter;
		u16 consumer_counter;
		u16 count;
		u8 num;
		u8 elem_size;
		enum mlxsw_pci_queue_type type;
		struct tasklet_struct tasklet;
		struct mlxsw_pci *pci;
		union {
			struct {
				u32 comp_sdq_count;
				u32 comp_rdq_count;
				enum mlxsw_pci_cqe_v v;
			} cq;
			struct {
				u32 ev_cmd_count;
				u32 ev_comp_count;
				u32 ev_other_count;
			} eq;
		} u;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 71 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 701 */;
	const struct mlxsw_pci_queue *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 649 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 622 */[MLXSW_PCI_CQE_SIZE_MAX];
	struct mlxsw_pci_queue_elem_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 596 */;
	struct mlxsw_pci_queue_elem_info {
		char *elem;
		union {
			struct {
				struct sk_buff *skb;
			} sdq;
			struct {
				struct sk_buff *skb;
			} rdq;
		} u;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 59 */;
	struct mlxsw_rx_info cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 552 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 551 */;
	enum mlxsw_pci_cqe_v cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 546 */;
	struct mlxsw_pci_mem_item {
		char *buf;
		dma_addr_t mapaddr;
		size_t size;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 53 */;
	struct mlxsw_tx_info cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 514 */;
	const u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 46 */[];
	enum mlxsw_pci_queue_type{MLXSW_PCI_QUEUE_TYPE_SDQ, MLXSW_PCI_QUEUE_TYPE_RDQ, MLXSW_PCI_QUEUE_TYPE_CQ, MLXSW_PCI_QUEUE_TYPE_EQ,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 30 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 278 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 247 */;
	struct mlxsw_pci_queue *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 246 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 245 */;
	struct mlxsw_pci_queue_type_group *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 186 */;
	void __exit cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1856 */;
	int __init cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1851 */;
	enum mlxsw_pci_queue_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 184 */;
	struct pci_driver *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1837 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 183 */;
	struct mlxsw_pci *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 183 */;
	const char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1744 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1742 */;
	const struct mlxsw_bus cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1730 */;
	__be32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1693 */;
	bool *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1628 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1627 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1622 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1619 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1619 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1618 */;
	const skb_frag_t *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1587 */;
	const struct mlxsw_tx_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1525 */;
	struct mlxsw_core *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1370 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 137 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 137 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 136 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1329 */[MLXSW_REG_MRSR_LEN];
	irqreturn_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1286 */;
	struct mlxsw_pci_mem_item *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1272 */;
	struct mlxsw_bus_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1201 */;
	struct mlxsw_res *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1080 */;
	const struct mlxsw_config_profile *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1079 */;
	const struct mlxsw_pci *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1058 */;
	const struct mlxsw_swid_config *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 1040 */;
	struct mlxsw_pci {
		struct pci_dev *pdev;
		u8 __iomem *hw_addr;
		u64 free_running_clock_offset;
		struct mlxsw_pci_queue_type_group queues[MLXSW_PCI_QUEUE_TYPE_COUNT];
		u32 doorbell_offset;
		struct mlxsw_core *core;
		struct {
			struct mlxsw_pci_mem_item *items;
			unsigned int count;
		} fw_area;
		struct {
			struct mlxsw_pci_mem_item out_mbox;
			struct mlxsw_pci_mem_item in_mbox;
			struct mutex lock;
			bool nopoll;
			wait_queue_head_t wait;
			bool wait_done;
			struct {
				u8 status;
				u64 out_param;
			} comp;
		} cmd;
		struct mlxsw_bus_info bus_info;
		const struct pci_device_id *id;
		enum mlxsw_pci_cqe_v max_cqe_ver;
		u8 num_sdq_cqs;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/pci.c 102 */;
}
