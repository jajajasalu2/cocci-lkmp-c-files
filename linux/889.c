cocci_test_suite() {
	enum dma_transfer_direction cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 900 */;
	struct dma_slave_config cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 899 */;
	struct scatterlist *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 898 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 897 */;
	const void *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 893 */;
	struct bam_cmd_element cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 839 */;
	struct bam_cmd_element *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 812 */;
	struct dma_chan *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 728 */;
	u16 cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 660 */;
	__le32 *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 651 */;
	struct nandc_regs *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 650 */;
	struct qcom_nand_controller cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 568 */;
	struct qcom_nand_host cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 562 */;
	void cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 516 */;
	void *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 485 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 484 */;
	size_t cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 483 */;
	struct qcom_nand_controller *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 480 */;
	struct bam_transaction *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 479 */;
	struct qcom_nandc_props {
		u32 ecc_modes;
		bool is_bam;
		u32 dev_cmd_reg_start;
	} cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 464 */;
	struct qcom_nand_host {
		struct nand_chip chip;
		struct list_head node;
		int cs;
		int cw_size;
		int cw_data;
		bool use_ecc;
		bool bch_enabled;
		int ecc_bytes_hw;
		int spare_bytes;
		int bbm_size;
		u8 status;
		int last_command;
		u32 cfg0,cfg1;
		u32 cfg0_raw,cfg1_raw;
		u32 ecc_buf_cfg;
		u32 ecc_bch_cfg;
		u32 clrflashstatus;
		u32 clrreadstatus;
	} cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 434 */;
	struct qcom_nand_controller {
		struct nand_controller controller;
		struct list_head host_list;
		struct device *dev;
		void __iomem *base;
		phys_addr_t base_phys;
		dma_addr_t base_dma;
		struct clk *core_clk;
		struct clk *aon_clk;
		union {
			struct {
				struct dma_chan *tx_chan;
				struct dma_chan *rx_chan;
				struct dma_chan *cmd_chan;
			};
			struct {
				struct dma_chan *chan;
				unsigned int cmd_crci;
				unsigned int data_crci;
			};
		};
		struct list_head desc_list;
		struct bam_transaction *bam_txn;
		u8 *data_buffer;
		int buf_size;
		int buf_count;
		int buf_start;
		unsigned int max_cwperpage;
		__le32 *reg_read_buf;
		dma_addr_t reg_read_dma;
		int reg_read_pos;
		struct nandc_regs *regs;
		u32 cmd1,vld;
		const struct qcom_nandc_props *props;
	} cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 359 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 3040 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 3023 */[];
	const struct qcom_nandc_props cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 3007 */;
	struct nandc_regs {
		__le32 cmd;
		__le32 addr0;
		__le32 addr1;
		__le32 chip_sel;
		__le32 exec;
		__le32 cfg0;
		__le32 cfg1;
		__le32 ecc_bch_cfg;
		__le32 clrflashstatus;
		__le32 clrreadstatus;
		__le32 cmd1;
		__le32 vld;
		__le32 orig_cmd1;
		__le32 orig_vld;
		__le32 ecc_buf_cfg;
		__le32 read_location0;
		__le32 read_location1;
		__le32 read_location2;
		__le32 read_location3;
		__le32 erased_cw_detect_cfg_clr;
		__le32 erased_cw_detect_cfg_set;
	} cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 293 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 2903 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 2873 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 2779 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 2775 */;
	struct desc_info {
		struct list_head node;
		enum dma_data_direction dir;
		union {
			struct scatterlist adm_sgl;
			struct {
				struct scatterlist *bam_sgl;
				int sgl_cnt;
			};
		};
		struct dma_async_tx_descriptor *dma_desc;
	} cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 275 */;
	const struct nand_controller_ops cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 2627 */;
	struct bam_transaction {
		struct bam_cmd_element *bam_ce;
		struct scatterlist *cmd_sgl;
		struct scatterlist *data_sgl;
		u32 bam_ce_pos;
		u32 bam_ce_start;
		u32 cmd_sgl_pos;
		u32 cmd_sgl_start;
		u32 tx_sgl_pos;
		u32 tx_sgl_start;
		u32 rx_sgl_pos;
		u32 rx_sgl_start;
		bool wait_second_completion;
		struct completion txn_done;
		struct dma_async_tx_descriptor *last_data_desc;
		struct dma_async_tx_descriptor *last_cmd_desc;
	} cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 247 */;
	const struct mtd_ooblayout_ops cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 2449 */;
	struct mtd_oob_region *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 2412 */;
	const uint8_t *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 2304 */;
	uint8_t *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 2295 */;
	uint8_t cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 2274 */;
	loff_t cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 2189 */;
	struct read_stats *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1732 */;
	struct nand_ecc_ctrl *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1671 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1670 */;
	unsigned long cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1666 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1665 */;
	u32 cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1572 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1567 */;
	struct qcom_nand_host *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1565 */;
	int cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1565 */;
	struct read_stats {
		__le32 flash;
		__le32 buffer;
		__le32 erased_cw;
	} cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1558 */;
	u8 cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1523 */;
	struct desc_info *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1341 */;
	dma_cookie_t cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1286 */;
	bool cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1092 */;
	const u8 *cocci_id/* drivers/mtd/nand/raw/qcom_nandc.c 1047 */;
}
