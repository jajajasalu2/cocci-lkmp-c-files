cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 972 */;
	const struct of_device_id cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 966 */[];
	struct of_phandle_args cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 943 */;
	struct platform_device *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 939 */;
	struct device_node *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 909 */;
	struct snd_soc_pcm_stream cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 908 */;
	struct snd_soc_dai_driver *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 907 */;
	struct q6asm_dai_data *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 905 */;
	struct device *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 904 */;
	int cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 904 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 893 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 878 */;
	struct snd_pcm *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 863 */;
	struct snd_compr_ops cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 815 */;
	struct snd_compr_codec_caps *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 802 */;
	struct snd_compr_caps *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 787 */;
	struct vm_area_struct *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 773 */;
	struct snd_compr_runtime *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 761 */;
	size_t cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 759 */;
	struct snd_pcm_hardware cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 75 */;
	struct snd_compr_tstamp *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 742 */;
	struct q6asm_dai_data {
		long long int sid;
	} cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 71 */;
	struct snd_dec_flac *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 633 */;
	union snd_codec_options *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 632 */;
	struct q6asm_flac_cfg cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 629 */;
	struct snd_compr_params *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 621 */;
	q6asm_cb cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 562 */;
	struct snd_soc_dai *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 543 */;
	struct q6asm_dai_rtd {
		struct snd_pcm_substream *substream;
		struct snd_compr_stream *cstream;
		struct snd_compr_params codec_param;
		struct snd_dma_buffer dma_buffer;
		spinlock_t lock;
		phys_addr_t phys;
		unsigned int pcm_size;
		unsigned int pcm_count;
		unsigned int pcm_irq_pos;
		unsigned int periods;
		unsigned int bytes_sent;
		unsigned int bytes_received;
		unsigned int copied_total;
		uint16_t bits_per_sample;
		uint16_t source;
		struct audio_client *audio_client;
		uint16_t session_id;
		enum stream_state state;
	} cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 50 */;
	uint64_t cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 493 */;
	unsigned long cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 492 */;
	struct snd_compr_stream *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 491 */;
	struct q6asm_dai_rtd *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 490 */;
	uint32_t *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 488 */;
	void *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 488 */;
	uint32_t cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 487 */;
	void cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 487 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 467 */;
	snd_pcm_uframes_t cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 440 */;
	enum stream_state{Q6ASM_STREAM_IDLE=0, Q6ASM_STREAM_STOPPED, Q6ASM_STREAM_RUNNING,} cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 44 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 422 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 421 */;
	struct snd_soc_component *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 418 */;
	struct q6asm_dai_rtd cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 346 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 177 */;
	const struct snd_compr_codec_caps cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 158 */;
	struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 152 */;
	unsigned int cocci_id/* sound/soc/qcom/qdsp6/q6asm-dai.c 147 */[];
}
