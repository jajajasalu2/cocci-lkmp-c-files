cocci_test_suite() {
	size_t cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 919 */;
	struct mtk_ecc_stats cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 890 */;
	void *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 754 */;
	dma_addr_t cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 750 */;
	struct mtk_nfc_fdm *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 683 */;
	u32 cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 633 */;
	void cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 629 */;
	const struct nand_sdr_timings *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 508 */;
	const struct nand_data_interface *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 505 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 414 */;
	struct mtk_nfc *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 217 */;
	struct mtk_nfc_nand_chip *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 210 */;
	const u8 *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 184 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 184 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 184 */;
	int cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 184 */;
	const u8 cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 166 */[];
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1633 */;
	struct mtk_nfc_nand_chip cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1584 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1495 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1490 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1475 */[];
	const struct mtk_nfc_caps cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1448 */;
	struct mtk_nfc {
		struct nand_controller controller;
		struct mtk_ecc_config ecc_cfg;
		struct mtk_nfc_clk clk;
		struct mtk_ecc *ecc;
		struct device *dev;
		const struct mtk_nfc_caps *caps;
		void __iomem *regs;
		struct completion done;
		struct list_head chips;
		u8 *buffer;
		unsigned long assigned_cs;
	} cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 143 */;
	struct mtk_nfc_clk {
		struct clk *nfi_clk;
		struct clk *pad_clk;
	} cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 138 */;
	u8 cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1351 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1332 */;
	const struct nand_controller_ops cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1326 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1292 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1291 */;
	struct mtk_nfc_nand_chip {
		struct list_head node;
		struct nand_chip nand;
		struct mtk_nfc_bad_mark_ctl bad_mark;
		struct mtk_nfc_fdm fdm;
		u32 spare_per_sector;
		int nsels;
		u8 sels[0];
	} cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 125 */;
	struct mtk_nfc_fdm {
		u32 reg_size;
		u32 ecc_size;
	} cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 120 */;
	u32 *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1189 */;
	struct mtk_nfc_bad_mark_ctl *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1175 */;
	const struct mtd_ooblayout_ops cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1152 */;
	struct mtd_oob_region *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1136 */;
	struct mtk_nfc_clk *cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1110 */;
	struct mtk_nfc_bad_mark_ctl {
		void (*bm_swap)(struct mtd_info *, u8 *buf, int raw);
		u32 sec;
		u32 pos;
	} cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 111 */;
	u16 cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1076 */;
	irqreturn_t cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 1073 */;
	struct mtk_nfc_caps {
		const u8 *spare_size;
		u8 num_spare_size;
		u8 pageformat_spare_shift;
		u8 nfi_clk_div;
		u8 max_sector;
		u32 max_sector_size;
	} cocci_id/* drivers/mtd/nand/raw/mtk_nand.c 102 */;
}
