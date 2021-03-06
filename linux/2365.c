cocci_test_suite() {
	struct elf32_phdr *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 966 */;
	ssize_t cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 938 */;
	char *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 936 */;
	bool cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 935 */;
	phys_addr_t cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 931 */;
	struct elf32_hdr *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 930 */;
	const struct elf32_phdr *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 926 */;
	u32 cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 873 */;
	size_t cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 677 */;
	dma_addr_t cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 673 */;
	unsigned long cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 672 */;
	unsigned int cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 641 */;
	struct regmap *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 637 */;
	s32 cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 447 */;
	const struct firmware *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 382 */;
	struct qcom_scm_vmperm cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 366 */;
	int *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 362 */;
	struct clk **cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 319 */;
	struct device *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 318 */;
	void cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 318 */;
	struct reg_info *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 281 */;
	const struct qcom_mss_reg_res *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 205 */;
	enum{MSS_MSM8916, MSS_MSM8974, MSS_MSM8996, MSS_MSM8998, MSS_SDM845,} cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 196 */;
	struct platform_driver cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1725 */;
	const struct of_device_id cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1714 */[];
	char *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1659 */[];
	struct qcom_mss_reg_res cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1644 */[];
	const struct rproc_hexagon_res cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1642 */;
	const char *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1393 */;
	const struct rproc_hexagon_res *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1390 */;
	struct q6v5 {
		struct device *dev;
		struct rproc *rproc;
		void __iomem *reg_base;
		void __iomem *rmb_base;
		struct regmap *halt_map;
		u32 halt_q6;
		u32 halt_modem;
		u32 halt_nc;
		struct reset_control *mss_restart;
		struct reset_control *pdc_reset;
		struct qcom_q6v5 q6v5;
		struct clk *active_clks[8];
		struct clk *reset_clks[4];
		struct clk *proxy_clks[4];
		struct device *active_pds[1];
		struct device *proxy_pds[3];
		int active_clk_count;
		int reset_clk_count;
		int proxy_clk_count;
		int active_pd_count;
		int proxy_pd_count;
		struct reg_info active_regs[1];
		struct reg_info proxy_regs[3];
		int active_reg_count;
		int proxy_reg_count;
		bool running;
		bool dump_mba_loaded;
		unsigned long dump_segment_mask;
		unsigned long dump_complete_mask;
		phys_addr_t mba_phys;
		void *mba_region;
		size_t mba_size;
		phys_addr_t mpss_phys;
		phys_addr_t mpss_reloc;
		void *mpss_region;
		size_t mpss_size;
		struct qcom_rproc_glink glink_subdev;
		struct qcom_rproc_subdev smd_subdev;
		struct qcom_rproc_ssr ssr_subdev;
		struct qcom_sysmon *sysmon;
		bool need_mem_protection;
		bool has_alt_reset;
		int mpss_perm;
		int mba_perm;
		const char *hexagon_mdt_image;
		int version;
	} cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 136 */;
	struct resource cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1346 */;
	struct device_node *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1344 */;
	struct q6v5 *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1342 */;
	int cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1342 */;
	struct device **cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1282 */;
	char **cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1260 */;
	struct resource *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1227 */;
	struct of_phandle_args cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1226 */;
	struct platform_device *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1224 */;
	struct rproc_hexagon_res {
		const char *hexagon_mba_image;
		struct qcom_mss_reg_res *proxy_supply;
		struct qcom_mss_reg_res *active_supply;
		char **proxy_clk_names;
		char **reset_clk_names;
		char **active_clk_names;
		char **active_pd_names;
		char **proxy_pd_names;
		int version;
		bool need_mem_protection;
		bool has_alt_reset;
	} cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 122 */;
	struct q6v5 cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1215 */;
	struct qcom_q6v5 *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1213 */;
	const struct rproc_ops cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1205 */;
	const struct elf32_hdr *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1169 */;
	struct qcom_mss_reg_res {
		const char *supply;
		int uV;
		int uA;
	} cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 116 */;
	u64 cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1151 */;
	struct rproc *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1151 */;
	void *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1151 */;
	struct reg_info {
		struct regulator *reg;
		int uV;
		int uA;
	} cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 110 */;
	struct rproc_dump_segment *cocci_id/* drivers/remoteproc/qcom_q6v5_mss.c 1064 */;
}
