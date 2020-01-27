cocci_test_suite() {
	struct its_cmd_desc cocci_id/* drivers/irqchip/irq-gic-v3-its.c 954 */;
	struct its_node {
		raw_spinlock_t lock;
		struct mutex dev_alloc_lock;
		struct list_head entry;
		void __iomem *base;
		phys_addr_t phys_base;
		struct its_cmd_block *cmd_base;
		struct its_cmd_block *cmd_write;
		struct its_baser tables[GITS_BASER_NR_REGS];
		struct its_collection *collections;
		struct fwnode_handle *fwnode_handle;
		u64 (*get_msi_base)(struct its_device *its_dev);
		u64 typer;
		u64 cbaser_save;
		u32 ctlr_save;
		struct list_head its_device_list;
		u64 flags;
		unsigned long list_nr;
		int numa_node;
		unsigned int msi_domain_flags;
		u32 pre_its_base;
		int vlpi_redist_offset;
	} cocci_id/* drivers/irqchip/irq-gic-v3-its.c 94 */;
	synctype *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 884 */;
	buildtype cocci_id/* drivers/irqchip/irq-gic-v3-its.c 880 */;
	s64 cocci_id/* drivers/irqchip/irq-gic-v3-its.c 847 */;
	struct its_device cocci_id/* drivers/irqchip/irq-gic-v3-its.c 83 */;
	struct its_cmd_block *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 781 */;
	struct its_cmd_block cocci_id/* drivers/irqchip/irq-gic-v3-its.c 772 */;
	struct its_baser {
		void *base;
		u64 val;
		u32 order;
		u32 psz;
	} cocci_id/* drivers/irqchip/irq-gic-v3-its.c 76 */;
	struct its_vpe *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 742 */;
	struct its_collection {
		u64 target_address;
		u16 col_id;
	} cocci_id/* drivers/irqchip/irq-gic-v3-its.c 67 */;
	struct its_cmd_desc *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 580 */;
	u8 cocci_id/* drivers/irqchip/irq-gic-v3-its.c 455 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 4134 */;
	struct resource cocci_id/* drivers/irqchip/irq-gic-v3-its.c 4087 */;
	struct fwnode_handle *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 4086 */;
	struct acpi_madt_generic_translator *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 4085 */;
	void __init cocci_id/* drivers/irqchip/irq-gic-v3-its.c 4072 */;
	void cocci_id/* drivers/irqchip/irq-gic-v3-its.c 4072 */;
	struct its_srat_map cocci_id/* drivers/irqchip/irq-gic-v3-its.c 4058 */;
	struct acpi_table_srat cocci_id/* drivers/irqchip/irq-gic-v3-its.c 4052 */;
	struct acpi_srat_gic_its_affinity *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 4019 */;
	const unsigned long cocci_id/* drivers/irqchip/irq-gic-v3-its.c 4010 */;
	union acpi_subtable_headers *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 4009 */;
	int cocci_id/* drivers/irqchip/irq-gic-v3-its.c 4000 */;
	u32 cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3998 */;
	int __init cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3998 */;
	struct its_srat_map *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3995 */;
	struct its_srat_map {
		u32 numa_node;
		u32 its_id;
	} cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3988 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3953 */[];
	struct resource *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3685 */;
	struct its_node cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3656 */;
	struct msi_domain_info *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3622 */;
	struct syscore_ops cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3614 */;
	u64 *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 349 */;
	const struct gic_quirk cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3455 */[];
	struct its_vpe *(*cocci_id/* drivers/irqchip/irq-gic-v3-its.c 345 */)(struct its_node *,
									      struct its_cmd_block *,
									      struct its_cmd_desc *);
	u32 cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3419 */[2];
	struct its_collection *(*cocci_id/* drivers/irqchip/irq-gic-v3-its.c 341 */)(struct its_node *,
										     struct its_cmd_block *,
										     struct its_cmd_desc *);
	bool __maybe_unused cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3370 */;
	struct its_cmd_block {
		union {
			u64 raw_cmd[4];
			__le64 raw_cmd_le[4];
		};
	} cocci_id/* drivers/irqchip/irq-gic-v3-its.c 331 */;
	void (*cocci_id/* drivers/irqchip/irq-gic-v3-its.c 3068 */)(struct its_device *,
								    u32);
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2852 */;
	const struct cpumask *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2776 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2743 */;
	msi_alloc_info_t *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2740 */;
	unsigned int cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2737 */;
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2717 */;
	struct msi_domain_ops cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2709 */;
	struct device *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2653 */;
	irq_hw_number_t *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2637 */;
	u16 *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2561 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2559 */;
	struct its_baser *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2516 */;
	__le64 *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2476 */;
	struct its_cmd_desc {
		union {
			struct {
				struct its_device *dev;
				u32 event_id;
			} its_inv_cmd;
			struct {
				struct its_device *dev;
				u32 event_id;
			} its_clear_cmd;
			struct {
				struct its_device *dev;
				u32 event_id;
			} its_int_cmd;
			struct {
				struct its_device *dev;
				int valid;
			} its_mapd_cmd;
			struct {
				struct its_collection *col;
				int valid;
			} its_mapc_cmd;
			struct {
				struct its_device *dev;
				u32 phys_id;
				u32 event_id;
			} its_mapti_cmd;
			struct {
				struct its_device *dev;
				struct its_collection *col;
				u32 event_id;
			} its_movi_cmd;
			struct {
				struct its_device *dev;
				u32 event_id;
			} its_discard_cmd;
			struct {
				struct its_collection *col;
			} its_invall_cmd;
			struct {
				struct its_vpe *vpe;
			} its_vinvall_cmd;
			struct {
				struct its_vpe *vpe;
				struct its_collection *col;
				bool valid;
			} its_vmapp_cmd;
			struct {
				struct its_vpe *vpe;
				struct its_device *dev;
				u32 virt_id;
				u32 event_id;
				bool db_enabled;
			} its_vmapti_cmd;
			struct {
				struct its_vpe *vpe;
				struct its_device *dev;
				u32 event_id;
				bool db_enabled;
			} its_vmovi_cmd;
			struct {
				struct its_vpe *vpe;
				struct its_collection *col;
				u16 seq_num;
				u16 its_list;
			} its_vmovp_cmd;
		};
	} cocci_id/* drivers/irqchip/irq-gic-v3-its.c 246 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2396 */;
	struct page *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2233 */;
	u64 cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2209 */;
	phys_addr_t cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2197 */;
	bool cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2195 */;
	gfp_t cocci_id/* drivers/irqchip/irq-gic-v3-its.c 2171 */;
	struct its_vlpi_map *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 210 */;
	struct its_node *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 205 */;
	struct its_device *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 202 */;
	struct its_collection *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 202 */;
	const char *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1886 */[];
	unsigned long cocci_id/* drivers/irqchip/irq-gic-v3-its.c 183 */;
	u16 cocci_id/* drivers/irqchip/irq-gic-v3-its.c 180 */;
	struct its_vm *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 180 */;
	void *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1786 */;
	long cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1767 */;
	int *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1748 */;
	struct rdists *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 166 */;
	struct lpi_range *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1653 */;
	u32 *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1651 */;
	struct lpi_range {
		struct list_head entry;
		u32 base_id;
		u32 span;
	} cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1632 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1600 */;
	struct its_cmd_info *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1574 */;
	struct {
		raw_spinlock_t lock;
		struct its_device *dev;
		struct its_vpe **vpes;
		int next_victim;
	} cocci_id/* drivers/irqchip/irq-gic-v3-its.c 157 */;
	struct its_device {
		struct list_head entry;
		struct its_node *its;
		struct event_lpi_map event_map;
		void *itt;
		u32 nr_ites;
		u32 device_id;
		bool shared;
	} cocci_id/* drivers/irqchip/irq-gic-v3-its.c 147 */;
	enum irqchip_irq_state cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1352 */;
	struct msi_msg *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1335 */;
	struct event_lpi_map {
		unsigned long *lpi_map;
		u16 *col_map;
		irq_hw_number_t lpi_base;
		int nr_lpis;
		raw_spinlock_t vlpi_lock;
		struct its_vm *vm;
		struct its_vlpi_map *vlpi_maps;
		int nr_vlpis;
	} cocci_id/* drivers/irqchip/irq-gic-v3-its.c 130 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1225 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1222 */;
	u8 *cocci_id/* drivers/irqchip/irq-gic-v3-its.c 1187 */;
}
