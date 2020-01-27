cocci_test_suite() {
	const struct mtd_ooblayout_ops cocci_id/* drivers/mtd/nand/raw/meson_nand.c 980 */;
	struct mtd_oob_region *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 953 */;
	const struct nand_operation *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 893 */;
	const void *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 882 */;
	const struct nand_op_instr *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 841 */;
	void *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 840 */;
	u64 cocci_id/* drivers/mtd/nand/raw/meson_nand.c 775 */;
	struct nand_ecc_ctrl *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 774 */;
	__le64 *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 699 */;
	struct nand_rw_cmd cocci_id/* drivers/mtd/nand/raw/meson_nand.c 585 */;
	const struct nand_sdr_timings *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 578 */;
	enum dma_data_direction cocci_id/* drivers/mtd/nand/raw/meson_nand.c 514 */;
	u64 *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 445 */;
	u32 *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 444 */;
	const u8 *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 372 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 341 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/meson_nand.c 309 */;
	bool cocci_id/* drivers/mtd/nand/raw/meson_nand.c 265 */;
	struct meson_nand_ecc cocci_id/* drivers/mtd/nand/raw/meson_nand.c 190 */[];
	enum{NFC_ECC_BCH8_1K=2, NFC_ECC_BCH24_1K, NFC_ECC_BCH30_1K, NFC_ECC_BCH40_1K, NFC_ECC_BCH50_1K, NFC_ECC_BCH60_1K,} cocci_id/* drivers/mtd/nand/raw/meson_nand.c 179 */;
	struct meson_nfc {
		struct nand_controller controller;
		struct clk *core_clk;
		struct clk *device_clk;
		struct clk *phase_tx;
		struct clk *phase_rx;
		unsigned long clk_rate;
		u32 bus_timing;
		struct device *dev;
		void __iomem *reg_base;
		struct regmap *reg_clk;
		struct completion completion;
		struct list_head chips;
		const struct meson_nfc_data *data;
		struct meson_nfc_param param;
		struct nand_timing timing;
		union {
			int cmd[32];
			struct nand_rw_cmd rw;
		} cmdfifo;
		dma_addr_t daddr;
		dma_addr_t iaddr;
		unsigned long assigned_cs;
	} cocci_id/* drivers/mtd/nand/raw/meson_nand.c 150 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1455 */;
	struct nand_timing {
		u32 twb;
		u32 tadl;
		u32 tbers_max;
	} cocci_id/* drivers/mtd/nand/raw/meson_nand.c 144 */;
	struct nand_rw_cmd {
		u32 cmd0;
		u32 addrs[MAX_CYCLE_ADDRS];
		u32 cmd1;
	} cocci_id/* drivers/mtd/nand/raw/meson_nand.c 138 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1371 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1367 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1355 */[];
	const struct meson_nfc_data cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1351 */;
	irqreturn_t cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1331 */;
	struct meson_nfc_param {
		u32 chip_select;
		u32 rb_select;
	} cocci_id/* drivers/mtd/nand/raw/meson_nand.c 133 */;
	struct meson_nfc_nand_chip cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1298 */;
	struct meson_nfc_data {
		const struct nand_ecc_caps *ecc_caps;
	} cocci_id/* drivers/mtd/nand/raw/meson_nand.c 129 */;
	struct meson_nand_ecc {
		u32 bch;
		u32 strength;
	} cocci_id/* drivers/mtd/nand/raw/meson_nand.c 124 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1228 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1227 */;
	const struct nand_controller_ops cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1219 */;
	struct meson_nfc *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1164 */;
	void cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1157 */;
	const struct nand_data_interface *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1098 */;
	u32 cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1076 */;
	struct meson_nfc_nand_chip *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1075 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1074 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1072 */;
	int cocci_id/* drivers/mtd/nand/raw/meson_nand.c 1072 */;
	struct meson_nfc_nand_chip {
		struct list_head node;
		struct nand_chip nand;
		unsigned long clk_rate;
		unsigned long level1_divider;
		u32 bus_timing;
		u32 twb;
		u32 tadl;
		u32 tbers_max;
		u32 bch_mode;
		u8 *data_buf;
		__le64 *info_buf;
		u32 nsels;
		u8 sels[0];
	} cocci_id/* drivers/mtd/nand/raw/meson_nand.c 107 */;
}
