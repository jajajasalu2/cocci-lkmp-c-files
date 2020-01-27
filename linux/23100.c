cocci_test_suite() {
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/samsung/i2s.c 934 */;
	u32 cocci_id/* sound/soc/samsung/i2s.c 873 */;
	unsigned cocci_id/* sound/soc/samsung/i2s.c 872 */;
	struct samsung_i2s_priv *cocci_id/* sound/soc/samsung/i2s.c 870 */;
	struct samsung_i2s_priv {
		struct platform_device *pdev;
		struct platform_device *pdev_sec;
		spinlock_t pcm_lock;
		struct i2s_dai *dai;
		struct snd_soc_dai_driver *dai_drv;
		int num_dais;
		struct clk *clk;
		struct clk *op_clk;
		unsigned long rclk_srcrate;
		u32 suspend_i2smod;
		u32 suspend_i2scon;
		u32 suspend_i2spsr;
		const struct samsung_i2s_variant_regs *variant_regs;
		u32 quirks;
		struct clk *clk_table[3];
		struct clk_onecell_data clk_data;
		spinlock_t lock;
		void __iomem *addr;
		bool slave_mode;
	} cocci_id/* sound/soc/samsung/i2s.c 87 */;
	int cocci_id/* sound/soc/samsung/i2s.c 868 */;
	unsigned long cocci_id/* sound/soc/samsung/i2s.c 726 */;
	struct clk *cocci_id/* sound/soc/samsung/i2s.c 725 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/samsung/i2s.c 720 */;
	unsigned int cocci_id/* sound/soc/samsung/i2s.c 623 */;
	struct i2s_dai {
		struct platform_device *pdev;
		unsigned frmclk;
		unsigned rfs,bfs;
		struct i2s_dai *pri_dai;
		struct i2s_dai *sec_dai;
#define DAI_OPENED (1 << 0)
#define DAI_MANAGER (1 << 1)
				unsigned mode;
		struct snd_soc_dai_driver *drv;
		struct snd_dmaengine_dai_dma_data dma_playback;
		struct snd_dmaengine_dai_dma_data dma_capture;
		struct snd_dmaengine_dai_dma_data idma_playback;
		dma_filter_fn filter;
		struct samsung_i2s_priv *priv;
	} cocci_id/* sound/soc/samsung/i2s.c 55 */;
	struct samsung_i2s_dai_data {
		u32 quirks;
		unsigned int pcm_rates;
		const struct samsung_i2s_variant_regs *i2s_variant_regs;
	} cocci_id/* sound/soc/samsung/i2s.c 49 */;
	void __iomem *cocci_id/* sound/soc/samsung/i2s.c 475 */;
	struct samsung_i2s_variant_regs {
		unsigned int bfs_off;
		unsigned int rfs_off;
		unsigned int sdf_off;
		unsigned int txr_off;
		unsigned int rclksrc_off;
		unsigned int mss_off;
		unsigned int cdclkcon_off;
		unsigned int lrp_off;
		unsigned int bfs_mask;
		unsigned int rfs_mask;
		unsigned int ftx0cnt_off;
	} cocci_id/* sound/soc/samsung/i2s.c 35 */;
	bool cocci_id/* sound/soc/samsung/i2s.c 214 */;
	struct i2s_dai *cocci_id/* sound/soc/samsung/i2s.c 214 */;
	struct platform_driver cocci_id/* sound/soc/samsung/i2s.c 1690 */;
	const struct of_device_id cocci_id/* sound/soc/samsung/i2s.c 1661 */[];
	const struct platform_device_id cocci_id/* sound/soc/samsung/i2s.c 1651 */[];
	const struct samsung_i2s_dai_data cocci_id/* sound/soc/samsung/i2s.c 1618 */;
	const struct samsung_i2s_variant_regs cocci_id/* sound/soc/samsung/i2s.c 1562 */;
	struct samsung_i2s_dai_data *cocci_id/* sound/soc/samsung/i2s.c 1399 */;
	struct resource *cocci_id/* sound/soc/samsung/i2s.c 1387 */;
	const struct platform_device_id *cocci_id/* sound/soc/samsung/i2s.c 1385 */;
	struct device_node *cocci_id/* sound/soc/samsung/i2s.c 1383 */;
	struct s3c_audio_pdata *cocci_id/* sound/soc/samsung/i2s.c 1381 */;
	void cocci_id/* sound/soc/samsung/i2s.c 1372 */;
	const char *cocci_id/* sound/soc/samsung/i2s.c 1340 */;
	struct platform_device *cocci_id/* sound/soc/samsung/i2s.c 1339 */;
	const char *cocci_id/* sound/soc/samsung/i2s.c 1271 */[ARRAY_SIZE(i2s_clk_desc)];
	const struct samsung_i2s_variant_regs *cocci_id/* sound/soc/samsung/i2s.c 1270 */;
	struct device *cocci_id/* sound/soc/samsung/i2s.c 1269 */;
	const char *cocci_id/* sound/soc/samsung/i2s.c 1267 */[2];
	const char *constcocci_id/* sound/soc/samsung/i2s.c 1266 */[];
	struct snd_soc_dai_driver *cocci_id/* sound/soc/samsung/i2s.c 1155 */;
	const char *cocci_id/* sound/soc/samsung/i2s.c 1152 */[];
	const struct samsung_i2s_dai_data *cocci_id/* sound/soc/samsung/i2s.c 1149 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/samsung/i2s.c 1135 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/samsung/i2s.c 1127 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/samsung/i2s.c 1118 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/samsung/i2s.c 1107 */;
	struct snd_soc_dai *cocci_id/* sound/soc/samsung/i2s.c 1007 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/samsung/i2s.c 1007 */;
	snd_pcm_sframes_t cocci_id/* sound/soc/samsung/i2s.c 1006 */;
}