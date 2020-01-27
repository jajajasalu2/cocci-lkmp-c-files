cocci_test_suite() {
	const char *constcocci_id/* drivers/soc/mediatek/mtk-scpsys.c 95 */[];
	enum clk_id{CLK_NONE, CLK_MM, CLK_MFG, CLK_VENC, CLK_VENC_LT, CLK_ETHIF, CLK_VDEC, CLK_HIFSEL, CLK_JPGDEC, CLK_AUDIO, CLK_MAX,} cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 81 */;
	const struct scp_subdomain cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 743 */[];
	const struct scp_domain_data cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 556 */[];
	struct clk *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 497 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 488 */;
	struct scp_domain *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 470 */;
	struct clk *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 431 */[CLK_MAX];
	struct resource *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 428 */;
	struct genpd_onecell_data *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 427 */;
	bool cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 425 */;
	const struct scp_ctrl_reg *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 424 */;
	const struct scp_domain_data *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 423 */;
	struct scp *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 422 */;
	int cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 416 */;
	struct platform_device *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 414 */;
	struct clk **cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 414 */;
	void cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 414 */;
	void __iomem *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 365 */;
	struct scp_domain cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 363 */;
	struct clk *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 210 */[];
	u32 cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 176 */;
	struct scp_soc_data {
		const struct scp_domain_data *domains;
		int num_domains;
		const struct scp_subdomain *subdomains;
		int num_subdomains;
		const struct scp_ctrl_reg regs;
		bool bus_prot_reg_update;
	} cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 163 */;
	struct scp_subdomain {
		int origin;
		int subdomain;
	} cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 158 */;
	struct scp {
		struct scp_domain *domains;
		struct genpd_onecell_data pd_data;
		struct device *dev;
		void __iomem *base;
		struct regmap *infracfg;
		struct scp_ctrl_reg ctrl_reg;
		bool bus_prot_reg_update;
	} cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 148 */;
	struct scp_ctrl_reg {
		int pwr_sta_offs;
		int pwr_sta2nd_offs;
	} cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 143 */;
	struct scp_domain {
		struct generic_pm_domain genpd;
		struct scp *scp;
		struct clk *clk[MAX_CLKS];
		const struct scp_domain_data *data;
		struct regulator *supply;
	} cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 135 */;
	struct scp cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 133 */;
	struct scp_domain_data {
		const char *name;
		u32 sta_mask;
		int ctl_offs;
		u32 sram_pdn_bits;
		u32 sram_pdn_ack_bits;
		u32 bus_prot_mask;
		enum clk_id clk_id[MAX_CLKS];
		u8 caps;
	} cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 122 */;
	struct platform_driver cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 1137 */;
	const struct scp_soc_data *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 1110 */;
	const struct scp_subdomain *cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 1109 */;
	const struct of_device_id cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 1083 */[];
	const struct scp_soc_data cocci_id/* drivers/soc/mediatek/mtk-scpsys.c 1013 */;
}
