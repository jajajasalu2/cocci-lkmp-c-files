cocci_test_suite() {
	struct dma_slave_config cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 87 */;
	int (*cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 84 */)(struct snd_pcm_substream *substream,
								      struct snd_pcm_hw_params *params,
								      struct dma_slave_config *slave_config);
	struct snd_pcm_hw_params *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 80 */;
	struct dma_slave_config *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 59 */;
	void cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 408 */;
	const char *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 363 */;
	struct device *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 36 */;
	const char *const cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 354 */[];
	struct dmaengine_pcm cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 33 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 327 */;
	void *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 306 */;
	bool cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 305 */;
	int (*cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 302 */)(struct snd_pcm_substream *substream,
								       int channel,
								       unsigned long hwoff,
								       void *buf,
								       unsigned long bytes);
	struct dmaengine_pcm *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 301 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 300 */;
	void __user *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 298 */;
	unsigned long cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 297 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 296 */;
	struct snd_soc_component *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 295 */;
	int cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 295 */;
	snd_pcm_uframes_t cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 283 */;
	struct dmaengine_pcm {
		struct dma_chan *chan[SNDRV_PCM_STREAM_LAST + 1];
		const struct snd_dmaengine_pcm_config *config;
		struct snd_soc_component component;
		unsigned int flags;
	} cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 24 */;
	unsigned int cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 234 */;
	size_t cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 232 */;
	const struct snd_dmaengine_pcm_config *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 229 */;
	struct dma_slave_caps cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 209 */;
	struct dma_chan *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 207 */;
	dma_filter_fn cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 190 */;
	struct snd_dmaengine_dai_dma_data *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 189 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 185 */;
	struct snd_pcm_hardware cocci_id/* sound/soc/soc-generic-dmaengine-pcm.c 119 */;
}
