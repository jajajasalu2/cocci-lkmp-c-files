cocci_test_suite() {
	void __iomem *cocci_id/* drivers/ata/pata_legacy.c 944 */;
	struct platform_device *cocci_id/* drivers/ata/pata_legacy.c 942 */;
	struct ata_host *cocci_id/* drivers/ata/pata_legacy.c 940 */;
	struct ata_port_operations *cocci_id/* drivers/ata/pata_legacy.c 938 */;
	u32 cocci_id/* drivers/ata/pata_legacy.c 937 */;
	unsigned long cocci_id/* drivers/ata/pata_legacy.c 936 */;
	struct legacy_controller *cocci_id/* drivers/ata/pata_legacy.c 934 */;
	struct legacy_probe {
		unsigned char *name;
		unsigned long port;
		unsigned int irq;
		unsigned int slot;
		enum controller type;
		unsigned long private;
	} cocci_id/* drivers/ata/pata_legacy.c 93 */;
	struct legacy_data {
		unsigned long timing;
		u8 clock[2];
		u8 last;
		int fast;
		enum controller type;
		struct platform_device *platform_dev;
	} cocci_id/* drivers/ata/pata_legacy.c 84 */;
	struct legacy_controller cocci_id/* drivers/ata/pata_legacy.c 822 */[];
	enum controller{BIOS=0, SNOOP=1, PDC20230=2, HT6560A=3, HT6560B=4, OPTI611A=5, OPTI46X=6, QDI6500=7, QDI6580=8, QDI6580DP=9, W83759A=10, UNKNOWN=-1,} cocci_id/* drivers/ata/pata_legacy.c 68 */;
	int cocci_id/* drivers/ata/pata_legacy.c 64 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/pata_legacy.c 605 */;
	int cocci_id/* drivers/ata/pata_legacy.c 527 */[4];
	struct ata_port_operations cocci_id/* drivers/ata/pata_legacy.c 368 */;
	struct ata_timing cocci_id/* drivers/ata/pata_legacy.c 351 */;
	u8 cocci_id/* drivers/ata/pata_legacy.c 350 */;
	struct ata_port *cocci_id/* drivers/ata/pata_legacy.c 348 */;
	struct ata_device *cocci_id/* drivers/ata/pata_legacy.c 348 */;
	void cocci_id/* drivers/ata/pata_legacy.c 348 */;
	__le32 cocci_id/* drivers/ata/pata_legacy.c 318 */;
	unsigned char *cocci_id/* drivers/ata/pata_legacy.c 293 */;
	const struct ata_port_operations cocci_id/* drivers/ata/pata_legacy.c 220 */;
	struct scsi_host_template cocci_id/* drivers/ata/pata_legacy.c 216 */;
	struct ata_link *cocci_id/* drivers/ata/pata_legacy.c 202 */;
	struct ata_device **cocci_id/* drivers/ata/pata_legacy.c 202 */;
	enum controller cocci_id/* drivers/ata/pata_legacy.c 160 */;
	unsigned int cocci_id/* drivers/ata/pata_legacy.c 159 */;
	struct legacy_data *cocci_id/* drivers/ata/pata_legacy.c 1240 */;
	struct legacy_probe *cocci_id/* drivers/ata/pata_legacy.c 1176 */;
	struct ata_host *cocci_id/* drivers/ata/pata_legacy.c 116 */[NR_HOST];
	struct legacy_data cocci_id/* drivers/ata/pata_legacy.c 115 */[NR_HOST];
	struct legacy_probe cocci_id/* drivers/ata/pata_legacy.c 114 */[NR_HOST];
	int cocci_id/* drivers/ata/pata_legacy.c 112 */[NR_HOST];
	const unsigned long cocci_id/* drivers/ata/pata_legacy.c 1116 */[2];
	const char *cocci_id/* drivers/ata/pata_legacy.c 1053 */[4];
	u16 cocci_id/* drivers/ata/pata_legacy.c 1037 */;
	struct pci_dev *cocci_id/* drivers/ata/pata_legacy.c 1022 */;
	int *cocci_id/* drivers/ata/pata_legacy.c 1022 */;
	void __init cocci_id/* drivers/ata/pata_legacy.c 1022 */;
	struct legacy_controller {
		const char *name;
		struct ata_port_operations *ops;
		unsigned int pio_mask;
		unsigned int flags;
		unsigned int pflags;
		int (*setup)(struct platform_device *,
			     struct legacy_probe *probe,
			     struct legacy_data *data);
	} cocci_id/* drivers/ata/pata_legacy.c 102 */;
}
