cocci_test_suite() {
	struct skl_dmactrl_mclk_cfg cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 99 */;
	struct skl_tlv_hdr cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 90 */;
	struct skl_dmactrl_sclkfs_cfg cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 89 */;
	struct wav_fmt *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 78 */;
	union skl_clk_ctrl_ipc *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 77 */;
	struct nhlt_fmt_cfg *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 76 */;
	u8 cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 74 */;
	struct platform_driver cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 414 */;
	u32 cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 40 */;
	struct skl_clk_data *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 356 */;
	struct skl_clk_parent_src *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 354 */;
	struct platform_device *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 350 */;
	struct skl_clk_data {
		struct skl_clk_parent parent[SKL_MAX_CLK_SRC];
		struct skl_clk *clk[SKL_MAX_CLK_CNT];
		u8 avail_clk_cnt;
	} cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 34 */;
	struct clk_init_data cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 320 */;
	struct skl_clk_pdata *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 318 */;
	int cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 318 */;
	struct skl_ssp_clk *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 317 */;
	struct skl_clk *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 316 */;
	struct device *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 316 */;
	struct skl_clk_parent *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 285 */;
	unsigned int cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 270 */;
	const struct clk_ops cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 261 */;
	struct skl_clk {
		struct clk_hw hw;
		struct clk_lookup *lookup;
		unsigned long rate;
		struct skl_clk_pdata *pdata;
		u32 id;
	} cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 26 */;
	unsigned long *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 252 */;
	long cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 251 */;
	unsigned long cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 239 */;
	struct skl_clk_parent {
		struct clk_hw *hw;
		struct clk_lookup *lookup;
	} cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 21 */;
	void cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 207 */;
	struct clk_hw *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 200 */;
	struct skl_clk cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 19 */;
	struct skl_clk_rate_cfg_table *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 180 */;
	bool cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 178 */;
	u32 *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 156 */;
	u8 *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 115 */;
	void *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 114 */;
	struct nhlt_specific_cfg *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 110 */;
	struct skl_dev *cocci_id/* sound/soc/intel/skylake/skl-ssp-clk.c 105 */;
}
