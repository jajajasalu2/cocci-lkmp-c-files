cocci_test_suite() {
	struct device *cocci_id/* drivers/hid/hid-prodikeys.c 99 */;
	ssize_t cocci_id/* drivers/hid/hid-prodikeys.c 99 */;
	bool cocci_id/* drivers/hid/hid-prodikeys.c 92 */;
	struct hid_driver cocci_id/* drivers/hid/hid-prodikeys.c 883 */;
	bool cocci_id/* drivers/hid/hid-prodikeys.c 88 */[SNDRV_CARDS];
	const struct hid_device_id cocci_id/* drivers/hid/hid-prodikeys.c 875 */[];
	char *cocci_id/* drivers/hid/hid-prodikeys.c 87 */[SNDRV_CARDS];
	int cocci_id/* drivers/hid/hid-prodikeys.c 86 */[SNDRV_CARDS];
	const char cocci_id/* drivers/hid/hid-prodikeys.c 84 */[];
	struct usb_interface *cocci_id/* drivers/hid/hid-prodikeys.c 801 */;
	const struct hid_device_id *cocci_id/* drivers/hid/hid-prodikeys.c 798 */;
	struct pk_device *cocci_id/* drivers/hid/hid-prodikeys.c 762 */;
	unsigned long **cocci_id/* drivers/hid/hid-prodikeys.c 760 */;
	int *cocci_id/* drivers/hid/hid-prodikeys.c 760 */;
	struct hid_usage *cocci_id/* drivers/hid/hid-prodikeys.c 759 */;
	struct hid_field *cocci_id/* drivers/hid/hid-prodikeys.c 759 */;
	struct hid_input *cocci_id/* drivers/hid/hid-prodikeys.c 758 */;
	unsigned int *cocci_id/* drivers/hid/hid-prodikeys.c 745 */;
	__u8 *cocci_id/* drivers/hid/hid-prodikeys.c 744 */;
	struct snd_device_ops cocci_id/* drivers/hid/hid-prodikeys.c 608 */;
	struct snd_rawmidi *cocci_id/* drivers/hid/hid-prodikeys.c 605 */;
	struct snd_card *cocci_id/* drivers/hid/hid-prodikeys.c 604 */;
	const struct snd_rawmidi_ops cocci_id/* drivers/hid/hid-prodikeys.c 595 */;
	struct snd_rawmidi_substream *cocci_id/* drivers/hid/hid-prodikeys.c 580 */;
	struct snd_device *cocci_id/* drivers/hid/hid-prodikeys.c 566 */;
	unsigned short cocci_id/* drivers/hid/hid-prodikeys.c 536 */;
	const unsigned int *cocci_id/* drivers/hid/hid-prodikeys.c 535 */;
	struct pcmidi_snd {
		struct pk_device *pk;
		unsigned short ifnum;
		struct hid_report *pcmidi_report6;
		struct input_dev *input_ep82;
		unsigned short midi_mode;
		unsigned short midi_sustain_mode;
		unsigned short midi_sustain;
		unsigned short midi_channel;
		short midi_octave;
		struct pcmidi_sustain sustained_notes[PCMIDI_SUSTAINED_MAX];
		unsigned short fn_state;
		unsigned short last_key[24];
		spinlock_t rawmidi_in_lock;
		struct snd_card *card;
		struct snd_rawmidi *rwmidi;
		struct snd_rawmidi_substream *in_substream;
		struct snd_rawmidi_substream *out_substream;
		unsigned long in_triggered;
		unsigned long out_active;
	} cocci_id/* drivers/hid/hid-prodikeys.c 52 */;
	const unsigned int cocci_id/* drivers/hid/hid-prodikeys.c 519 */[];
	struct input_dev *cocci_id/* drivers/hid/hid-prodikeys.c 513 */;
	u8 *cocci_id/* drivers/hid/hid-prodikeys.c 494 */;
	struct pcmidi_sustain {
		unsigned long in_use;
		struct pcmidi_snd *pm;
		struct timer_list timer;
		unsigned char status;
		unsigned char note;
		unsigned char velocity;
	} cocci_id/* drivers/hid/hid-prodikeys.c 42 */;
	struct pk_device {
		unsigned long quirks;
		struct hid_device *hdev;
		struct pcmidi_snd *pm;
	} cocci_id/* drivers/hid/hid-prodikeys.c 35 */;
	unsigned char cocci_id/* drivers/hid/hid-prodikeys.c 340 */;
	struct pcmidi_snd cocci_id/* drivers/hid/hid-prodikeys.c 33 */;
	u32 cocci_id/* drivers/hid/hid-prodikeys.c 308 */;
	struct hid_report *cocci_id/* drivers/hid/hid-prodikeys.c 274 */;
	struct hid_device *cocci_id/* drivers/hid/hid-prodikeys.c 273 */;
	int cocci_id/* drivers/hid/hid-prodikeys.c 271 */;
	unsigned cocci_id/* drivers/hid/hid-prodikeys.c 249 */;
	struct pcmidi_sustain *cocci_id/* drivers/hid/hid-prodikeys.c 248 */;
	struct pcmidi_snd *cocci_id/* drivers/hid/hid-prodikeys.c 246 */;
	void cocci_id/* drivers/hid/hid-prodikeys.c 246 */;
	struct timer_list *cocci_id/* drivers/hid/hid-prodikeys.c 238 */;
	unsigned char cocci_id/* drivers/hid/hid-prodikeys.c 217 */[3];
	unsigned long cocci_id/* drivers/hid/hid-prodikeys.c 216 */;
	const char *cocci_id/* drivers/hid/hid-prodikeys.c 113 */;
	size_t cocci_id/* drivers/hid/hid-prodikeys.c 113 */;
	struct device_attribute *cocci_id/* drivers/hid/hid-prodikeys.c 100 */;
	char *cocci_id/* drivers/hid/hid-prodikeys.c 100 */;
}
