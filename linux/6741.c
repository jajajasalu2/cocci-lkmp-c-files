cocci_test_suite() {
	void __exit cocci_id/* drivers/scsi/zorro_esp.c 955 */;
	int __init cocci_id/* drivers/scsi/zorro_esp.c 950 */;
	struct zorro_driver cocci_id/* drivers/scsi/zorro_esp.c 943 */;
	struct cyber_dma_registers {
		unsigned char dma_addr0;
		unsigned char dmapad1[1];
		unsigned char dma_addr1;
		unsigned char dmapad2[1];
		unsigned char dma_addr2;
		unsigned char dmapad3[1];
		unsigned char dma_addr3;
		unsigned char dmapad4[0x3fb];
		unsigned char cond_reg;
#define ctrl_reg cond_reg
	} cocci_id/* drivers/scsi/zorro_esp.c 92 */;
	struct fastlane_dma_registers cocci_id/* drivers/scsi/zorro_esp.c 846 */;
	struct esp cocci_id/* drivers/scsi/zorro_esp.c 777 */;
	struct blz2060_dma_registers {
		unsigned char dma_led_ctrl;
		unsigned char dmapad1[0x0f];
		unsigned char dma_addr0;
		unsigned char dmapad2[0x03];
		unsigned char dma_addr1;
		unsigned char dmapad3[0x03];
		unsigned char dma_addr2;
		unsigned char dmapad4[0x03];
		unsigned char dma_addr3;
	} cocci_id/* drivers/scsi/zorro_esp.c 75 */;
	unsigned long cocci_id/* drivers/scsi/zorro_esp.c 721 */;
	const struct zorro_driver_data *cocci_id/* drivers/scsi/zorro_esp.c 719 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/zorro_esp.c 717 */;
	struct scsi_host_template *cocci_id/* drivers/scsi/zorro_esp.c 716 */;
	const struct zorro_device_id *cocci_id/* drivers/scsi/zorro_esp.c 714 */;
	struct zorro_dev *cocci_id/* drivers/scsi/zorro_esp.c 713 */;
	const struct zorro_device_id cocci_id/* drivers/scsi/zorro_esp.c 688 */[];
	struct blz1230II_dma_registers {
		unsigned char dma_addr;
		unsigned char dmapad2[0xf];
		unsigned char dma_latch;
	} cocci_id/* drivers/scsi/zorro_esp.c 67 */;
	const struct zorro_driver_data cocci_id/* drivers/scsi/zorro_esp.c 646 */[];
	enum{ZORRO_BLZ1230, ZORRO_BLZ1230II, ZORRO_BLZ2060, ZORRO_CYBER, ZORRO_CYBERII, ZORRO_FASTLANE,} cocci_id/* drivers/scsi/zorro_esp.c 635 */;
	struct zorro_driver_data {
		const char *name;
		unsigned long offset;
		unsigned long dma_offset;
		int absolute;
		int scsi_option;
		const struct esp_driver_ops *esp_ops;
	} cocci_id/* drivers/scsi/zorro_esp.c 624 */;
	struct blz1230_dma_registers {
		unsigned char dma_addr;
		unsigned char dmapad2[0x7fff];
		unsigned char dma_latch;
	} cocci_id/* drivers/scsi/zorro_esp.c 59 */;
	const struct esp_driver_ops cocci_id/* drivers/scsi/zorro_esp.c 562 */;
	struct cyberII_dma_registers __iomem *cocci_id/* drivers/scsi/zorro_esp.c 455 */;
	struct blz2060_dma_registers __iomem *cocci_id/* drivers/scsi/zorro_esp.c 358 */;
	struct blz1230II_dma_registers __iomem *cocci_id/* drivers/scsi/zorro_esp.c 313 */;
	struct blz1230_dma_registers __iomem *cocci_id/* drivers/scsi/zorro_esp.c 262 */;
	unsigned char *cocci_id/* drivers/scsi/zorro_esp.c 250 */;
	struct fastlane_dma_registers __iomem *cocci_id/* drivers/scsi/zorro_esp.c 249 */;
	struct zorro_esp_priv *cocci_id/* drivers/scsi/zorro_esp.c 248 */;
	void cocci_id/* drivers/scsi/zorro_esp.c 246 */;
	u32 cocci_id/* drivers/scsi/zorro_esp.c 224 */;
	unsigned char cocci_id/* drivers/scsi/zorro_esp.c 194 */;
	struct cyber_dma_registers __iomem *cocci_id/* drivers/scsi/zorro_esp.c 193 */;
	struct esp *cocci_id/* drivers/scsi/zorro_esp.c 191 */;
	int cocci_id/* drivers/scsi/zorro_esp.c 191 */;
	u8 cocci_id/* drivers/scsi/zorro_esp.c 177 */;
	struct zorro_esp_priv {
		struct esp *esp;
		void __iomem *board_base;
		int zorro3;
		unsigned char ctrl_data;
	} cocci_id/* drivers/scsi/zorro_esp.c 157 */;
	struct fastlane_dma_registers {
		unsigned char cond_reg;
#define ctrl_reg cond_reg
		char dmapad1[0x3f];
		unsigned char clear_strobe;
	} cocci_id/* drivers/scsi/zorro_esp.c 128 */;
	struct cyberII_dma_registers {
		unsigned char cond_reg;
#define ctrl_reg cond_reg
		unsigned char dmapad4[0x3f];
		unsigned char dma_addr0;
		unsigned char dmapad1[3];
		unsigned char dma_addr1;
		unsigned char dmapad2[3];
		unsigned char dma_addr2;
		unsigned char dmapad3[3];
		unsigned char dma_addr3;
	} cocci_id/* drivers/scsi/zorro_esp.c 113 */;
}
