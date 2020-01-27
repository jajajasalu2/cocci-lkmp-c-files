cocci_test_suite() {
	struct via_isa_bridge {
		char *name;
		u16 id;
		u8 rev_min;
		u8 rev_max;
		u8 udma_mask;
		u8 flags;
	} cocci_id/* drivers/ide/via82cxxx.c 64 */[];
	enum{VIA_IDFLAG_SINGLE=(1 << 1),} cocci_id/* drivers/ide/via82cxxx.c 56 */;
	void __exit cocci_id/* drivers/ide/via82cxxx.c 523 */;
	int __init cocci_id/* drivers/ide/via82cxxx.c 518 */;
	struct pci_driver cocci_id/* drivers/ide/via82cxxx.c 509 */;
	const struct pci_device_id cocci_id/* drivers/ide/via82cxxx.c 497 */[];
	struct ide_port_info cocci_id/* drivers/ide/via82cxxx.c 422 */;
	const struct pci_device_id *cocci_id/* drivers/ide/via82cxxx.c 415 */;
	const struct ide_port_info cocci_id/* drivers/ide/via82cxxx.c 402 */;
	const struct ide_port_ops cocci_id/* drivers/ide/via82cxxx.c 396 */;
	ide_hwif_t *cocci_id/* drivers/ide/via82cxxx.c 378 */;
	const struct dmi_system_id cocci_id/* drivers/ide/via82cxxx.c 353 */[];
	u32 cocci_id/* drivers/ide/via82cxxx.c 299 */;
	u8 cocci_id/* drivers/ide/via82cxxx.c 298 */;
	struct via_isa_bridge *cocci_id/* drivers/ide/via82cxxx.c 297 */;
	struct via82cxxx_dev *cocci_id/* drivers/ide/via82cxxx.c 296 */;
	struct ide_host *cocci_id/* drivers/ide/via82cxxx.c 295 */;
	struct pci_dev *cocci_id/* drivers/ide/via82cxxx.c 293 */;
	int cocci_id/* drivers/ide/via82cxxx.c 293 */;
	void cocci_id/* drivers/ide/via82cxxx.c 241 */;
	struct pci_dev **cocci_id/* drivers/ide/via82cxxx.c 219 */;
	const u8 cocci_id/* drivers/ide/via82cxxx.c 183 */;
	struct ide_timing cocci_id/* drivers/ide/via82cxxx.c 181 */;
	ide_drive_t *cocci_id/* drivers/ide/via82cxxx.c 175 */;
	struct ide_timing *cocci_id/* drivers/ide/via82cxxx.c 121 */;
	struct via82cxxx_dev {
		struct via_isa_bridge *via_config;
		unsigned int via_80w;
	} cocci_id/* drivers/ide/via82cxxx.c 106 */;
	char *cocci_id/* drivers/ide/via82cxxx.c 104 */[];
	unsigned int cocci_id/* drivers/ide/via82cxxx.c 103 */;
}
