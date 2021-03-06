cocci_test_suite() {
	struct ivhd_header {
		u8 type;
		u8 flags;
		u16 length;
		u16 devid;
		u16 cap_ptr;
		u64 mmio_phys;
		u16 pci_seg;
		u16 info;
		u32 efr_attr;
		u64 efr_reg;
		u64 res;
	}__attribute__((packed)) cocci_id/* drivers/iommu/amd_iommu_init.c 99 */;
	u16 cocci_id/* drivers/iommu/amd_iommu_init.c 962 */;
	const struct iommu_ops cocci_id/* drivers/iommu/amd_iommu_init.c 93 */;
	gfp_t cocci_id/* drivers/iommu/amd_iommu_init.c 870 */;
	phys_addr_t cocci_id/* drivers/iommu/amd_iommu_init.c 867 */;
	u64 cocci_id/* drivers/iommu/amd_iommu_init.c 864 */;
	void __init cocci_id/* drivers/iommu/amd_iommu_init.c 647 */;
	void *cocci_id/* drivers/iommu/amd_iommu_init.c 598 */;
	struct ivhd_header *cocci_id/* drivers/iommu/amd_iommu_init.c 562 */;
	struct acpi_table_header *cocci_id/* drivers/iommu/amd_iommu_init.c 538 */;
	struct ivhd_entry *cocci_id/* drivers/iommu/amd_iommu_init.c 501 */;
	u8 __iomem *cocci_id/* drivers/iommu/amd_iommu_init.c 443 */;
	u8 __iomem *__init cocci_id/* drivers/iommu/amd_iommu_init.c 434 */;
	u64 *cocci_id/* drivers/iommu/amd_iommu_init.c 3141 */;
	unsigned int cocci_id/* drivers/iommu/amd_iommu_init.c 3075 */;
	char cocci_id/* drivers/iommu/amd_iommu_init.c 3010 */[ACPIHID_UID_LEN + ACPIHID_HID_LEN];
	unsigned cocci_id/* drivers/iommu/amd_iommu_init.c 287 */;
	acpi_status cocci_id/* drivers/iommu/amd_iommu_init.c 2672 */;
	void cocci_id/* drivers/iommu/amd_iommu_init.c 255 */(void);
	int __init cocci_id/* drivers/iommu/amd_iommu_init.c 254 */(enum iommu_init_state state);
	int cocci_id/* drivers/iommu/amd_iommu_init.c 253 */(void);
	enum iommu_init_state cocci_id/* drivers/iommu/amd_iommu_init.c 251 */;
	int __initdata cocci_id/* drivers/iommu/amd_iommu_init.c 247 */;
	const char *cocci_id/* drivers/iommu/amd_iommu_init.c 2431 */;
	struct acpihid_map_entry __initdata cocci_id/* drivers/iommu/amd_iommu_init.c 243 */[EARLY_MAP_SIZE];
	bool __init cocci_id/* drivers/iommu/amd_iommu_init.c 2429 */;
	struct devid_map __initdata cocci_id/* drivers/iommu/amd_iommu_init.c 242 */[EARLY_MAP_SIZE];
	struct syscore_ops cocci_id/* drivers/iommu/amd_iommu_init.c 2396 */;
	unsigned long cocci_id/* drivers/iommu/amd_iommu_init.c 2310 */;
	enum iommu_init_state{IOMMU_START_STATE, IOMMU_IVRS_DETECTED, IOMMU_ACPI_FINISHED, IOMMU_ENABLED, IOMMU_PCI_INIT, IOMMU_INTERRUPTS_EN, IOMMU_DMA_OPS, IOMMU_INITIALIZED, IOMMU_NOT_FOUND, IOMMU_INIT_ERROR, IOMMU_CMDLINE_DISABLED,} cocci_id/* drivers/iommu/amd_iommu_init.c 225 */;
	u32 cocci_id/* drivers/iommu/amd_iommu_init.c 222 */;
	unsigned long *cocci_id/* drivers/iommu/amd_iommu_init.c 219 */;
	struct irq_remap_table **cocci_id/* drivers/iommu/amd_iommu_init.c 213 */;
	struct ivmd_header *cocci_id/* drivers/iommu/amd_iommu_init.c 2061 */;
	struct amd_iommu **cocci_id/* drivers/iommu/amd_iommu_init.c 206 */;
	struct unity_map_entry *cocci_id/* drivers/iommu/amd_iommu_init.c 2052 */;
	struct kref *cocci_id/* drivers/iommu/amd_iommu_init.c 1977 */;
	struct amd_iommu *cocci_id/* drivers/iommu/amd_iommu_init.c 1967 */;
	const cpumask_t *cocci_id/* drivers/iommu/amd_iommu_init.c 1965 */;
	struct irq_affinity_notify *cocci_id/* drivers/iommu/amd_iommu_init.c 1964 */;
	void cocci_id/* drivers/iommu/amd_iommu_init.c 1964 */;
	struct dev_table_entry *cocci_id/* drivers/iommu/amd_iommu_init.c 188 */;
	const char *const cocci_id/* drivers/iommu/amd_iommu_init.c 1826 */[];
	const struct attribute_group *cocci_id/* drivers/iommu/amd_iommu_init.c 1710 */[];
	struct attribute_group cocci_id/* drivers/iommu/amd_iommu_init.c 1705 */;
	struct attribute *cocci_id/* drivers/iommu/amd_iommu_init.c 1699 */[];
	char *cocci_id/* drivers/iommu/amd_iommu_init.c 1683 */;
	struct device_attribute *cocci_id/* drivers/iommu/amd_iommu_init.c 1682 */;
	struct device *cocci_id/* drivers/iommu/amd_iommu_init.c 1681 */;
	ssize_t cocci_id/* drivers/iommu/amd_iommu_init.c 1681 */;
	struct amd_iommu *cocci_id/* drivers/iommu/amd_iommu_init.c 166 */[MAX_IOMMUS];
	struct pci_dev *cocci_id/* drivers/iommu/amd_iommu_init.c 1657 */;
	int cocci_id/* drivers/iommu/amd_iommu_init.c 1652 */(struct amd_iommu *iommu,
							      u8 bank,
							      u8 cntr, u8 fxn,
							      u64 *value,
							      bool is_write);
	struct amd_iommu cocci_id/* drivers/iommu/amd_iommu_init.c 1636 */;
	bool __initdata cocci_id/* drivers/iommu/amd_iommu_init.c 153 */;
	struct ivmd_header {
		u8 type;
		u8 flags;
		u16 length;
		u16 devid;
		u16 aux;
		u64 resv;
		u64 range_start;
		u64 range_length;
	}__attribute__((packed)) cocci_id/* drivers/iommu/amd_iommu_init.c 135 */;
	u8 cocci_id/* drivers/iommu/amd_iommu_init.c 1335 */[ACPIHID_UID_LEN];
	u8 cocci_id/* drivers/iommu/amd_iommu_init.c 1334 */[ACPIHID_HID_LEN];
	struct ivhd_entry {
		u8 type;
		u16 devid;
		u8 flags;
		u32 ext;
		u32 hidh;
		u64 cid;
		u8 uidf;
		u8 uidl;
		u8 uid;
	}__attribute__((packed)) cocci_id/* drivers/iommu/amd_iommu_init.c 119 */;
	int cocci_id/* drivers/iommu/amd_iommu_init.c 1081 */;
	struct list_head *cocci_id/* drivers/iommu/amd_iommu_init.c 1047 */;
	struct acpihid_map_entry *cocci_id/* drivers/iommu/amd_iommu_init.c 1046 */;
	bool cocci_id/* drivers/iommu/amd_iommu_init.c 1044 */;
	u8 *cocci_id/* drivers/iommu/amd_iommu_init.c 1043 */;
	u16 *cocci_id/* drivers/iommu/amd_iommu_init.c 1043 */;
	int __init cocci_id/* drivers/iommu/amd_iommu_init.c 1043 */;
	struct devid_map *cocci_id/* drivers/iommu/amd_iommu_init.c 1008 */;
	u8 cocci_id/* drivers/iommu/amd_iommu_init.c 1006 */;
}
