cocci_test_suite() {
	const struct snd_dmaengine_pcm_config *cocci_id/* sound/soc/stm/stm32_spdifrx.c 936 */;
	struct reset_control *cocci_id/* sound/soc/stm/stm32_spdifrx.c 935 */;
	const struct regmap_config *cocci_id/* sound/soc/stm/stm32_spdifrx.c 908 */;
	struct resource *cocci_id/* sound/soc/stm/stm32_spdifrx.c 900 */;
	const struct of_device_id *cocci_id/* sound/soc/stm/stm32_spdifrx.c 899 */;
	struct device_node *cocci_id/* sound/soc/stm/stm32_spdifrx.c 898 */;
	const struct of_device_id cocci_id/* sound/soc/stm/stm32_spdifrx.c 887 */[];
	const struct snd_dmaengine_pcm_config cocci_id/* sound/soc/stm/stm32_spdifrx.c 882 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/stm/stm32_spdifrx.c 878 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/stm/stm32_spdifrx.c 869 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/stm/stm32_spdifrx.c 854 */[];
	const struct snd_soc_dai_ops cocci_id/* sound/soc/stm/stm32_spdifrx.c 847 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/stm/stm32_spdifrx.c 776 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/stm/stm32_spdifrx.c 775 */;
	irqreturn_t cocci_id/* sound/soc/stm/stm32_spdifrx.c 665 */;
	u32 cocci_id/* sound/soc/stm/stm32_spdifrx.c 660 */;
	const struct regmap_config cocci_id/* sound/soc/stm/stm32_spdifrx.c 652 */;
	bool cocci_id/* sound/soc/stm/stm32_spdifrx.c 608 */;
	dma_addr_t cocci_id/* sound/soc/stm/stm32_spdifrx.c 599 */;
	struct snd_kcontrol_new cocci_id/* sound/soc/stm/stm32_spdifrx.c 576 */[];
	struct stm32_spdifrx_data *cocci_id/* sound/soc/stm/stm32_spdifrx.c 542 */;
	struct snd_soc_dai *cocci_id/* sound/soc/stm/stm32_spdifrx.c 541 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/stm/stm32_spdifrx.c 539 */;
	struct snd_kcontrol *cocci_id/* sound/soc/stm/stm32_spdifrx.c 538 */;
	int cocci_id/* sound/soc/stm/stm32_spdifrx.c 538 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/stm/stm32_spdifrx.c 459 */;
	const char *constcocci_id/* sound/soc/stm/stm32_spdifrx.c 446 */[];
	struct snd_dma_buffer cocci_id/* sound/soc/stm/stm32_spdifrx.c 410 */;
	struct device *cocci_id/* sound/soc/stm/stm32_spdifrx.c 399 */;
	dma_cookie_t cocci_id/* sound/soc/stm/stm32_spdifrx.c 292 */;
	unsigned char cocci_id/* sound/soc/stm/stm32_spdifrx.c 278 */;
	unsigned int cocci_id/* sound/soc/stm/stm32_spdifrx.c 261 */;
	u16 *cocci_id/* sound/soc/stm/stm32_spdifrx.c 256 */;
	short *cocci_id/* sound/soc/stm/stm32_spdifrx.c 256 */;
	u32 *cocci_id/* sound/soc/stm/stm32_spdifrx.c 253 */;
	struct platform_device *cocci_id/* sound/soc/stm/stm32_spdifrx.c 252 */;
	void *cocci_id/* sound/soc/stm/stm32_spdifrx.c 249 */;
	void cocci_id/* sound/soc/stm/stm32_spdifrx.c 249 */;
	struct stm32_spdifrx_data {
		struct platform_device *pdev;
		void __iomem *base;
		struct regmap *regmap;
		const struct regmap_config *regmap_conf;
		struct completion cs_completion;
		struct clk *kclk;
		struct snd_dmaengine_dai_dma_data dma_params;
		struct snd_pcm_substream *substream;
		struct snd_dma_buffer *dmab;
		struct dma_chan *ctrl_chan;
		struct dma_async_tx_descriptor *desc;
		struct dma_slave_config slave_config;
		dma_addr_t phys_addr;
		spinlock_t lock;
		unsigned char cs[SPDIFRX_CS_BYTES_NB];
		unsigned char ub[SPDIFRX_UB_BYTES_NB];
		int irq;
		int refcount;
	} cocci_id/* sound/soc/stm/stm32_spdifrx.c 228 */;
	struct platform_driver cocci_id/* sound/soc/stm/stm32_spdifrx.c 1057 */;
	const struct dev_pm_ops cocci_id/* sound/soc/stm/stm32_spdifrx.c 1053 */;
}
