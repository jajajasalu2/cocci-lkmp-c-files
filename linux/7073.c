cocci_test_suite() {
	enum ata_clock cocci_id/* drivers/ide/hpt366.c 913 */;
	const char *cocci_id/* drivers/ide/hpt366.c 910 */;
	struct request *cocci_id/* drivers/ide/hpt366.c 836 */;
	unsigned long cocci_id/* drivers/ide/hpt366.c 798 */;
	u16 cocci_id/* drivers/ide/hpt366.c 716 */;
	ide_hwif_t *cocci_id/* drivers/ide/hpt366.c 705 */;
	struct pci_dev *cocci_id/* drivers/ide/hpt366.c 690 */;
	void cocci_id/* drivers/ide/hpt366.c 688 */;
	const u8 cocci_id/* drivers/ide/hpt366.c 635 */;
	struct hpt_timings *cocci_id/* drivers/ide/hpt366.c 632 */;
	int cocci_id/* drivers/ide/hpt366.c 613 */;
	u8 cocci_id/* drivers/ide/hpt366.c 611 */;
	u32 cocci_id/* drivers/ide/hpt366.c 611 */;
	struct hpt_info *cocci_id/* drivers/ide/hpt366.c 611 */;
	struct device *cocci_id/* drivers/ide/hpt366.c 540 */;
	char *cocci_id/* drivers/ide/hpt366.c 537 */;
	bool cocci_id/* drivers/ide/hpt366.c 535 */;
	ide_drive_t *cocci_id/* drivers/ide/hpt366.c 535 */;
	const char **cocci_id/* drivers/ide/hpt366.c 535 */;
	const struct hpt_info cocci_id/* drivers/ide/hpt366.c 495 */;
	struct hpt_timings cocci_id/* drivers/ide/hpt366.c 421 */;
	enum{HPT36x, HPT370, HPT370A, HPT374, HPT372, HPT372A, HPT302, HPT371, HPT372N, HPT302N, HPT371N,} cocci_id/* drivers/ide/hpt366.c 407 */;
	struct hpt_info {
		char *chip_name;
		u8 chip_type;
		u8 udma_mask;
		u8 dpll_clk;
		u8 pci_clk;
		struct hpt_timings *timings;
		u8 clock;
	} cocci_id/* drivers/ide/hpt366.c 396 */;
	struct hpt_timings {
		u32 pio_mask;
		u32 dma_mask;
		u32 ultra_mask;
		u32 *clock_table[NUM_ATA_CLOCKS];
	} cocci_id/* drivers/ide/hpt366.c 385 */;
	enum ata_clock{ATA_CLOCK_25MHZ, ATA_CLOCK_33MHZ, ATA_CLOCK_40MHZ, ATA_CLOCK_50MHZ, ATA_CLOCK_66MHZ, NUM_ATA_CLOCKS,} cocci_id/* drivers/ide/hpt366.c 376 */;
	u32 cocci_id/* drivers/ide/hpt366.c 328 */[];
	u8 cocci_id/* drivers/ide/hpt366.c 198 */[];
	void __exit cocci_id/* drivers/ide/hpt366.c 1535 */;
	int __init cocci_id/* drivers/ide/hpt366.c 1530 */;
	struct pci_driver cocci_id/* drivers/ide/hpt366.c 1521 */;
	const struct pci_device_id cocci_id/* drivers/ide/hpt366.c 1510 */[];
	struct ide_info *cocci_id/* drivers/ide/hpt366.c 1502 */;
	struct ide_host *cocci_id/* drivers/ide/hpt366.c 1501 */;
	const char *cocci_id/* drivers/ide/hpt366.c 143 */[];
	struct ide_port_info cocci_id/* drivers/ide/hpt366.c 1407 */;
	const struct hpt_info *cocci_id/* drivers/ide/hpt366.c 1404 */;
	const struct pci_device_id *cocci_id/* drivers/ide/hpt366.c 1402 */;
	const struct ide_port_info cocci_id/* drivers/ide/hpt366.c 1361 */[];
	const struct ide_dma_ops cocci_id/* drivers/ide/hpt366.c 1350 */;
	const struct ide_port_ops cocci_id/* drivers/ide/hpt366.c 1318 */;
	const struct ide_port_info *cocci_id/* drivers/ide/hpt366.c 1222 */;
}
