cocci_test_suite() {
	struct snd_usb_midi_endpoint cocci_id/* sound/usb/midi.c 99 */;
	struct snd_usb_midi_out_endpoint cocci_id/* sound/usb/midi.c 98 */;
	struct snd_usb_midi_in_endpoint cocci_id/* sound/usb/midi.c 97 */;
	const u8 cocci_id/* sound/usb/midi.c 961 */[];
	const struct usb_protocol_ops cocci_id/* sound/usb/midi.c 933 */;
	struct usb_ms_endpoint_descriptor {
		__u8 bLength;
		__u8 bDescriptorType;
		__u8 bDescriptorSubtype;
		__u8 bNumEmbMIDIJack;
		__u8 baAssocJackID[0];
	}__attribute__((packed)) cocci_id/* sound/usb/midi.c 89 */;
	struct usb_ms_header_descriptor {
		__u8 bLength;
		__u8 bDescriptorType;
		__u8 bDescriptorSubtype;
		__u8 bcdMSC[2];
		__le16 wTotalLength;
	}__attribute__((packed)) cocci_id/* sound/usb/midi.c 81 */;
	struct snd_rawmidi_substream *cocci_id/* sound/usb/midi.c 744 */;
	uint8_t cocci_id/* sound/usb/midi.c 743 */[MAX_AKAI_SYSEX_LEN];
	void (*cocci_id/* sound/usb/midi.c 561 */)(struct urb *, uint8_t,
						   uint8_t, uint8_t, uint8_t);
	uint8_t cocci_id/* sound/usb/midi.c 540 */;
	uint8_t *cocci_id/* sound/usb/midi.c 478 */;
	struct snd_usb_midi_in_endpoint *cocci_id/* sound/usb/midi.c 477 */;
	void cocci_id/* sound/usb/midi.c 477 */;
	u8 cocci_id/* sound/usb/midi.c 445 */;
	void *cocci_id/* sound/usb/midi.c 388 */;
	const void *cocci_id/* sound/usb/midi.c 385 */;
	struct snd_usb_midi_out_endpoint *cocci_id/* sound/usb/midi.c 384 */;
	struct timer_list *cocci_id/* sound/usb/midi.c 356 */;
	unsigned long cocci_id/* sound/usb/midi.c 314 */;
	struct out_urb_context *cocci_id/* sound/usb/midi.c 281 */;
	const u8 *cocci_id/* sound/usb/midi.c 241 */;
	const char *cocci_id/* sound/usb/midi.c 241 */;
	struct snd_usb_midi_endpoint_info cocci_id/* sound/usb/midi.c 2388 */;
	struct snd_usb_midi_endpoint_info cocci_id/* sound/usb/midi.c 2353 */[MIDI_MAX_ENDPOINTS];
	struct snd_usb_midi *cocci_id/* sound/usb/midi.c 2352 */;
	unsigned int cocci_id/* sound/usb/midi.c 2350 */;
	const struct snd_usb_audio_quirk *cocci_id/* sound/usb/midi.c 2349 */;
	struct list_head *cocci_id/* sound/usb/midi.c 2348 */;
	struct usb_interface *cocci_id/* sound/usb/midi.c 2347 */;
	struct snd_card *cocci_id/* sound/usb/midi.c 2346 */;
	int cocci_id/* sound/usb/midi.c 2346 */;
	struct usbmidi_in_port *cocci_id/* sound/usb/midi.c 229 */;
	struct snd_rawmidi *cocci_id/* sound/usb/midi.c 2240 */;
	const struct snd_rawmidi_global_ops cocci_id/* sound/usb/midi.c 2233 */;
	struct usb_endpoint_descriptor *cocci_id/* sound/usb/midi.c 2147 */;
	struct usb_interface_descriptor *cocci_id/* sound/usb/midi.c 2146 */;
	struct usb_host_interface *cocci_id/* sound/usb/midi.c 2145 */;
	u8 *cocci_id/* sound/usb/midi.c 2107 */;
	const struct urb *cocci_id/* sound/usb/midi.c 203 */;
	const struct snd_kcontrol_new cocci_id/* sound/usb/midi.c 1947 */;
	struct snd_ctl_elem_value *cocci_id/* sound/usb/midi.c 1925 */;
	struct snd_kcontrol *cocci_id/* sound/usb/midi.c 1924 */;
	gfp_t cocci_id/* sound/usb/midi.c 192 */;
	const char *const cocci_id/* sound/usb/midi.c 1919 */[];
	struct snd_ctl_elem_info *cocci_id/* sound/usb/midi.c 1917 */;
	const uint8_t cocci_id/* sound/usb/midi.c 185 */[];
	struct usb_ms_endpoint_descriptor *cocci_id/* sound/usb/midi.c 1841 */;
	struct usb_host_endpoint *cocci_id/* sound/usb/midi.c 1839 */;
	struct usb_ms_header_descriptor *cocci_id/* sound/usb/midi.c 1838 */;
	void cocci_id/* sound/usb/midi.c 183 */(struct snd_usb_midi_out_endpoint *ep);
	struct snd_usb_midi_endpoint_info *cocci_id/* sound/usb/midi.c 1786 */;
	struct snd_rawmidi_substream **cocci_id/* sound/usb/midi.c 1760 */;
	struct snd_seq_port_info *cocci_id/* sound/usb/midi.c 1745 */;
	struct port_info *cocci_id/* sound/usb/midi.c 1732 */;
	struct snd_usb_midi_in_endpoint {
		struct snd_usb_midi *umidi;
		struct urb *urbs[INPUT_URBS];
		struct usbmidi_in_port {
			struct snd_rawmidi_substream *substream;
			u8 running_status_length;
		} ports[0x10];
		u8 seen_f5;
		bool in_sysex;
		u8 last_cin;
		u8 error_resubmit;
		int current_port;
	} cocci_id/* sound/usb/midi.c 169 */;
	struct port_info {
		u32 id;
		short int port;
		short int voices;
		const char *name;
		unsigned int seq_flags;
	} cocci_id/* sound/usb/midi.c 1557 */[];
	struct snd_usb_midi_endpoint *cocci_id/* sound/usb/midi.c 1503 */;
	struct snd_usb_midi cocci_id/* sound/usb/midi.c 1490 */;
	struct snd_usb_midi_out_endpoint {
		struct snd_usb_midi *umidi;
		struct out_urb_context {
			struct urb *urb;
			struct snd_usb_midi_out_endpoint *ep;
		} urbs[OUTPUT_URBS];
		unsigned int active_urbs;
		unsigned int drain_urbs;
		int max_transfer;
		struct tasklet_struct tasklet;
		unsigned int next_urb;
		spinlock_t buffer_lock;
		struct usbmidi_out_port {
			struct snd_usb_midi_out_endpoint *ep;
			struct snd_rawmidi_substream *substream;
			int active;
			uint8_t cable;
			uint8_t state;
#define STATE_UNKNOWN 0
#define STATE_1PARAM 1
#define STATE_2PARAM_1 2
#define STATE_2PARAM_2 3
#define STATE_SYSEX_0 4
#define STATE_SYSEX_1 5
#define STATE_SYSEX_2 6
			uint8_t data[2];
		} ports[0x10];
		int current_port;
		wait_queue_head_t drain_wait;
	} cocci_id/* sound/usb/midi.c 136 */;
	struct urb *cocci_id/* sound/usb/midi.c 1250 */;
	const struct snd_rawmidi_ops cocci_id/* sound/usb/midi.c 1244 */;
	long cocci_id/* sound/usb/midi.c 1191 */;
	struct snd_usb_midi {
		struct usb_device *dev;
		struct snd_card *card;
		struct usb_interface *iface;
		const struct snd_usb_audio_quirk *quirk;
		struct snd_rawmidi *rmidi;
		const struct usb_protocol_ops *usb_protocol_ops;
		struct list_head list;
		struct timer_list error_timer;
		spinlock_t disc_lock;
		struct rw_semaphore disc_rwsem;
		struct mutex mutex;
		u32 usb_id;
		int next_midi_device;
		struct snd_usb_midi_endpoint {
			struct snd_usb_midi_out_endpoint *out;
			struct snd_usb_midi_in_endpoint *in;
		} endpoints[MIDI_MAX_ENDPOINTS];
		unsigned long input_triggered;
		unsigned int opened[2];
		unsigned char disconnected;
		unsigned char input_running;
		struct snd_kcontrol *roland_load_ctl;
	} cocci_id/* sound/usb/midi.c 109 */;
	struct usbmidi_out_port *cocci_id/* sound/usb/midi.c 1030 */;
	struct usb_protocol_ops {
		void (*input)(struct snd_usb_midi_in_endpoint *, uint8_t *, int);
		void (*output)(struct snd_usb_midi_out_endpoint *ep, struct urb *urb);
		void (*output_packet)(struct urb *, uint8_t, uint8_t, uint8_t, uint8_t);
		void (*init_out_endpoint)(struct snd_usb_midi_out_endpoint *);
		void (*finish_out_endpoint)(struct snd_usb_midi_out_endpoint *);
	} cocci_id/* sound/usb/midi.c 101 */;
}
