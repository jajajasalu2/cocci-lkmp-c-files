cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/soc/qcom/smem.c 992 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/smem.c 986 */[];
	struct smem_proc_comm {
		__le32 command;
		__le32 status;
		__le32 params[2];
	} cocci_id/* drivers/soc/qcom/smem.c 95 */;
	struct smem_region cocci_id/* drivers/soc/qcom/smem.c 910 */;
	struct platform_device *cocci_id/* drivers/soc/qcom/smem.c 896 */;
	resource_size_t cocci_id/* drivers/soc/qcom/smem.c 872 */;
	struct resource cocci_id/* drivers/soc/qcom/smem.c 871 */;
	struct device_node *cocci_id/* drivers/soc/qcom/smem.c 870 */;
	const char *cocci_id/* drivers/soc/qcom/smem.c 868 */;
	struct device *cocci_id/* drivers/soc/qcom/smem.c 867 */;
	unsigned int cocci_id/* drivers/soc/qcom/smem.c 822 */;
	struct smem_ptable *cocci_id/* drivers/soc/qcom/smem.c 821 */;
	struct smem_ptable_entry *cocci_id/* drivers/soc/qcom/smem.c 820 */;
	u16 cocci_id/* drivers/soc/qcom/smem.c 817 */;
	bool cocci_id/* drivers/soc/qcom/smem.c 772 */;
	struct smem_info *cocci_id/* drivers/soc/qcom/smem.c 706 */;
	__le32 *cocci_id/* drivers/soc/qcom/smem.c 677 */;
	u64 cocci_id/* drivers/soc/qcom/smem.c 664 */;
	phys_addr_t cocci_id/* drivers/soc/qcom/smem.c 654 */;
	size_t *cocci_id/* drivers/soc/qcom/smem.c 575 */;
	u32 cocci_id/* drivers/soc/qcom/smem.c 488 */;
	struct smem_region *cocci_id/* drivers/soc/qcom/smem.c 486 */;
	unsigned long cocci_id/* drivers/soc/qcom/smem.c 444 */;
	unsigned cocci_id/* drivers/soc/qcom/smem.c 441 */;
	int cocci_id/* drivers/soc/qcom/smem.c 441 */;
	struct smem_header *cocci_id/* drivers/soc/qcom/smem.c 404 */;
	struct smem_global_entry *cocci_id/* drivers/soc/qcom/smem.c 403 */;
	struct qcom_smem *cocci_id/* drivers/soc/qcom/smem.c 343 */;
	void *cocci_id/* drivers/soc/qcom/smem.c 323 */;
	size_t cocci_id/* drivers/soc/qcom/smem.c 321 */;
	struct smem_private_entry *cocci_id/* drivers/soc/qcom/smem.c 320 */;
	struct smem_partition_header *cocci_id/* drivers/soc/qcom/smem.c 286 */;
	struct qcom_smem {
		struct device *dev;
		struct hwspinlock *hwlock;
		struct smem_partition_header *global_partition;
		size_t global_cacheline;
		struct smem_partition_header *partitions[SMEM_HOST_COUNT];
		size_t cacheline[SMEM_HOST_COUNT];
		u32 item_count;
		struct platform_device *socinfo;
		unsigned num_regions;
		struct smem_region regions[];
	} cocci_id/* drivers/soc/qcom/smem.c 261 */;
	struct smem_region {
		u32 aux_base;
		void __iomem *virt_base;
		size_t size;
	} cocci_id/* drivers/soc/qcom/smem.c 242 */;
	const u8 cocci_id/* drivers/soc/qcom/smem.c 234 */[];
	struct smem_info {
		u8 magic[4];
		__le32 size;
		__le32 base_addr;
		__le32 reserved;
		__le16 num_items;
	} cocci_id/* drivers/soc/qcom/smem.c 226 */;
	struct smem_private_entry {
		u16 canary;
		__le16 item;
		__le32 size;
		__le16 padding_data;
		__le16 padding_hdr;
		__le32 reserved;
	} cocci_id/* drivers/soc/qcom/smem.c 208 */;
	struct smem_partition_header {
		u8 magic[4];
		__le16 host0;
		__le16 host1;
		__le32 size;
		__le32 offset_free_uncached;
		__le32 offset_free_cached;
		__le32 reserved[3];
	} cocci_id/* drivers/soc/qcom/smem.c 187 */;
	struct smem_ptable {
		u8 magic[4];
		__le32 version;
		__le32 num_entries;
		__le32 reserved[5];
		struct smem_ptable_entry entry[];
	} cocci_id/* drivers/soc/qcom/smem.c 165 */;
	struct smem_ptable_entry {
		__le32 offset;
		__le32 size;
		__le32 flags;
		__le16 host0;
		__le16 host1;
		__le32 cacheline;
		__le32 reserved[7];
	} cocci_id/* drivers/soc/qcom/smem.c 147 */;
	struct smem_header {
		struct smem_proc_comm proc_comm[4];
		__le32 version[32];
		__le32 initialized;
		__le32 free_offset;
		__le32 available;
		__le32 reserved;
		struct smem_global_entry toc[SMEM_ITEM_COUNT];
	} cocci_id/* drivers/soc/qcom/smem.c 127 */;
	struct smem_global_entry {
		__le32 allocated;
		__le32 offset;
		__le32 size;
		__le32 aux_base;
	} cocci_id/* drivers/soc/qcom/smem.c 109 */;
	void __exit cocci_id/* drivers/soc/qcom/smem.c 1008 */;
	void cocci_id/* drivers/soc/qcom/smem.c 1008 */;
	int __init cocci_id/* drivers/soc/qcom/smem.c 1002 */;
}
