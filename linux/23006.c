cocci_test_suite() {
	int cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 99 */(struct snd_compr_stream *cstream,
								int cmd);
	struct sprd_compr_stream {
		struct snd_compr_stream *cstream;
		struct sprd_compr_ops *compr_ops;
		struct sprd_compr_dma dma[SPRD_COMPR_DMA_CHANS];
		int num_channels;
		struct snd_dma_buffer iram_buffer;
		struct snd_dma_buffer compr_buffer;
		dma_addr_t info_phys;
		void *info_area;
		int info_size;
		int copied_total;
		int received_total;
		int received_stage0;
		int received_stage1;
		int stage1_pointer;
	} cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 69 */;
	const struct snd_compr_ops cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 661 */;
	struct snd_compr_codec_caps *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 629 */;
	struct snd_compr_caps *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 613 */;
	void *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 541 */;
	struct sprd_compr_stream *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 539 */;
	struct snd_compr_runtime *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 538 */;
	char __user *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 536 */;
	size_t cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 536 */;
	struct snd_compr_stream *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 535 */;
	int cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 535 */;
	struct sprd_compr_playinfo *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 526 */;
	struct snd_compr_tstamp *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 522 */;
	struct sprd_compr_dma {
		struct dma_chan *chan;
		struct dma_async_tx_descriptor *desc;
		dma_cookie_t cookie;
		dma_addr_t phys;
		void *virt;
		int trans_len;
	} cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 42 */;
	struct sprd_compr_callback cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 326 */;
	struct sprd_compr_playinfo cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 30 */;
	struct sprd_compr_params cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 273 */;
	unsigned long cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 148 */;
	dma_addr_t cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 147 */;
	enum dma_slave_buswidth cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 145 */;
	struct scatterlist *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 144 */;
	enum dma_transfer_direction cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 143 */;
	struct sprd_dma_linklist cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 142 */;
	struct dma_slave_config cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 141 */;
	struct sprd_pcm_dma_params *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 139 */;
	struct sprd_compr_data *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 138 */;
	struct device *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 137 */;
	struct snd_soc_component *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 135 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 134 */;
	struct snd_compr_params *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 129 */;
	struct sprd_compr_dma *cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 118 */;
	void cocci_id/* sound/soc/sprd/sprd-pcm-compress.c 113 */;
}
