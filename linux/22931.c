cocci_test_suite() {
	unsigned char cocci_id/* sound/core/oss/mulaw.c 83 */;
	int cocci_id/* sound/core/oss/mulaw.c 83 */;
	struct mulaw_priv cocci_id/* sound/core/oss/mulaw.c 337 */;
	mulaw_f cocci_id/* sound/core/oss/mulaw.c 309 */;
	struct snd_pcm_plugin **cocci_id/* sound/core/oss/mulaw.c 303 */;
	struct snd_pcm_plugin_format *cocci_id/* sound/core/oss/mulaw.c 301 */;
	struct snd_pcm_substream *cocci_id/* sound/core/oss/mulaw.c 300 */;
	snd_pcm_format_t cocci_id/* sound/core/oss/mulaw.c 279 */;
	unsigned int cocci_id/* sound/core/oss/mulaw.c 261 */;
	snd_pcm_sframes_t cocci_id/* sound/core/oss/mulaw.c 248 */;
	char *cocci_id/* sound/core/oss/mulaw.c 206 */;
	u16 cocci_id/* sound/core/oss/mulaw.c 205 */;
	unsigned char *cocci_id/* sound/core/oss/mulaw.c 203 */;
	struct mulaw_priv *cocci_id/* sound/core/oss/mulaw.c 202 */;
	signed short cocci_id/* sound/core/oss/mulaw.c 202 */;
	snd_pcm_uframes_t cocci_id/* sound/core/oss/mulaw.c 171 */;
	struct snd_pcm_plugin_channel *cocci_id/* sound/core/oss/mulaw.c 170 */;
	const struct snd_pcm_plugin_channel *cocci_id/* sound/core/oss/mulaw.c 169 */;
	struct snd_pcm_plugin *cocci_id/* sound/core/oss/mulaw.c 168 */;
	void cocci_id/* sound/core/oss/mulaw.c 156 */;
	struct mulaw_priv {
		mulaw_f func;
		int cvt_endian;
		unsigned int native_ofs;
		unsigned int copy_ofs;
		unsigned int native_bytes;
		unsigned int copy_bytes;
		u16 flip;
	} cocci_id/* sound/core/oss/mulaw.c 146 */;
	void (*cocci_id/* sound/core/oss/mulaw.c 141 */)(struct snd_pcm_plugin *plugin,
							 const struct snd_pcm_plugin_channel *src_channels,
							 struct snd_pcm_plugin_channel *dst_channels,
							 snd_pcm_uframes_t frames);
	unsigned cocci_id/* sound/core/oss/mulaw.c 132 */;
}
