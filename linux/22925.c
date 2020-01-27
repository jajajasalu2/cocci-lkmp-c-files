cocci_test_suite() {
	struct rate_channel *cocci_id/* sound/core/oss/rate.c 77 */;
	signed short *cocci_id/* sound/core/oss/rate.c 72 */;
	signed short cocci_id/* sound/core/oss/rate.c 71 */;
	signed int cocci_id/* sound/core/oss/rate.c 70 */;
	unsigned int cocci_id/* sound/core/oss/rate.c 55 */;
	void cocci_id/* sound/core/oss/rate.c 53 */;
	struct rate_priv {
		unsigned int pitch;
		unsigned int pos;
		rate_f func;
		snd_pcm_sframes_t old_src_frames,old_dst_frames;
		struct rate_channel channels[0];
	} cocci_id/* sound/core/oss/rate.c 45 */;
	void (*cocci_id/* sound/core/oss/rate.c 40 */)(struct snd_pcm_plugin *plugin,
						       const struct snd_pcm_plugin_channel *src_channels,
						       struct snd_pcm_plugin_channel *dst_channels,
						       int src_frames,
						       int dst_frames);
	struct rate_channel {
		signed short last_S1;
		signed short last_S2;
	} cocci_id/* sound/core/oss/rate.c 35 */;
	struct snd_pcm_plugin **cocci_id/* sound/core/oss/rate.c 303 */;
	struct snd_pcm_plugin_format *cocci_id/* sound/core/oss/rate.c 301 */;
	struct snd_pcm_substream *cocci_id/* sound/core/oss/rate.c 300 */;
	unsigned long cocci_id/* sound/core/oss/rate.c 285 */;
	enum snd_pcm_plugin_action cocci_id/* sound/core/oss/rate.c 284 */;
	struct snd_pcm_plugin *cocci_id/* sound/core/oss/rate.c 283 */;
	int cocci_id/* sound/core/oss/rate.c 283 */;
	struct snd_pcm_plugin_channel *cocci_id/* sound/core/oss/rate.c 251 */;
	const struct snd_pcm_plugin_channel *cocci_id/* sound/core/oss/rate.c 250 */;
	struct rate_priv *cocci_id/* sound/core/oss/rate.c 218 */;
	snd_pcm_uframes_t cocci_id/* sound/core/oss/rate.c 216 */;
	snd_pcm_sframes_t cocci_id/* sound/core/oss/rate.c 216 */;
}
