cocci_test_suite() {
	const u8 cocci_id/* sound/firewire/digi00x/amdtp-dot.c 75 */[15];
	const u8 cocci_id/* sound/firewire/digi00x/amdtp-dot.c 68 */[16];
	const u8 cocci_id/* sound/firewire/digi00x/amdtp-dot.c 62 */;
	const unsigned int cocci_id/* sound/firewire/digi00x/amdtp-dot.c 62 */;
	u8 cocci_id/* sound/firewire/digi00x/amdtp-dot.c 62 */;
	struct amdtp_dot {
		unsigned int pcm_channels;
		struct dot_state state;
		struct snd_rawmidi_substream *midi[MAX_MIDI_PORTS];
		int midi_fifo_used[MAX_MIDI_PORTS];
		int midi_fifo_limit;
	} cocci_id/* sound/firewire/digi00x/amdtp-dot.c 43 */;
	struct amdtp_dot cocci_id/* sound/firewire/digi00x/amdtp-dot.c 411 */;
	enum cip_flags cocci_id/* sound/firewire/digi00x/amdtp-dot.c 399 */;
	amdtp_stream_process_ctx_payloads_t cocci_id/* sound/firewire/digi00x/amdtp-dot.c 398 */;
	enum amdtp_stream_direction cocci_id/* sound/firewire/digi00x/amdtp-dot.c 396 */;
	struct fw_unit *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 395 */;
	struct dot_state {
		u8 carry;
		u8 idx;
		unsigned int off;
	} cocci_id/* sound/firewire/digi00x/amdtp-dot.c 37 */;
	__be32 *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 354 */;
	struct snd_pcm_substream *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 347 */;
	const struct pkt_desc *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 345 */;
	struct amdtp_dot *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 338 */;
	struct snd_rawmidi_substream *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 336 */;
	unsigned int cocci_id/* sound/firewire/digi00x/amdtp-dot.c 335 */;
	void cocci_id/* sound/firewire/digi00x/amdtp-dot.c 335 */;
	struct snd_pcm_runtime *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 323 */;
	struct amdtp_stream *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 322 */;
	int cocci_id/* sound/firewire/digi00x/amdtp-dot.c 322 */;
	bool cocci_id/* sound/firewire/digi00x/amdtp-dot.c 224 */;
	void *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 192 */;
	u32 *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 186 */;
	const u32 *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 154 */;
	u8 *constcocci_id/* sound/firewire/digi00x/amdtp-dot.c 103 */;
	u8 *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 103 */;
	__be32 *constcocci_id/* sound/firewire/digi00x/amdtp-dot.c 101 */;
	struct dot_state *cocci_id/* sound/firewire/digi00x/amdtp-dot.c 101 */;
}
