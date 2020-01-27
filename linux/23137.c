cocci_test_suite() {
	struct ep93xx_ac97_info {
		struct mutex lock;
		struct device *dev;
		void __iomem *regs;
		struct completion done;
		struct snd_dmaengine_dai_dma_data dma_params_rx;
		struct snd_dmaengine_dai_dma_data dma_params_tx;
	} cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 94 */;
	struct platform_driver cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 433 */;
	struct platform_device *cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 362 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 358 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 336 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 332 */;
	struct snd_soc_dai *cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 319 */;
	int cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 319 */;
	unsigned long cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 293 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 250 */;
	struct snd_ac97_bus_ops cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 243 */;
	unsigned cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 227 */;
	irqreturn_t cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 224 */;
	void *cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 224 */;
	struct ep93xx_ac97_info *cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 195 */;
	struct snd_ac97 *cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 193 */;
	void cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 193 */;
	unsigned short cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 130 */;
	struct ep93xx_dma_data cocci_id/* sound/soc/cirrus/ep93xx-ac97.c 112 */;
}
