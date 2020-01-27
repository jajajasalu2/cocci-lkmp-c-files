cocci_test_suite() {
	bool cocci_id/* sound/firewire/amdtp-am824.c 58 */;
	struct amdtp_am824 cocci_id/* sound/firewire/amdtp-am824.c 425 */;
	amdtp_stream_process_ctx_payloads_t cocci_id/* sound/firewire/amdtp-am824.c 417 */;
	enum cip_flags cocci_id/* sound/firewire/amdtp-am824.c 415 */;
	enum amdtp_stream_direction cocci_id/* sound/firewire/amdtp-am824.c 415 */;
	struct fw_unit *cocci_id/* sound/firewire/amdtp-am824.c 414 */;
	__be32 *cocci_id/* sound/firewire/amdtp-am824.c 389 */;
	struct snd_pcm_substream *cocci_id/* sound/firewire/amdtp-am824.c 381 */;
	const struct pkt_desc *cocci_id/* sound/firewire/amdtp-am824.c 379 */;
	u8 *cocci_id/* sound/firewire/amdtp-am824.c 329 */;
	struct amdtp_am824 {
		struct snd_rawmidi_substream *midi[AM824_MAX_CHANNELS_FOR_MIDI * 8];
		int midi_fifo_limit;
		int midi_fifo_used[AM824_MAX_CHANNELS_FOR_MIDI * 8];
		unsigned int pcm_channels;
		unsigned int midi_ports;
		u8 pcm_positions[AM824_MAX_CHANNELS_FOR_PCM];
		u8 midi_position;
		unsigned int frame_multiplier;
	} cocci_id/* sound/firewire/amdtp-am824.c 30 */;
	struct amdtp_am824 *cocci_id/* sound/firewire/amdtp-am824.c 256 */;
	struct snd_rawmidi_substream *cocci_id/* sound/firewire/amdtp-am824.c 254 */;
	unsigned int cocci_id/* sound/firewire/amdtp-am824.c 253 */;
	void cocci_id/* sound/firewire/amdtp-am824.c 253 */;
	struct snd_pcm_runtime *cocci_id/* sound/firewire/amdtp-am824.c 230 */;
	struct amdtp_stream *cocci_id/* sound/firewire/amdtp-am824.c 229 */;
	int cocci_id/* sound/firewire/amdtp-am824.c 229 */;
	void *cocci_id/* sound/firewire/amdtp-am824.c 195 */;
	u32 *cocci_id/* sound/firewire/amdtp-am824.c 189 */;
	const u32 *cocci_id/* sound/firewire/amdtp-am824.c 158 */;
}
