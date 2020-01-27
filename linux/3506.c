cocci_test_suite() {
	u32 cocci_id/* drivers/mmc/host/meson-gx-mmc.c 998 */;
	struct meson_host *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 997 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 995 */;
	int cocci_id/* drivers/mmc/host/meson-gx-mmc.c 995 */;
	void cocci_id/* drivers/mmc/host/meson-gx-mmc.c 980 */;
	irqreturn_t cocci_id/* drivers/mmc/host/meson-gx-mmc.c 841 */;
	void *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 841 */;
	unsigned int cocci_id/* drivers/mmc/host/meson-gx-mmc.c 720 */;
	struct scatterlist *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 707 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 706 */;
	struct sd_emmc_desc *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 705 */;
	u32 *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 685 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 567 */;
	char cocci_id/* drivers/mmc/host/meson-gx-mmc.c 426 */[16];
	struct clk *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 425 */;
	const char *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 412 */[1];
	const char *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 411 */[MUX_CLK_NUM_PARENTS];
	char cocci_id/* drivers/mmc/host/meson-gx-mmc.c 409 */[32];
	struct clk_divider *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 408 */;
	struct clk_mux *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 407 */;
	struct clk_init_data cocci_id/* drivers/mmc/host/meson-gx-mmc.c 406 */;
	unsigned long cocci_id/* drivers/mmc/host/meson-gx-mmc.c 338 */;
	bool cocci_id/* drivers/mmc/host/meson-gx-mmc.c 267 */;
	const struct mmc_data *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 267 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 225 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 213 */;
	struct meson_host {
		struct device *dev;
		struct meson_mmc_data *data;
		struct mmc_host *mmc;
		struct mmc_command *cmd;
		void __iomem *regs;
		struct clk *core_clk;
		struct clk *mux_clk;
		struct clk *mmc_clk;
		unsigned long req_rate;
		bool ddr;
		bool dram_access_quirk;
		struct pinctrl *pinctrl;
		struct pinctrl_state *pins_default;
		struct pinctrl_state *pins_clk_gate;
		unsigned int bounce_buf_size;
		void *bounce_buf;
		dma_addr_t bounce_dma_addr;
		struct sd_emmc_desc *descs;
		dma_addr_t descs_dma_addr;
		int irq;
		bool vqmmc_enabled;
	} cocci_id/* drivers/mmc/host/meson-gx-mmc.c 148 */;
	struct sd_emmc_desc {
		u32 cmd_cfg;
		u32 cmd_arg;
		u32 cmd_data;
		u32 cmd_resp;
	} cocci_id/* drivers/mmc/host/meson-gx-mmc.c 141 */;
	struct meson_mmc_data {
		unsigned int tx_delay_mask;
		unsigned int rx_delay_mask;
		unsigned int always_on;
		unsigned int adjust;
	} cocci_id/* drivers/mmc/host/meson-gx-mmc.c 134 */;
	struct platform_driver cocci_id/* drivers/mmc/host/meson-gx-mmc.c 1271 */;
	const struct of_device_id cocci_id/* drivers/mmc/host/meson-gx-mmc.c 1261 */[];
	const struct meson_mmc_data cocci_id/* drivers/mmc/host/meson-gx-mmc.c 1254 */;
	struct sd_emmc_desc cocci_id/* drivers/mmc/host/meson-gx-mmc.c 1160 */;
	struct meson_mmc_data *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 1070 */;
	struct meson_host cocci_id/* drivers/mmc/host/meson-gx-mmc.c 1045 */;
	struct resource *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 1040 */;
	struct platform_device *cocci_id/* drivers/mmc/host/meson-gx-mmc.c 1038 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/meson-gx-mmc.c 1027 */;
}