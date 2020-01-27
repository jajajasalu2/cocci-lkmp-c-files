cocci_test_suite() {
	unsigned long long cocci_id/* drivers/iommu/arm-smmu-v3.c 982 */;
	const char *cocci_id/* drivers/iommu/arm-smmu-v3.c 937 */[];
	struct arm_smmu_queue *cocci_id/* drivers/iommu/arm-smmu-v3.c 917 */;
	u64 *cocci_id/* drivers/iommu/arm-smmu-v3.c 836 */;
	struct arm_smmu_queue_poll *cocci_id/* drivers/iommu/arm-smmu-v3.c 790 */;
	struct arm_smmu_domain cocci_id/* drivers/iommu/arm-smmu-v3.c 694 */;
	void __iomem *cocci_id/* drivers/iommu/arm-smmu-v3.c 682 */;
	struct arm_smmu_option_prop cocci_id/* drivers/iommu/arm-smmu-v3.c 676 */[];
	struct arm_smmu_option_prop {
		u32 opt;
		const char *prop;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 671 */;
	struct arm_smmu_domain {
		struct arm_smmu_device *smmu;
		struct mutex init_mutex;
		struct io_pgtable_ops *pgtbl_ops;
		bool non_strict;
		atomic_t nr_ats_masters;
		enum arm_smmu_domain_stage stage;
		union {
			struct arm_smmu_s1_cfg s1_cfg;
			struct arm_smmu_s2_cfg s2_cfg;
		};
		struct iommu_domain domain;
		struct list_head devices;
		spinlock_t devices_lock;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 651 */;
	enum arm_smmu_domain_stage{ARM_SMMU_DOMAIN_S1=0, ARM_SMMU_DOMAIN_S2, ARM_SMMU_DOMAIN_NESTED, ARM_SMMU_DOMAIN_BYPASS,} cocci_id/* drivers/iommu/arm-smmu-v3.c 644 */;
	struct arm_smmu_master {
		struct arm_smmu_device *smmu;
		struct device *dev;
		struct arm_smmu_domain *domain;
		struct list_head domain_head;
		u32 *sids;
		unsigned int num_sids;
		bool ats_enabled;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 633 */;
	struct arm_smmu_device {
		struct device *dev;
		void __iomem *base;
#define ARM_SMMU_FEAT_2_LVL_STRTAB (1 << 0)
#define ARM_SMMU_FEAT_2_LVL_CDTAB (1 << 1)
#define ARM_SMMU_FEAT_TT_LE (1 << 2)
#define ARM_SMMU_FEAT_TT_BE (1 << 3)
#define ARM_SMMU_FEAT_PRI (1 << 4)
#define ARM_SMMU_FEAT_ATS (1 << 5)
#define ARM_SMMU_FEAT_SEV (1 << 6)
#define ARM_SMMU_FEAT_MSI (1 << 7)
#define ARM_SMMU_FEAT_COHERENCY (1 << 8)
#define ARM_SMMU_FEAT_TRANS_S1 (1 << 9)
#define ARM_SMMU_FEAT_TRANS_S2 (1 << 10)
#define ARM_SMMU_FEAT_STALLS (1 << 11)
#define ARM_SMMU_FEAT_HYP (1 << 12)
#define ARM_SMMU_FEAT_STALL_FORCE (1 << 13)
#define ARM_SMMU_FEAT_VAX (1 << 14)
																	u32 features;
#define ARM_SMMU_OPT_SKIP_PREFETCH (1 << 0)
#define ARM_SMMU_OPT_PAGE0_REGS_ONLY (1 << 1)
				u32 options;
		struct arm_smmu_cmdq cmdq;
		struct arm_smmu_evtq evtq;
		struct arm_smmu_priq priq;
		int gerr_irq;
		int combined_irq;
		unsigned long ias;
		unsigned long oas;
		unsigned long pgsize_bitmap;
#define ARM_SMMU_MAX_ASIDS (1 << 16)
			unsigned int asid_bits;
	DECLARE_BITMAP(asid_map,ARM_SMMU_MAX_ASIDS)
		;
#define ARM_SMMU_MAX_VMIDS (1 << 16)
			unsigned int vmid_bits;
	DECLARE_BITMAP(vmid_map,ARM_SMMU_MAX_VMIDS)
		;
		unsigned int ssid_bits;
		unsigned int sid_bits;
		struct arm_smmu_strtab_cfg strtab_cfg;
		struct iommu_device iommu;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 579 */;
	struct arm_smmu_strtab_cfg {
		__le64 *strtab;
		dma_addr_t strtab_dma;
		struct arm_smmu_strtab_l1_desc *l1_desc;
		unsigned int num_l1_ents;
		u64 strtab_base;
		u32 strtab_base_cfg;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 568 */;
	struct arm_smmu_s2_cfg {
		u16 vmid;
		u64 vttbr;
		u64 vtcr;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 562 */;
	struct arm_smmu_s1_cfg {
		__le64 *cdptr;
		dma_addr_t cdptr_dma;
		struct arm_smmu_ctx_desc {
			u16 asid;
			u64 ttbr;
			u64 tcr;
			u64 mair;
		} cd;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 550 */;
	struct arm_smmu_strtab_l1_desc {
		u8 span;
		__le64 *l2ptr;
		dma_addr_t l2ptr_dma;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 543 */;
	struct arm_smmu_priq {
		struct arm_smmu_queue q;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 538 */;
	struct arm_smmu_evtq {
		struct arm_smmu_queue q;
		u32 max_stalls;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 533 */;
	struct arm_smmu_cmdq {
		struct arm_smmu_queue q;
		atomic_long_t *valid_map;
		atomic_t owner_prod;
		atomic_t lock;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 526 */;
	struct arm_smmu_queue_poll {
		ktime_t timeout;
		unsigned int delay;
		unsigned int spin_cnt;
		bool wfe;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 519 */;
	struct arm_smmu_queue {
		struct arm_smmu_ll_queue llq;
		int irq;
		__le64 *base;
		dma_addr_t base_dma;
		u64 q_base;
		size_t ent_dwords;
		u32 __iomem *prod_reg;
		u32 __iomem *cons_reg;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 505 */;
	struct arm_smmu_ll_queue {
		union {
			u64 val;
			struct {
				u32 prod;
				u32 cons;
			};
			struct {
				atomic_t prod;
				atomic_t cons;
			} atomic;
			u8 __pad[SMP_CACHE_BYTES];
		}____cacheline_aligned_in_smp;
		u32 max_n_shift;
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 489 */;
	struct arm_smmu_cmdq_ent {
		u8 opcode;
		bool substream_valid;
		union {
#define CMDQ_OP_PREFETCH_CFG 0x1
			struct {
				u32 sid;
				u8 size;
				u64 addr;
			} prefetch;
#define CMDQ_OP_CFGI_STE 0x3
#define CMDQ_OP_CFGI_ALL 0x4
			struct {
				u32 sid;
				union {
					bool leaf;
					u8 span;
				};
			} cfgi;
#define CMDQ_OP_TLBI_NH_ASID 0x11
#define CMDQ_OP_TLBI_NH_VA 0x12
#define CMDQ_OP_TLBI_EL2_ALL 0x20
#define CMDQ_OP_TLBI_S12_VMALL 0x28
#define CMDQ_OP_TLBI_S2_IPA 0x2a
#define CMDQ_OP_TLBI_NSNH_ALL 0x30
			struct {
				u16 asid;
				u16 vmid;
				bool leaf;
				u64 addr;
			} tlbi;
#define CMDQ_OP_ATC_INV 0x40
#define ATC_INV_SIZE_ALL 52
			struct {
				u32 sid;
				u32 ssid;
				u64 addr;
				u8 size;
				bool global;
			} atc;
#define CMDQ_OP_PRI_RESP 0x41
			struct {
				u32 sid;
				u32 ssid;
				u16 grpid;
				enum pri_resp resp;
			} pri;
#define CMDQ_OP_CMD_SYNC 0x46
			struct {
				u64 msiaddr;
			} sync;
		};
	} cocci_id/* drivers/iommu/arm-smmu-v3.c 427 */;
	phys_addr_t cocci_id/* drivers/iommu/arm-smmu-v3.c 409 */[ARM_SMMU_MAX_MSIS][3];
	enum arm_smmu_msi_index{EVTQ_MSI_INDEX, GERROR_MSI_INDEX, PRIQ_MSI_INDEX, ARM_SMMU_MAX_MSIS,} cocci_id/* drivers/iommu/arm-smmu-v3.c 402 */;
	enum pri_resp{PRI_RESP_DENY=0, PRI_RESP_FAIL=1, PRI_RESP_SUCC=2,} cocci_id/* drivers/iommu/arm-smmu-v3.c 396 */;
	const struct of_device_id cocci_id/* drivers/iommu/arm-smmu-v3.c 3693 */[];
	resource_size_t cocci_id/* drivers/iommu/arm-smmu-v3.c 3577 */;
	struct resource *cocci_id/* drivers/iommu/arm-smmu-v3.c 3576 */;
	struct acpi_iort_node **cocci_id/* drivers/iommu/arm-smmu-v3.c 3523 */;
	struct acpi_iort_node *cocci_id/* drivers/iommu/arm-smmu-v3.c 3521 */;
	struct acpi_iort_smmu_v3 *cocci_id/* drivers/iommu/arm-smmu-v3.c 3519 */;
	struct platform_device *cocci_id/* drivers/iommu/arm-smmu-v3.c 3516 */;
	struct msi_desc *cocci_id/* drivers/iommu/arm-smmu-v3.c 3021 */;
	phys_addr_t *cocci_id/* drivers/iommu/arm-smmu-v3.c 3009 */;
	struct msi_msg *cocci_id/* drivers/iommu/arm-smmu-v3.c 3004 */;
	unsigned int cocci_id/* drivers/iommu/arm-smmu-v3.c 2796 */;
	void *cocci_id/* drivers/iommu/arm-smmu-v3.c 2786 */;
	const char *cocci_id/* drivers/iommu/arm-smmu-v3.c 2748 */;
	struct iommu_resv_region *cocci_id/* drivers/iommu/arm-smmu-v3.c 2700 */;
	struct list_head *cocci_id/* drivers/iommu/arm-smmu-v3.c 2698 */;
	struct of_phandle_args *cocci_id/* drivers/iommu/arm-smmu-v3.c 2692 */;
	int *cocci_id/* drivers/iommu/arm-smmu-v3.c 2628 */;
	enum iommu_attr cocci_id/* drivers/iommu/arm-smmu-v3.c 2620 */;
	struct iommu_group *cocci_id/* drivers/iommu/arm-smmu-v3.c 2533 */;
	struct iommu_fwspec *cocci_id/* drivers/iommu/arm-smmu-v3.c 2532 */;
	struct arm_smmu_master *cocci_id/* drivers/iommu/arm-smmu-v3.c 2531 */;
	struct device *cocci_id/* drivers/iommu/arm-smmu-v3.c 2527 */;
	struct iommu_ops cocci_id/* drivers/iommu/arm-smmu-v3.c 2525 */;
	struct fwnode_handle *cocci_id/* drivers/iommu/arm-smmu-v3.c 2507 */;
	struct platform_driver cocci_id/* drivers/iommu/arm-smmu-v3.c 2504 */;
	dma_addr_t cocci_id/* drivers/iommu/arm-smmu-v3.c 2491 */;
	phys_addr_t cocci_id/* drivers/iommu/arm-smmu-v3.c 2490 */;
	struct iommu_iotlb_gather *cocci_id/* drivers/iommu/arm-smmu-v3.c 2482 */;
	gfp_t cocci_id/* drivers/iommu/arm-smmu-v3.c 2451 */;
	struct iommu_domain *cocci_id/* drivers/iommu/arm-smmu-v3.c 2394 */;
	struct pci_dev *cocci_id/* drivers/iommu/arm-smmu-v3.c 2317 */;
	struct arm_smmu_strtab_l1_desc *cocci_id/* drivers/iommu/arm-smmu-v3.c 2278 */;
	struct arm_smmu_strtab_cfg *cocci_id/* drivers/iommu/arm-smmu-v3.c 2275 */;
	__le64 *cocci_id/* drivers/iommu/arm-smmu-v3.c 2272 */;
	int (*cocci_id/* drivers/iommu/arm-smmu-v3.c 2207 */)(struct arm_smmu_domain *, struct io_pgtable_cfg *);
	struct io_pgtable_ops *cocci_id/* drivers/iommu/arm-smmu-v3.c 2206 */;
	struct io_pgtable_cfg cocci_id/* drivers/iommu/arm-smmu-v3.c 2205 */;
	enum io_pgtable_fmt cocci_id/* drivers/iommu/arm-smmu-v3.c 2204 */;
	struct arm_smmu_s2_cfg *cocci_id/* drivers/iommu/arm-smmu-v3.c 2188 */;
	u16 cocci_id/* drivers/iommu/arm-smmu-v3.c 2172 */;
	struct arm_smmu_s1_cfg *cocci_id/* drivers/iommu/arm-smmu-v3.c 2157 */;
	struct io_pgtable_cfg *cocci_id/* drivers/iommu/arm-smmu-v3.c 2152 */;
	unsigned long *cocci_id/* drivers/iommu/arm-smmu-v3.c 2104 */;
	unsigned cocci_id/* drivers/iommu/arm-smmu-v3.c 2073 */;
	enum iommu_cap cocci_id/* drivers/iommu/arm-smmu-v3.c 2061 */;
	const struct iommu_flush_ops cocci_id/* drivers/iommu/arm-smmu-v3.c 2053 */;
	u64 cocci_id/* drivers/iommu/arm-smmu-v3.c 1989 */[CMDQ_BATCH_ENTRIES * CMDQ_ENT_DWORDS];
	struct arm_smmu_cmdq_ent cocci_id/* drivers/iommu/arm-smmu-v3.c 1924 */;
	size_t cocci_id/* drivers/iommu/arm-smmu-v3.c 1920 */;
	struct arm_smmu_domain *cocci_id/* drivers/iommu/arm-smmu-v3.c 1919 */;
	struct arm_smmu_cmdq_ent *cocci_id/* drivers/iommu/arm-smmu-v3.c 1904 */;
	irqreturn_t cocci_id/* drivers/iommu/arm-smmu-v3.c 1844 */;
	int cocci_id/* drivers/iommu/arm-smmu-v3.c 1785 */(struct arm_smmu_device *smmu);
	u64 cocci_id/* drivers/iommu/arm-smmu-v3.c 1768 */[PRIQ_ENT_DWORDS];
	u8 cocci_id/* drivers/iommu/arm-smmu-v3.c 1702 */;
	u64 cocci_id/* drivers/iommu/arm-smmu-v3.c 1698 */[EVTQ_ENT_DWORDS];
	u64 cocci_id/* drivers/iommu/arm-smmu-v3.c 1429 */[CMDQ_ENT_DWORDS];
	u64 cocci_id/* drivers/iommu/arm-smmu-v3.c 1323 */;
	struct arm_smmu_queue_poll cocci_id/* drivers/iommu/arm-smmu-v3.c 1216 */;
	struct arm_smmu_ll_queue *cocci_id/* drivers/iommu/arm-smmu-v3.c 1214 */;
	struct arm_smmu_device *cocci_id/* drivers/iommu/arm-smmu-v3.c 1213 */;
	int cocci_id/* drivers/iommu/arm-smmu-v3.c 1213 */;
	u32 *cocci_id/* drivers/iommu/arm-smmu-v3.c 1195 */;
	atomic_long_t *cocci_id/* drivers/iommu/arm-smmu-v3.c 1107 */;
	unsigned long cocci_id/* drivers/iommu/arm-smmu-v3.c 1106 */;
	struct arm_smmu_ll_queue cocci_id/* drivers/iommu/arm-smmu-v3.c 1097 */;
	u32 cocci_id/* drivers/iommu/arm-smmu-v3.c 1094 */;
	bool cocci_id/* drivers/iommu/arm-smmu-v3.c 1094 */;
	struct arm_smmu_cmdq *cocci_id/* drivers/iommu/arm-smmu-v3.c 1093 */;
	void cocci_id/* drivers/iommu/arm-smmu-v3.c 1093 */;
}
