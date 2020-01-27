cocci_test_suite() {
	u16 cocci_id/* sound/soc/ti/omap-mcpdm.c 72 */;
	struct platform_driver cocci_id/* sound/soc/ti/omap-mcpdm.c 591 */;
	const struct of_device_id cocci_id/* sound/soc/ti/omap-mcpdm.c 585 */[];
	struct omap_mcpdm cocci_id/* sound/soc/ti/omap-mcpdm.c 547 */;
	struct resource *cocci_id/* sound/soc/ti/omap-mcpdm.c 544 */;
	struct omap_mcpdm *cocci_id/* sound/soc/ti/omap-mcpdm.c 543 */;
	struct platform_device *cocci_id/* sound/soc/ti/omap-mcpdm.c 541 */;
	int cocci_id/* sound/soc/ti/omap-mcpdm.c 541 */;
	u8 cocci_id/* sound/soc/ti/omap-mcpdm.c 533 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/ti/omap-mcpdm.c 532 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/ti/omap-mcpdm.c 528 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/ti/omap-mcpdm.c 504 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/ti/omap-mcpdm.c 407 */;
	struct omap_mcpdm {
		struct device *dev;
		unsigned long phys_base;
		void __iomem *io_base;
		int irq;
		struct pm_qos_request pm_qos_req;
		int latency[2];
		struct mutex mutex;
		struct mcpdm_link_config config[2];
		u32 dn_rx_offset;
		bool restart;
		int pm_active_count;
		struct snd_dmaengine_dai_dma_data dma_data[2];
	} cocci_id/* sound/soc/ti/omap-mcpdm.c 38 */;
	struct pm_qos_request *cocci_id/* sound/soc/ti/omap-mcpdm.c 379 */;
	struct mcpdm_link_config {
		u32 link_mask;
		u32 threshold;
	} cocci_id/* sound/soc/ti/omap-mcpdm.c 33 */;
	u32 cocci_id/* sound/soc/ti/omap-mcpdm.c 301 */;
	struct snd_dmaengine_dai_dma_data *cocci_id/* sound/soc/ti/omap-mcpdm.c 300 */;
	struct snd_soc_dai *cocci_id/* sound/soc/ti/omap-mcpdm.c 296 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/ti/omap-mcpdm.c 295 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/ti/omap-mcpdm.c 294 */;
	irqreturn_t cocci_id/* sound/soc/ti/omap-mcpdm.c 218 */;
	void *cocci_id/* sound/soc/ti/omap-mcpdm.c 218 */;
	void cocci_id/* sound/soc/ti/omap-mcpdm.c 197 */;
}
