cocci_test_suite() {
	u32 *cocci_id/* drivers/ide/cs5536.c 58 */;
	enum{MSR_IDE_CFG=0x51300010, PCI_IDE_CFG=0x40, CFG=0, DTC=2, CAST=3, ETC=4, IDE_CFG_CHANEN=(1 << 1), IDE_CFG_CABLE=(1 << 17) | (1 << 16), IDE_D0_SHIFT=24, IDE_D1_SHIFT=16, IDE_DRV_MASK=0xff, IDE_CAST_D0_SHIFT=6, IDE_CAST_D1_SHIFT=4, IDE_CAST_DRV_MASK=0x3, IDE_CAST_CMD_SHIFT=24, IDE_CAST_CMD_MASK=0xff, IDE_ETC_UDMA_MASK=0xc0,} cocci_id/* drivers/ide/cs5536.c 30 */;
	struct pci_driver cocci_id/* drivers/ide/cs5536.c 277 */;
	const struct pci_device_id cocci_id/* drivers/ide/cs5536.c 272 */[];
	const struct pci_device_id *cocci_id/* drivers/ide/cs5536.c 255 */;
	const struct ide_port_info cocci_id/* drivers/ide/cs5536.c 239 */;
	const struct ide_dma_ops cocci_id/* drivers/ide/cs5536.c 228 */;
	const struct ide_port_ops cocci_id/* drivers/ide/cs5536.c 222 */;
	unsigned long cocci_id/* drivers/ide/cs5536.c 213 */;
	ide_drive_t *cocci_id/* drivers/ide/cs5536.c 210 */;
	int cocci_id/* drivers/ide/cs5536.c 210 */;
	void cocci_id/* drivers/ide/cs5536.c 199 */;
	void *cocci_id/* drivers/ide/cs5536.c 193 */;
	const u8 cocci_id/* drivers/ide/cs5536.c 182 */;
	const u8 cocci_id/* drivers/ide/cs5536.c 174 */[3];
	const u8 cocci_id/* drivers/ide/cs5536.c 170 */[6];
	const u8 cocci_id/* drivers/ide/cs5536.c 122 */[5];
	u32 cocci_id/* drivers/ide/cs5536.c 104 */;
	struct pci_dev *cocci_id/* drivers/ide/cs5536.c 103 */;
	u8 cocci_id/* drivers/ide/cs5536.c 101 */;
	ide_hwif_t *cocci_id/* drivers/ide/cs5536.c 101 */;
}
