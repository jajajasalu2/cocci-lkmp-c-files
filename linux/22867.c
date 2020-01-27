cocci_test_suite() {
	const struct {
		unsigned int data_block;
		unsigned int syt_offset;
	} *cocci_id/* sound/firewire/amdtp-stream.c 998 */;
	bool cocci_id/* sound/firewire/amdtp-stream.c 995 */;
	const __be32 *cocci_id/* sound/firewire/amdtp-stream.c 936 */;
	void *cocci_id/* sound/firewire/amdtp-stream.c 933 */;
	u32 cocci_id/* sound/firewire/amdtp-stream.c 932 */;
	size_t cocci_id/* sound/firewire/amdtp-stream.c 932 */;
	struct fw_iso_context *cocci_id/* sound/firewire/amdtp-stream.c 931 */;
	struct {
		struct fw_iso_packet params;
		__be32 header[IT_PKT_HEADER_SIZE_CIP / sizeof(__be32)];
	} cocci_id/* sound/firewire/amdtp-stream.c 831 */;
	const struct pkt_desc *cocci_id/* sound/firewire/amdtp-stream.c 829 */;
	amdtp_stream_process_ctx_payloads_t cocci_id/* sound/firewire/amdtp-stream.c 80 */;
	void cocci_id/* sound/firewire/amdtp-stream.c 794 */(struct fw_iso_context *context,
							     u32 tstamp,
							     size_t header_length,
							     void *header,
							     void *private_data);
	enum cip_flags cocci_id/* sound/firewire/amdtp-stream.c 78 */;
	enum amdtp_stream_direction cocci_id/* sound/firewire/amdtp-stream.c 78 */;
	struct fw_unit *cocci_id/* sound/firewire/amdtp-stream.c 77 */;
	struct pkt_desc *cocci_id/* sound/firewire/amdtp-stream.c 700 */;
	const __be32 cocci_id/* sound/firewire/amdtp-stream.c 692 */;
	void cocci_id/* sound/firewire/amdtp-stream.c 65 */(unsigned long data);
	u32 cocci_id/* sound/firewire/amdtp-stream.c 538 */[2];
	unsigned int *cocci_id/* sound/firewire/amdtp-stream.c 535 */;
	__be32 *cocci_id/* sound/firewire/amdtp-stream.c 515 */;
	struct fw_iso_packet *cocci_id/* sound/firewire/amdtp-stream.c 509 */;
	__be32 cocci_id/* sound/firewire/amdtp-stream.c 495 */[2];
	__be32 cocci_id/* sound/firewire/amdtp-stream.c 319 */;
	struct snd_pcm_hardware *cocci_id/* sound/firewire/amdtp-stream.c 179 */;
	struct snd_pcm_runtime *cocci_id/* sound/firewire/amdtp-stream.c 177 */;
	struct snd_interval cocci_id/* sound/firewire/amdtp-stream.c 155 */;
	const struct snd_interval *cocci_id/* sound/firewire/amdtp-stream.c 153 */;
	struct snd_interval *cocci_id/* sound/firewire/amdtp-stream.c 152 */;
	struct snd_pcm_hw_rule *cocci_id/* sound/firewire/amdtp-stream.c 150 */;
	struct snd_pcm_hw_params *cocci_id/* sound/firewire/amdtp-stream.c 149 */;
	struct fw_card *cocci_id/* sound/firewire/amdtp-stream.c 1391 */;
	const unsigned int cocci_id/* sound/firewire/amdtp-stream.c 138 */[CIP_SFC_COUNT];
	unsigned int cocci_id/* sound/firewire/amdtp-stream.c 1375 */;
	int *cocci_id/* sound/firewire/amdtp-stream.c 1346 */;
	struct amdtp_stream *cocci_id/* sound/firewire/amdtp-stream.c 1327 */;
	struct amdtp_domain *cocci_id/* sound/firewire/amdtp-stream.c 1327 */;
	int cocci_id/* sound/firewire/amdtp-stream.c 1327 */;
	void cocci_id/* sound/firewire/amdtp-stream.c 1313 */;
	struct snd_pcm_substream *cocci_id/* sound/firewire/amdtp-stream.c 1287 */;
	unsigned long cocci_id/* sound/firewire/amdtp-stream.c 1180 */;
	struct fw_iso_packet cocci_id/* sound/firewire/amdtp-stream.c 1126 */;
	fw_iso_callback_t cocci_id/* sound/firewire/amdtp-stream.c 1017 */;
	enum dma_data_direction cocci_id/* sound/firewire/amdtp-stream.c 1015 */;
}
