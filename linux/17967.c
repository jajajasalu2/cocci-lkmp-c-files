cocci_test_suite() {
	struct pci_msiq_entry {
		u64 word0;
#define MSIQ_WORD0_RESV 0x8000000000000000UL
#define MSIQ_WORD0_FMT_TYPE 0x7f00000000000000UL
#define MSIQ_WORD0_FMT_TYPE_SHIFT 56
#define MSIQ_WORD0_LEN 0x00ffc00000000000UL
#define MSIQ_WORD0_LEN_SHIFT 46
#define MSIQ_WORD0_ADDR0 0x00003fff00000000UL
#define MSIQ_WORD0_ADDR0_SHIFT 32
#define MSIQ_WORD0_RID 0x00000000ffff0000UL
#define MSIQ_WORD0_RID_SHIFT 16
#define MSIQ_WORD0_DATA0 0x000000000000ffffUL
#define MSIQ_WORD0_DATA0_SHIFT 0
#define MSIQ_TYPE_MSG 0x6
#define MSIQ_TYPE_MSI32 0xb
#define MSIQ_TYPE_MSI64 0xf
		u64 word1;
#define MSIQ_WORD1_ADDR1 0xffffffffffff0000UL
#define MSIQ_WORD1_ADDR1_SHIFT 16
#define MSIQ_WORD1_DATA1 0x000000000000ffffUL
#define MSIQ_WORD1_DATA1_SHIFT 0
		u64 resv[6];
	} cocci_id/* arch/sparc/kernel/pci_fire.c 77 */;
	int __init cocci_id/* arch/sparc/kernel/pci_fire.c 518 */;
	void cocci_id/* arch/sparc/kernel/pci_fire.c 518 */;
	struct platform_driver cocci_id/* arch/sparc/kernel/pci_fire.c 510 */;
	const struct of_device_id cocci_id/* arch/sparc/kernel/pci_fire.c 502 */[];
	struct iommu cocci_id/* arch/sparc/kernel/pci_fire.c 476 */;
	u32 cocci_id/* arch/sparc/kernel/pci_fire.c 464 */;
	struct iommu *cocci_id/* arch/sparc/kernel/pci_fire.c 463 */;
	struct pci_pbm_info *cocci_id/* arch/sparc/kernel/pci_fire.c 462 */;
	struct device_node *cocci_id/* arch/sparc/kernel/pci_fire.c 461 */;
	struct platform_device *cocci_id/* arch/sparc/kernel/pci_fire.c 459 */;
	int cocci_id/* arch/sparc/kernel/pci_fire.c 459 */;
	const struct linux_prom64_registers *cocci_id/* arch/sparc/kernel/pci_fire.c 416 */;
	u64 cocci_id/* arch/sparc/kernel/pci_fire.c 368 */;
	u32 cocci_id/* arch/sparc/kernel/pci_fire.c 33 */[2];
	const struct sparc64_msiq_ops cocci_id/* arch/sparc/kernel/pci_fire.c 307 */;
	unsigned int cocci_id/* arch/sparc/kernel/pci_fire.c 281 */;
	void *cocci_id/* arch/sparc/kernel/pci_fire.c 243 */;
	char *cocci_id/* arch/sparc/kernel/pci_fire.c 242 */;
	struct pci_msiq_entry *cocci_id/* arch/sparc/kernel/pci_fire.c 161 */;
	unsigned long *cocci_id/* arch/sparc/kernel/pci_fire.c 158 */;
	unsigned long cocci_id/* arch/sparc/kernel/pci_fire.c 157 */;
}
