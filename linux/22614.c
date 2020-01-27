cocci_test_suite() {
	const struct usb_endpoint_descriptor *cocci_id/* sound/usb/misc/ua101.c 961 */;
	const struct uac_format_type_i_discrete_descriptor *cocci_id/* sound/usb/misc/ua101.c 959 */;
	struct uac_format_type_i_discrete_descriptor *cocci_id/* sound/usb/misc/ua101.c 932 */;
	struct usb_descriptor_header cocci_id/* sound/usb/misc/ua101.c 931 */;
	struct usb_interface *cocci_id/* sound/usb/misc/ua101.c 906 */;
	const struct snd_pcm_ops cocci_id/* sound/usb/misc/ua101.c 883 */;
	snd_pcm_uframes_t cocci_id/* sound/usb/misc/ua101.c 869 */;
	struct ua101 {
		struct usb_device *dev;
		struct snd_card *card;
		struct usb_interface *intf[INTF_COUNT];
		int card_index;
		struct snd_pcm *pcm;
		struct list_head midi_list;
		u64 format_bit;
		unsigned int rate;
		unsigned int packets_per_second;
		spinlock_t lock;
		struct mutex mutex;
		unsigned long states;
		unsigned int rate_feedback_start;
		unsigned int rate_feedback_count;
		u8 rate_feedback[MAX_QUEUE_LENGTH];
		struct list_head ready_playback_urbs;
		struct tasklet_struct playback_tasklet;
		wait_queue_head_t alsa_capture_wait;
		wait_queue_head_t rate_feedback_wait;
		wait_queue_head_t alsa_playback_wait;
		struct ua101_stream {
			struct snd_pcm_substream *substream;
			unsigned int usb_pipe;
			unsigned int channels;
			unsigned int frame_bytes;
			unsigned int max_packet_bytes;
			unsigned int period_pos;
			unsigned int buffer_pos;
			unsigned int queue_length;
			struct ua101_urb {
				struct urb urb;
				struct usb_iso_packet_descriptor iso_frame_desc[1];
				struct list_head ready_list;
			} *urbs[MAX_QUEUE_LENGTH];
			struct {
				unsigned int size;
				void *addr;
				dma_addr_t dma;
			} buffers[MAX_MEMORY_BUFFERS];
		} capture,playback;
	} cocci_id/* sound/usb/misc/ua101.c 79 */;
	struct snd_pcm_hw_params *cocci_id/* sound/usb/misc/ua101.c 725 */;
	struct snd_pcm_substream *cocci_id/* sound/usb/misc/ua101.c 699 */;
	enum{USB_CAPTURE_RUNNING, USB_PLAYBACK_RUNNING, ALSA_CAPTURE_OPEN, ALSA_PLAYBACK_OPEN, ALSA_CAPTURE_RUNNING, ALSA_PLAYBACK_RUNNING, CAPTURE_URB_COMPLETED, PLAYBACK_URB_COMPLETED, DISCONNECTED,} cocci_id/* sound/usb/misc/ua101.c 67 */;
	struct ua101 *cocci_id/* sound/usb/misc/ua101.c 604 */;
	void cocci_id/* sound/usb/misc/ua101.c 604 */;
	enum{INTF_PLAYBACK, INTF_CAPTURE, INTF_MIDI, INTF_COUNT,} cocci_id/* sound/usb/misc/ua101.c 58 */;
	struct usb_host_interface *cocci_id/* sound/usb/misc/ua101.c 476 */;
	bool cocci_id/* sound/usb/misc/ua101.c 45 */[SNDRV_CARDS];
	char *cocci_id/* sound/usb/misc/ua101.c 44 */[SNDRV_CARDS];
	int cocci_id/* sound/usb/misc/ua101.c 43 */[SNDRV_CARDS];
	bool cocci_id/* sound/usb/misc/ua101.c 353 */;
	unsigned long cocci_id/* sound/usb/misc/ua101.c 351 */;
	struct urb *cocci_id/* sound/usb/misc/ua101.c 347 */;
	struct snd_pcm_runtime *cocci_id/* sound/usb/misc/ua101.c 318 */;
	struct ua101_urb cocci_id/* sound/usb/misc/ua101.c 283 */;
	void *cocci_id/* sound/usb/misc/ua101.c 252 */;
	unsigned int *cocci_id/* sound/usb/misc/ua101.c 243 */;
	unsigned int cocci_id/* sound/usb/misc/ua101.c 243 */;
	const u8 *cocci_id/* sound/usb/misc/ua101.c 216 */;
	const struct usb_device_id cocci_id/* sound/usb/misc/ua101.c 1357 */[];
	struct list_head *cocci_id/* sound/usb/misc/ua101.c 1325 */;
	void cocci_id/* sound/usb/misc/ua101.c 130 */(struct ua101 *ua);
	struct usb_driver cocci_id/* sound/usb/misc/ua101.c 127 */;
	char cocci_id/* sound/usb/misc/ua101.c 1204 */[32];
	const char *cocci_id/* sound/usb/misc/ua101.c 1203 */;
	const int cocci_id/* sound/usb/misc/ua101.c 1187 */[2][3];
	const struct snd_usb_audio_quirk cocci_id/* sound/usb/misc/ua101.c 1183 */;
	const struct snd_usb_midi_endpoint_info cocci_id/* sound/usb/misc/ua101.c 1179 */;
	const struct usb_device_id *cocci_id/* sound/usb/misc/ua101.c 1177 */;
	struct snd_card *cocci_id/* sound/usb/misc/ua101.c 1169 */;
	dma_addr_t cocci_id/* sound/usb/misc/ua101.c 1098 */;
	u8 *cocci_id/* sound/usb/misc/ua101.c 1097 */;
	struct ua101_urb *cocci_id/* sound/usb/misc/ua101.c 1092 */;
	unsigned cocci_id/* sound/usb/misc/ua101.c 1091 */;
	void (*cocci_id/* sound/usb/misc/ua101.c 1089 */)(struct urb *);
	size_t cocci_id/* sound/usb/misc/ua101.c 1041 */;
	struct ua101_stream *cocci_id/* sound/usb/misc/ua101.c 1038 */;
	int cocci_id/* sound/usb/misc/ua101.c 1038 */;
}
