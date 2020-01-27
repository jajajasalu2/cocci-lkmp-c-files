cocci_test_suite() {
	const unsigned char *cocci_id/* sound/usb/bcd2000/bcd2000.c 97 */;
	unsigned int cocci_id/* sound/usb/bcd2000/bcd2000.c 97 */;
	const char *cocci_id/* sound/usb/bcd2000/bcd2000.c 68 */;
	int cocci_id/* sound/usb/bcd2000/bcd2000.c 68 */;
	struct usb_driver cocci_id/* sound/usb/bcd2000/bcd2000.c 65 */;
	char *cocci_id/* sound/usb/bcd2000/bcd2000.c 61 */[SNDRV_CARDS];
	int cocci_id/* sound/usb/bcd2000/bcd2000.c 60 */[SNDRV_CARDS];
	struct bcd2000 *cocci_id/* sound/usb/bcd2000/bcd2000.c 428 */;
	struct usb_interface *cocci_id/* sound/usb/bcd2000/bcd2000.c 426 */;
	void cocci_id/* sound/usb/bcd2000/bcd2000.c 426 */;
	struct bcd2000 {
		struct usb_device *dev;
		struct snd_card *card;
		struct usb_interface *intf;
		int card_index;
		int midi_out_active;
		struct snd_rawmidi *rmidi;
		struct snd_rawmidi_substream *midi_receive_substream;
		struct snd_rawmidi_substream *midi_out_substream;
		unsigned char midi_in_buf[BUFSIZE];
		unsigned char midi_out_buf[BUFSIZE];
		struct urb *midi_out_urb;
		struct urb *midi_in_urb;
		struct usb_anchor anchor;
	} cocci_id/* sound/usb/bcd2000/bcd2000.c 40 */;
	char cocci_id/* sound/usb/bcd2000/bcd2000.c 368 */[32];
	struct snd_card *cocci_id/* sound/usb/bcd2000/bcd2000.c 365 */;
	const struct usb_device_id *cocci_id/* sound/usb/bcd2000/bcd2000.c 363 */;
	unsigned char cocci_id/* sound/usb/bcd2000/bcd2000.c 30 */[];
	struct snd_rawmidi *cocci_id/* sound/usb/bcd2000/bcd2000.c 293 */;
	const struct snd_rawmidi_ops cocci_id/* sound/usb/bcd2000/bcd2000.c 252 */;
	const struct usb_device_id cocci_id/* sound/usb/bcd2000/bcd2000.c 23 */[];
	struct urb *cocci_id/* sound/usb/bcd2000/bcd2000.c 222 */;
	struct snd_rawmidi_substream *cocci_id/* sound/usb/bcd2000/bcd2000.c 100 */;
}
