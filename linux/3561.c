cocci_test_suite() {
	u32 *cocci_id/* drivers/mmc/host/mtk-sd.c 988 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/mtk-sd.c 986 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/mtk-sd.c 939 */;
	unsigned int cocci_id/* drivers/mmc/host/mtk-sd.c 926 */;
	unsigned char cocci_id/* drivers/mmc/host/mtk-sd.c 749 */;
	struct mt_bdma_desc *cocci_id/* drivers/mmc/host/mtk-sd.c 619 */;
	struct mt_gpdma_desc *cocci_id/* drivers/mmc/host/mtk-sd.c 618 */;
	struct scatterlist *cocci_id/* drivers/mmc/host/mtk-sd.c 617 */;
	dma_addr_t cocci_id/* drivers/mmc/host/mtk-sd.c 615 */;
	struct msdc_dma *cocci_id/* drivers/mmc/host/mtk-sd.c 611 */;
	u8 *cocci_id/* drivers/mmc/host/mtk-sd.c 602 */;
	const u32 cocci_id/* drivers/mmc/host/mtk-sd.c 595 */;
	void cocci_id/* drivers/mmc/host/mtk-sd.c 592 */(struct msdc_host *host,
							 struct mmc_request *mrq,
							 struct mmc_command *cmd);
	void __iomem *cocci_id/* drivers/mmc/host/mtk-sd.c 552 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/mtk-sd.c 531 */[];
	const struct mtk_mmc_compatible cocci_id/* drivers/mmc/host/mtk-sd.c 473 */;
	struct msdc_host {
		struct device *dev;
		const struct mtk_mmc_compatible *dev_comp;
		struct mmc_host *mmc;
		int cmd_rsp;
		spinlock_t lock;
		struct mmc_request *mrq;
		struct mmc_command *cmd;
		struct mmc_data *data;
		int error;
		void __iomem *base;
		void __iomem *top_base;
		struct msdc_dma dma;
		u64 dma_mask;
		u32 timeout_ns;
		u32 timeout_clks;
		struct pinctrl *pinctrl;
		struct pinctrl_state *pins_default;
		struct pinctrl_state *pins_uhs;
		struct delayed_work req_timeout;
		int irq;
		struct clk *src_clk;
		struct clk *h_clk;
		struct clk *bus_clk;
		struct clk *src_clk_cg;
		u32 mclk;
		u32 src_clk_freq;
		unsigned char timing;
		bool vqmmc_enabled;
		u32 latch_ck;
		u32 hs400_ds_delay;
		u32 hs200_cmd_int_delay;
		u32 hs400_cmd_int_delay;
		bool hs400_cmd_resp_sel_rising;
		bool hs400_mode;
		bool internal_cd;
		struct msdc_save_para save_para;
		struct msdc_tune_para def_tune_para;
		struct msdc_tune_para saved_tune_para;
	} cocci_id/* drivers/mmc/host/mtk-sd.c 389 */;
	struct msdc_delay_phase {
		u8 maxlen;
		u8 start;
		u8 final_phase;
	} cocci_id/* drivers/mmc/host/mtk-sd.c 383 */;
	struct msdc_tune_para {
		u32 iocon;
		u32 pad_tune;
		u32 pad_cmd_tune;
		u32 emmc_top_control;
		u32 emmc_top_cmd;
	} cocci_id/* drivers/mmc/host/mtk-sd.c 375 */;
	struct mtk_mmc_compatible {
		u8 clk_div_bits;
		bool hs400_tune;
		u32 pad_tune_reg;
		bool async_fifo;
		bool data_tune;
		bool busy_check;
		bool stop_clk_fix;
		bool enhance_rx;
		bool support_64g;
		bool use_internal_cd;
	} cocci_id/* drivers/mmc/host/mtk-sd.c 362 */;
	struct msdc_save_para {
		u32 msdc_cfg;
		u32 iocon;
		u32 sdc_cfg;
		u32 pad_tune;
		u32 patch_bit0;
		u32 patch_bit1;
		u32 patch_bit2;
		u32 pad_ds_tune;
		u32 pad_cmd_tune;
		u32 emmc50_cfg0;
		u32 emmc50_cfg3;
		u32 sdc_fifo_cfg;
		u32 emmc_top_control;
		u32 emmc_top_cmd;
		u32 emmc50_pad_ds_tune;
	} cocci_id/* drivers/mmc/host/mtk-sd.c 344 */;
	struct msdc_dma {
		struct scatterlist *sg;
		struct mt_gpdma_desc *gpd;
		struct mt_bdma_desc *bd;
		dma_addr_t gpd_addr;
		dma_addr_t bd_addr;
	} cocci_id/* drivers/mmc/host/mtk-sd.c 336 */;
	struct mt_bdma_desc {
		u32 bd_info;
#define BDMA_DESC_EOL (0x1 << 0)
#define BDMA_DESC_CHECKSUM (0xff << 8)
#define BDMA_DESC_BLKPAD (0x1 << 17)
#define BDMA_DESC_DWPAD (0x1 << 18)
#define BDMA_DESC_NEXT_H4 (0xf << 24)
#define BDMA_DESC_PTR_H4 (0xf << 28)
								u32 next;
		u32 ptr;
		u32 bd_data_len;
#define BDMA_DESC_BUFLEN (0xffff)
#define BDMA_DESC_BUFLEN_EXT (0xffffff)
			} cocci_id/* drivers/mmc/host/mtk-sd.c 321 */;
	struct mt_gpdma_desc {
		u32 gpd_info;
#define GPDMA_DESC_HWO (0x1 << 0)
#define GPDMA_DESC_BDP (0x1 << 1)
#define GPDMA_DESC_CHECKSUM (0xff << 8)
#define GPDMA_DESC_INT (0x1 << 16)
#define GPDMA_DESC_NEXT_H4 (0xf << 24)
#define GPDMA_DESC_PTR_H4 (0xf << 28)
								u32 next;
		u32 ptr;
		u32 gpd_data_len;
#define GPDMA_DESC_BUFLEN (0xffff)
#define GPDMA_DESC_EXTLEN (0xff << 16)
				u32 arg;
		u32 blknum;
		u32 cmd;
	} cocci_id/* drivers/mmc/host/mtk-sd.c 303 */;
	struct platform_driver cocci_id/* drivers/mmc/host/mtk-sd.c 2472 */;
	struct device *cocci_id/* drivers/mmc/host/mtk-sd.c 2455 */;
	struct mt_bdma_desc cocci_id/* drivers/mmc/host/mtk-sd.c 2309 */;
	struct mt_gpdma_desc cocci_id/* drivers/mmc/host/mtk-sd.c 2306 */;
	struct msdc_host cocci_id/* drivers/mmc/host/mtk-sd.c 2188 */;
	struct resource *cocci_id/* drivers/mmc/host/mtk-sd.c 2179 */;
	struct platform_device *cocci_id/* drivers/mmc/host/mtk-sd.c 2175 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/mtk-sd.c 2137 */;
	unsigned long cocci_id/* drivers/mmc/host/mtk-sd.c 2111 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/mtk-sd.c 1874 */;
	u8 cocci_id/* drivers/mmc/host/mtk-sd.c 1722 */;
	u32 cocci_id/* drivers/mmc/host/mtk-sd.c 1718 */;
	struct msdc_delay_phase cocci_id/* drivers/mmc/host/mtk-sd.c 1718 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/mtk-sd.c 1655 */;
	irqreturn_t cocci_id/* drivers/mmc/host/mtk-sd.c 1417 */;
	void *cocci_id/* drivers/mmc/host/mtk-sd.c 1417 */;
	struct msdc_host *cocci_id/* drivers/mmc/host/mtk-sd.c 1391 */;
	int cocci_id/* drivers/mmc/host/mtk-sd.c 1391 */;
	void cocci_id/* drivers/mmc/host/mtk-sd.c 1391 */;
	struct work_struct *cocci_id/* drivers/mmc/host/mtk-sd.c 1366 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/mtk-sd.c 1042 */;
	bool cocci_id/* drivers/mmc/host/mtk-sd.c 1041 */;
}
