cocci_test_suite() {
	struct uac_feature_unit_descriptor *cocci_id/* sound/usb/mixer.c 956 */;
	unsigned char *cocci_id/* sound/usb/mixer.c 935 */;
	void *cocci_id/* sound/usb/mixer.c 934 */;
	struct mixer_build *cocci_id/* sound/usb/mixer.c 930 */;
	struct uac3_clock_source_descriptor *cocci_id/* sound/usb/mixer.c 916 */;
	enum{USB_XU_CLOCK_SOURCE_SELECTOR=0x02, USB_XU_CLOCK_RATE_SELECTOR=0x03, USB_XU_DIGITAL_FORMAT_SELECTOR=0x01, USB_XU_SOFT_LIMIT_SELECTOR=0x03,} cocci_id/* sound/usb/mixer.c 86 */;
	enum{USB_XU_CLOCK_RATE=0xe301, USB_XU_CLOCK_SOURCE=0xe302, USB_XU_DIGITAL_IO_STATUS=0xe303, USB_XU_DEVICE_OPTIONS=0xe304, USB_XU_DIRECT_MONITORING=0xe305, USB_XU_METERING=0xe306,} cocci_id/* sound/usb/mixer.c 78 */;
	struct uac_input_terminal_descriptor *cocci_id/* sound/usb/mixer.c 770 */;
	int cocci_id/* sound/usb/mixer.c 763 */(struct mixer_build *state,
						int id,
						struct usb_audio_term *term);
	struct uac3_cluster_header_descriptor cocci_id/* sound/usb/mixer.c 711 */;
	struct mixer_build {
		struct snd_usb_audio *chip;
		struct usb_mixer_interface *mixer;
		unsigned char *buffer;
		unsigned int buflen;
	DECLARE_BITMAP(unitbitmap,MAX_ID_ELEMS)
		;
	DECLARE_BITMAP(termbitmap,MAX_ID_ELEMS)
		;
		struct usb_audio_term oterm;
		const struct usbmix_name_map *map;
		const struct usbmix_selector_map *selector_map;
	} cocci_id/* sound/usb/mixer.c 65 */;
	struct iterm_name_combo *cocci_id/* sound/usb/mixer.c 649 */;
	struct usbmix_name_map cocci_id/* sound/usb/mixer.c 63 */;
	struct iterm_name_combo {
		int type;
		char *name;
	} cocci_id/* sound/usb/mixer.c 603 */[];
	int cocci_id/* sound/usb/mixer.c 558 */(struct mixer_build *state,
						int unitid);
	struct usb_audio_term {
		int id;
		int type;
		int channels;
		unsigned int chconfig;
		int name;
	} cocci_id/* sound/usb/mixer.c 55 */;
	unsigned int __user *cocci_id/* sound/usb/mixer.c 538 */;
	unsigned char cocci_id/* sound/usb/mixer.c 451 */[4];
	int *cocci_id/* sound/usb/mixer.c 397 */;
	struct usb_mixer_elem_list *cocci_id/* sound/usb/mixer.c 3525 */;
	struct snd_device_ops cocci_id/* sound/usb/mixer.c 3410 */;
	__u8 cocci_id/* sound/usb/mixer.c 339 */;
	const struct snd_kcontrol_new cocci_id/* sound/usb/mixer.c 3386 */;
	struct snd_ctl_elem_value *cocci_id/* sound/usb/mixer.c 3366 */;
	unsigned char cocci_id/* sound/usb/mixer.c 336 */[sizeof(__u16) + 3 * sizeof(__u32)];
	struct usb_endpoint_descriptor *cocci_id/* sound/usb/mixer.c 3335 */;
	struct uac2_interrupt_data_msg *cocci_id/* sound/usb/mixer.c 3307 */;
	struct uac1_status_word *cocci_id/* sound/usb/mixer.c 3287 */;
	struct urb *cocci_id/* sound/usb/mixer.c 3277 */;
	struct snd_info_entry *cocci_id/* sound/usb/mixer.c 3187 */;
	char *cocci_id/* sound/usb/mixer.c 3177 */[];
	struct snd_info_buffer *cocci_id/* sound/usb/mixer.c 3173 */;
	struct uac3_output_terminal_descriptor *cocci_id/* sound/usb/mixer.c 3129 */;
	struct uac2_output_terminal_descriptor *cocci_id/* sound/usb/mixer.c 3104 */;
	struct uac1_output_terminal_descriptor *cocci_id/* sound/usb/mixer.c 3093 */;
	const struct usbmix_ctl_map *cocci_id/* sound/usb/mixer.c 3066 */;
	struct mixer_build cocci_id/* sound/usb/mixer.c 3064 */;
	unsigned char cocci_id/* sound/usb/mixer.c 299 */[2];
	struct snd_usb_audio *cocci_id/* sound/usb/mixer.c 298 */;
	char cocci_id/* sound/usb/mixer.c 2926 */;
	struct usb_interface_descriptor *cocci_id/* sound/usb/mixer.c 2924 */;
	struct usb_host_interface *cocci_id/* sound/usb/mixer.c 2923 */;
	struct usb_interface *cocci_id/* sound/usb/mixer.c 2922 */;
	struct uac3_badd_profile *cocci_id/* sound/usb/mixer.c 2911 */;
	struct usb_interface_assoc_descriptor *cocci_id/* sound/usb/mixer.c 2909 */;
	struct usb_device *cocci_id/* sound/usb/mixer.c 2908 */;
	struct uac3_badd_profile cocci_id/* sound/usb/mixer.c 2806 */[];
	struct uac3_badd_profile {
		int subclass;
		const char *name;
		int c_chmask;
		int p_chmask;
		int st_chmask;
	} cocci_id/* sound/usb/mixer.c 2798 */;
	struct snd_device *cocci_id/* sound/usb/mixer.c 2790 */;
	unsigned long cocci_id/* sound/usb/mixer.c 2657 */;
	char **cocci_id/* sound/usb/mixer.c 2587 */;
	struct uac_selector_unit_descriptor *cocci_id/* sound/usb/mixer.c 2581 */;
	__u8 *cocci_id/* sound/usb/mixer.c 2349 */;
	struct procunit_info cocci_id/* sound/usb/mixer.c 2328 */;
	struct procunit_value_info cocci_id/* sound/usb/mixer.c 2324 */[];
	struct procunit_value_info *cocci_id/* sound/usb/mixer.c 2322 */;
	struct uac_processing_unit_descriptor *cocci_id/* sound/usb/mixer.c 2316 */;
	bool cocci_id/* sound/usb/mixer.c 2314 */;
	struct procunit_info *cocci_id/* sound/usb/mixer.c 2313 */;
	struct procunit_info cocci_id/* sound/usb/mixer.c 2301 */[];
	struct procunit_info {
		int type;
		char *name;
		struct procunit_value_info *values;
	} cocci_id/* sound/usb/mixer.c 2206 */;
	struct procunit_value_info {
		int control;
		char *suffix;
		int val_type;
		int min_value;
	} cocci_id/* sound/usb/mixer.c 2199 */;
	struct uac3_input_terminal_descriptor *cocci_id/* sound/usb/mixer.c 2072 */;
	struct uac2_input_terminal_descriptor *cocci_id/* sound/usb/mixer.c 2067 */;
	struct uac_mixer_unit_descriptor *cocci_id/* sound/usb/mixer.c 2007 */;
	u8 *cocci_id/* sound/usb/mixer.c 1979 */;
	struct uac3_feature_unit_descriptor *cocci_id/* sound/usb/mixer.c 1864 */;
	struct uac2_feature_unit_descriptor *cocci_id/* sound/usb/mixer.c 1859 */;
	struct usb_audio_term cocci_id/* sound/usb/mixer.c 1848 */;
	char cocci_id/* sound/usb/mixer.c 1791 */[SNDRV_CTL_ELEM_ID_NAME_MAXLEN];
	struct uac_clock_source_descriptor *cocci_id/* sound/usb/mixer.c 1788 */;
	unsigned char cocci_id/* sound/usb/mixer.c 168 */;
	struct usb_mixer_elem_info *cocci_id/* sound/usb/mixer.c 1551 */;
	struct snd_kcontrol *cocci_id/* sound/usb/mixer.c 1550 */;
	struct usb_feature_control_info *cocci_id/* sound/usb/mixer.c 1547 */;
	struct usb_audio_term *cocci_id/* sound/usb/mixer.c 1543 */;
	unsigned int cocci_id/* sound/usb/mixer.c 1542 */;
	int cocci_id/* sound/usb/mixer.c 1542 */;
	const struct usbmix_name_map *cocci_id/* sound/usb/mixer.c 1541 */;
	struct usb_mixer_interface *cocci_id/* sound/usb/mixer.c 1540 */;
	void cocci_id/* sound/usb/mixer.c 1540 */;
	const struct usbmix_selector_map *cocci_id/* sound/usb/mixer.c 153 */;
	const char **cocci_id/* sound/usb/mixer.c 1511 */;
	const char *cocci_id/* sound/usb/mixer.c 1509 */[];
	struct snd_card *cocci_id/* sound/usb/mixer.c 1507 */;
	const char *cocci_id/* sound/usb/mixer.c 1496 */;
	size_t cocci_id/* sound/usb/mixer.c 1496 */;
	struct snd_kcontrol_new *cocci_id/* sound/usb/mixer.c 1491 */;
	struct snd_kcontrol_new cocci_id/* sound/usb/mixer.c 1469 */;
	struct uac3_insertion_ctl_blk cocci_id/* sound/usb/mixer.c 1426 */;
	struct uac2_connectors_ctl_blk cocci_id/* sound/usb/mixer.c 1419 */;
	struct snd_ctl_elem_info *cocci_id/* sound/usb/mixer.c 1284 */;
	char *cocci_id/* sound/usb/mixer.c 116 */;
	struct usb_feature_control_info cocci_id/* sound/usb/mixer.c 1023 */[];
	struct usb_feature_control_info {
		int control;
		const char *name;
		int type;
		int type_uac2;
	} cocci_id/* sound/usb/mixer.c 1016 */;
}
