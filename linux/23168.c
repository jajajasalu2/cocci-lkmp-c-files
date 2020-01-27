cocci_test_suite() {
	u32 cocci_id/* sound/soc/au1x/dma.c 89 */;
	struct pcm_period cocci_id/* sound/soc/au1x/dma.c 84 */;
	unsigned long cocci_id/* sound/soc/au1x/dma.c 70 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/au1x/dma.c 68 */;
	unsigned int cocci_id/* sound/soc/au1x/dma.c 64 */;
	struct pcm_period *cocci_id/* sound/soc/au1x/dma.c 47 */;
	struct alchemy_pcm_ctx {
		struct audio_stream stream[2];
	} cocci_id/* sound/soc/au1x/dma.c 41 */;
	struct audio_stream {
		struct snd_pcm_substream *substream;
		int dma;
		struct pcm_period *buffer;
		unsigned int period_size;
		unsigned int periods;
	} cocci_id/* sound/soc/au1x/dma.c 33 */;
	struct platform_driver cocci_id/* sound/soc/au1x/dma.c 327 */;
	struct platform_device *cocci_id/* sound/soc/au1x/dma.c 313 */;
	struct snd_soc_component_driver cocci_id/* sound/soc/au1x/dma.c 301 */;
	struct snd_pcm *cocci_id/* sound/soc/au1x/dma.c 293 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/au1x/dma.c 291 */;
	long cocci_id/* sound/soc/au1x/dma.c 281 */;
	snd_pcm_uframes_t cocci_id/* sound/soc/au1x/dma.c 277 */;
	struct pcm_period {
		u32 start;
		u32 relative_end;
		struct pcm_period *next;
	} cocci_id/* sound/soc/au1x/dma.c 27 */;
	struct audio_stream *cocci_id/* sound/soc/au1x/dma.c 252 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/au1x/dma.c 231 */;
	struct alchemy_pcm_ctx *cocci_id/* sound/soc/au1x/dma.c 220 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/au1x/dma.c 218 */;
	struct snd_soc_component *cocci_id/* sound/soc/au1x/dma.c 217 */;
	int cocci_id/* sound/soc/au1x/dma.c 217 */;
	char *cocci_id/* sound/soc/au1x/dma.c 196 */;
	int *cocci_id/* sound/soc/au1x/dma.c 195 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/au1x/dma.c 166 */;
	irqreturn_t cocci_id/* sound/soc/au1x/dma.c 134 */;
	void *cocci_id/* sound/soc/au1x/dma.c 134 */;
	void cocci_id/* sound/soc/au1x/dma.c 111 */;
}
