cocci_test_suite() {
	const struct {
		unsigned int quotient_ticks_per_event;
		unsigned int remainder_ticks_per_event;
	} cocci_id/* sound/firewire/motu/amdtp-motu.c 50 */[];
	struct snd_motu_packet_format *cocci_id/* sound/firewire/motu/amdtp-motu.c 48 */;
	struct amdtp_motu cocci_id/* sound/firewire/motu/amdtp-motu.c 475 */;
	amdtp_stream_process_ctx_payloads_t cocci_id/* sound/firewire/motu/amdtp-motu.c 445 */;
	const struct snd_motu_protocol *const cocci_id/* sound/firewire/motu/amdtp-motu.c 443 */;
	enum amdtp_stream_direction cocci_id/* sound/firewire/motu/amdtp-motu.c 442 */;
	struct fw_unit *cocci_id/* sound/firewire/motu/amdtp-motu.c 441 */;
	u32 cocci_id/* sound/firewire/motu/amdtp-motu.c 390 */;
	struct snd_pcm_substream *cocci_id/* sound/firewire/motu/amdtp-motu.c 332 */;
	const struct pkt_desc *cocci_id/* sound/firewire/motu/amdtp-motu.c 314 */;
	u64 *cocci_id/* sound/firewire/motu/amdtp-motu.c 298 */;
	__be32 *cocci_id/* sound/firewire/motu/amdtp-motu.c 298 */;
	void __maybe_unused cocci_id/* sound/firewire/motu/amdtp-motu.c 298 */;
	u32 *cocci_id/* sound/firewire/motu/amdtp-motu.c 284 */;
	u8 *cocci_id/* sound/firewire/motu/amdtp-motu.c 269 */;
	struct amdtp_motu {
		unsigned int quotient_ticks_per_event;
		unsigned int remainder_ticks_per_event;
		unsigned int next_ticks;
		unsigned int next_accumulated;
		unsigned int next_cycles;
		unsigned int next_seconds;
		unsigned int pcm_chunks;
		unsigned int pcm_byte_offset;
		struct snd_rawmidi_substream *midi;
		unsigned int midi_ports;
		unsigned int midi_flag_offset;
		unsigned int midi_byte_offset;
		int midi_db_count;
		unsigned int midi_db_interval;
	} cocci_id/* sound/firewire/motu/amdtp-motu.c 25 */;
	struct amdtp_motu *cocci_id/* sound/firewire/motu/amdtp-motu.c 232 */;
	struct snd_rawmidi_substream *cocci_id/* sound/firewire/motu/amdtp-motu.c 230 */;
	unsigned int cocci_id/* sound/firewire/motu/amdtp-motu.c 229 */;
	void cocci_id/* sound/firewire/motu/amdtp-motu.c 229 */;
	struct snd_pcm_runtime *cocci_id/* sound/firewire/motu/amdtp-motu.c 217 */;
	struct amdtp_stream *cocci_id/* sound/firewire/motu/amdtp-motu.c 216 */;
	int cocci_id/* sound/firewire/motu/amdtp-motu.c 216 */;
	const u32 *cocci_id/* sound/firewire/motu/amdtp-motu.c 166 */;
	void *cocci_id/* sound/firewire/motu/amdtp-motu.c 136 */;
}
