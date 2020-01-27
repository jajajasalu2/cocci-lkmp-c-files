cocci_test_suite() {
	struct snd_card *cocci_id/* sound/xen/xen_snd_front_alsa.c 858 */;
	struct xen_snd_front_pcm_instance_info cocci_id/* sound/xen/xen_snd_front_alsa.c 823 */;
	struct xen_snd_front_card_info cocci_id/* sound/xen/xen_snd_front_alsa.c 813 */;
	struct xen_front_cfg_card *cocci_id/* sound/xen/xen_snd_front_alsa.c 805 */;
	const struct alsa_sndif_sample_format cocci_id/* sound/xen/xen_snd_front_alsa.c 77 */[];
	struct xen_snd_front_pcm_stream_info cocci_id/* sound/xen/xen_snd_front_alsa.c 741 */;
	struct snd_pcm *cocci_id/* sound/xen/xen_snd_front_alsa.c 723 */;
	struct xen_front_cfg_pcm_instance *cocci_id/* sound/xen/xen_snd_front_alsa.c 720 */;
	struct alsa_sndif_hw_param {
		u8 sndif;
		snd_pcm_hw_param_t alsa;
	} cocci_id/* sound/xen/xen_snd_front_alsa.c 72 */;
	struct xen_snd_front_card_info *cocci_id/* sound/xen/xen_snd_front_alsa.c 719 */;
	const struct snd_pcm_ops cocci_id/* sound/xen/xen_snd_front_alsa.c 706 */;
	struct alsa_sndif_sample_format {
		u8 sndif;
		snd_pcm_format_t alsa;
	} cocci_id/* sound/xen/xen_snd_front_alsa.c 67 */;
	struct xen_snd_front_pcm_stream_info *cocci_id/* sound/xen/xen_snd_front_alsa.c 656 */;
	void *cocci_id/* sound/xen/xen_snd_front_alsa.c 653 */;
	unsigned long cocci_id/* sound/xen/xen_snd_front_alsa.c 653 */;
	struct snd_pcm_substream *cocci_id/* sound/xen/xen_snd_front_alsa.c 652 */;
	int cocci_id/* sound/xen/xen_snd_front_alsa.c 652 */;
	void __user *cocci_id/* sound/xen/xen_snd_front_alsa.c 635 */;
	snd_pcm_uframes_t cocci_id/* sound/xen/xen_snd_front_alsa.c 598 */;
	struct xen_snd_front_card_info {
		struct xen_snd_front_info *front_info;
		struct snd_card *card;
		struct snd_pcm_hardware pcm_hw;
		int num_pcm_instances;
		struct xen_snd_front_pcm_instance_info *pcm_instances;
	} cocci_id/* sound/xen/xen_snd_front_alsa.c 59 */;
	struct xen_snd_front_evtchnl *cocci_id/* sound/xen/xen_snd_front_alsa.c 575 */;
	u8 cocci_id/* sound/xen/xen_snd_front_alsa.c 518 */;
	struct xen_snd_front_pcm_instance_info {
		struct xen_snd_front_card_info *card_info;
		struct snd_pcm *pcm;
		struct snd_pcm_hardware pcm_hw;
		int num_pcm_streams_pb;
		struct xen_snd_front_pcm_stream_info *streams_pb;
		int num_pcm_streams_cap;
		struct xen_snd_front_pcm_stream_info *streams_cap;
	} cocci_id/* sound/xen/xen_snd_front_alsa.c 49 */;
	struct xen_front_pgdir_shbuf_cfg cocci_id/* sound/xen/xen_snd_front_alsa.c 466 */;
	struct xen_snd_front_info *cocci_id/* sound/xen/xen_snd_front_alsa.c 465 */;
	struct snd_pcm_hw_params *cocci_id/* sound/xen/xen_snd_front_alsa.c 462 */;
	struct page *cocci_id/* sound/xen/xen_snd_front_alsa.c 450 */;
	size_t cocci_id/* sound/xen/xen_snd_front_alsa.c 440 */;
	struct snd_pcm_runtime *cocci_id/* sound/xen/xen_snd_front_alsa.c 358 */;
	struct xen_snd_front_pcm_instance_info *cocci_id/* sound/xen/xen_snd_front_alsa.c 355 */;
	u32 cocci_id/* sound/xen/xen_snd_front_alsa.c 311 */;
	u64 cocci_id/* sound/xen/xen_snd_front_alsa.c 277 */;
	struct snd_mask cocci_id/* sound/xen/xen_snd_front_alsa.c 276 */;
	struct snd_interval cocci_id/* sound/xen/xen_snd_front_alsa.c 275 */;
	struct xensnd_query_hw_param cocci_id/* sound/xen/xen_snd_front_alsa.c 273 */;
	struct snd_interval *cocci_id/* sound/xen/xen_snd_front_alsa.c 263 */;
	struct snd_mask *cocci_id/* sound/xen/xen_snd_front_alsa.c 261 */;
	struct device *cocci_id/* sound/xen/xen_snd_front_alsa.c 260 */;
	struct snd_pcm_hw_rule *cocci_id/* sound/xen/xen_snd_front_alsa.c 257 */;
	struct xen_snd_front_pcm_stream_info {
		struct xen_snd_front_info *front_info;
		struct xen_snd_front_evtchnl_pair *evt_pair;
		struct xen_front_pgdir_shbuf shbuf;
		u8 *buffer;
		size_t buffer_sz;
		int num_pages;
		struct page **pages;
		int index;
		bool is_open;
		struct snd_pcm_hardware pcm_hw;
		snd_pcm_uframes_t be_cur_frame;
		atomic_t hw_ptr;
		u32 out_frames;
	} cocci_id/* sound/xen/xen_snd_front_alsa.c 25 */;
	void cocci_id/* sound/xen/xen_snd_front_alsa.c 217 */;
	snd_pcm_format_t cocci_id/* sound/xen/xen_snd_front_alsa.c 180 */;
}
