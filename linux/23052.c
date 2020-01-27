cocci_test_suite() {
	u8 cocci_id/* sound/soc/ti/davinci-mcasp.c 817 */;
	u32 cocci_id/* sound/soc/ti/davinci-mcasp.c 764 */;
	struct davinci_mcasp {
		struct snd_dmaengine_dai_dma_data dma_data[2];
		void __iomem *base;
		u32 fifo_base;
		struct device *dev;
		struct snd_pcm_substream *substreams[2];
		unsigned int dai_fmt;
		int tdm_slots;
		u32 tdm_mask[2];
		int slot_width;
		u8 op_mode;
		u8 dismod;
		u8 num_serializer;
		u8 *serial_dir;
		u8 version;
		u8 bclk_div;
		int streams;
		u32 irq_request[2];
		int dma_request[2];
		int sysclk_freq;
		bool bclk_master;
		u32 auxclk_fs_ratio;
		unsigned long pdir;
		u8 txnumevt;
		u8 rxnumevt;
		bool dat_port;
		u32 channels;
		int max_format_width;
		u8 active_serializers[2];
#ifdef CONFIG_GPIOLIB
		struct gpio_chip gpio_chip;
#endif
#ifdef CONFIG_PM
		struct davinci_mcasp_context context;
#endif
		struct davinci_mcasp_ruledata ruledata[2];
		struct snd_pcm_hw_constraint_list chconstr[2];
	} cocci_id/* sound/soc/ti/davinci-mcasp.c 76 */;
	struct davinci_mcasp_ruledata {
		struct davinci_mcasp *mcasp;
		int serializers;
	} cocci_id/* sound/soc/ti/davinci-mcasp.c 71 */;
	unsigned int *cocci_id/* sound/soc/ti/davinci-mcasp.c 688 */;
	struct snd_pcm_hw_constraint_list *cocci_id/* sound/soc/ti/davinci-mcasp.c 687 */;
	struct davinci_mcasp_context {
		u32 config_regs[ARRAY_SIZE(context_regs)];
		u32 afifo_regs[2];
		u32 *xrsr_regs;
		bool pm_state;
	} cocci_id/* sound/soc/ti/davinci-mcasp.c 63 */;
	bool cocci_id/* sound/soc/ti/davinci-mcasp.c 607 */;
	struct davinci_mcasp *cocci_id/* sound/soc/ti/davinci-mcasp.c 606 */;
	int cocci_id/* sound/soc/ti/davinci-mcasp.c 606 */;
	u32 cocci_id/* sound/soc/ti/davinci-mcasp.c 46 */[];
	irqreturn_t cocci_id/* sound/soc/ti/davinci-mcasp.c 421 */;
	void *cocci_id/* sound/soc/ti/davinci-mcasp.c 421 */;
	struct platform_driver cocci_id/* sound/soc/ti/davinci-mcasp.c 2440 */;
	const struct dev_pm_ops cocci_id/* sound/soc/ti/davinci-mcasp.c 2434 */;
	struct davinci_mcasp_context *cocci_id/* sound/soc/ti/davinci-mcasp.c 2409 */;
	struct device *cocci_id/* sound/soc/ti/davinci-mcasp.c 2406 */;
	struct davinci_mcasp cocci_id/* sound/soc/ti/davinci-mcasp.c 2117 */;
	int *cocci_id/* sound/soc/ti/davinci-mcasp.c 2108 */;
	char *cocci_id/* sound/soc/ti/davinci-mcasp.c 2107 */;
	struct davinci_mcasp_pdata *cocci_id/* sound/soc/ti/davinci-mcasp.c 2105 */;
	struct resource *cocci_id/* sound/soc/ti/davinci-mcasp.c 2104 */;
	struct snd_dmaengine_dai_dma_data *cocci_id/* sound/soc/ti/davinci-mcasp.c 2103 */;
	struct platform_device *cocci_id/* sound/soc/ti/davinci-mcasp.c 2101 */;
	struct device_node *cocci_id/* sound/soc/ti/davinci-mcasp.c 2087 */;
	const struct gpio_chip cocci_id/* sound/soc/ti/davinci-mcasp.c 2050 */;
	unsigned cocci_id/* sound/soc/ti/davinci-mcasp.c 2008 */;
	struct gpio_chip *cocci_id/* sound/soc/ti/davinci-mcasp.c 2007 */;
	void cocci_id/* sound/soc/ti/davinci-mcasp.c 1960 */;
	const char *cocci_id/* sound/soc/ti/davinci-mcasp.c 1863 */;
	struct dma_chan *cocci_id/* sound/soc/ti/davinci-mcasp.c 1862 */;
	enum{PCM_EDMA, PCM_SDMA,} cocci_id/* sound/soc/ti/davinci-mcasp.c 1854 */;
	u8 *cocci_id/* sound/soc/ti/davinci-mcasp.c 1775 */;
	const u32 *cocci_id/* sound/soc/ti/davinci-mcasp.c 1735 */;
	struct of_phandle_args cocci_id/* sound/soc/ti/davinci-mcasp.c 1733 */;
	const struct of_device_id *cocci_id/* sound/soc/ti/davinci-mcasp.c 1731 */;
	struct clk *cocci_id/* sound/soc/ti/davinci-mcasp.c 1687 */;
	const struct of_device_id cocci_id/* sound/soc/ti/davinci-mcasp.c 1663 */[];
	struct davinci_mcasp_pdata cocci_id/* sound/soc/ti/davinci-mcasp.c 1650 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/ti/davinci-mcasp.c 1633 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/ti/davinci-mcasp.c 1599 */[];
	struct snd_soc_dai *cocci_id/* sound/soc/ti/davinci-mcasp.c 1576 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/ti/davinci-mcasp.c 1564 */;
	struct snd_interval cocci_id/* sound/soc/ti/davinci-mcasp.c 1422 */;
	struct snd_interval *cocci_id/* sound/soc/ti/davinci-mcasp.c 1420 */;
	uint cocci_id/* sound/soc/ti/davinci-mcasp.c 1388 */;
	struct snd_mask cocci_id/* sound/soc/ti/davinci-mcasp.c 1379 */;
	struct snd_mask *cocci_id/* sound/soc/ti/davinci-mcasp.c 1378 */;
	struct davinci_mcasp_ruledata *cocci_id/* sound/soc/ti/davinci-mcasp.c 1377 */;
	struct snd_pcm_hw_rule *cocci_id/* sound/soc/ti/davinci-mcasp.c 1375 */;
	void __iomem *cocci_id/* sound/soc/ti/davinci-mcasp.c 137 */;
	const unsigned int cocci_id/* sound/soc/ti/davinci-mcasp.c 1317 */[];
	struct snd_pcm_hw_params *cocci_id/* sound/soc/ti/davinci-mcasp.c 1163 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/ti/davinci-mcasp.c 1143 */;
	snd_pcm_sframes_t cocci_id/* sound/soc/ti/davinci-mcasp.c 1142 */;
	unsigned int cocci_id/* sound/soc/ti/davinci-mcasp.c 1077 */;
}
