cocci_test_suite() {
	const unsigned char *cocci_id/* sound/usb/validate.c 73 */;
	const struct uac_processing_unit_descriptor *cocci_id/* sound/usb/validate.c 72 */;
	size_t cocci_id/* sound/usb/validate.c 39 */;
	const struct uac_mixer_unit_descriptor *cocci_id/* sound/usb/validate.c 38 */;
	unsigned char *cocci_id/* sound/usb/validate.c 325 */;
	bool cocci_id/* sound/usb/validate.c 323 */;
	void *cocci_id/* sound/usb/validate.c 323 */;
	int cocci_id/* sound/usb/validate.c 323 */;
	const struct usb_desc_validator *cocci_id/* sound/usb/validate.c 304 */;
	struct usb_midi_in_jack_descriptor cocci_id/* sound/usb/validate.c 295 */;
	struct usb_ms_header_descriptor cocci_id/* sound/usb/validate.c 293 */;
	struct uac3_clock_multiplier_descriptor cocci_id/* sound/usb/validate.c 285 */;
	struct uac3_clock_source_descriptor cocci_id/* sound/usb/validate.c 282 */;
	const struct uac1_ac_header_descriptor *cocci_id/* sound/usb/validate.c 28 */;
	struct uac3_output_terminal_descriptor cocci_id/* sound/usb/validate.c 273 */;
	struct uac3_input_terminal_descriptor cocci_id/* sound/usb/validate.c 271 */;
	struct uac3_ac_header_descriptor cocci_id/* sound/usb/validate.c 269 */;
	struct uac_clock_multiplier_descriptor cocci_id/* sound/usb/validate.c 265 */;
	struct uac_clock_source_descriptor cocci_id/* sound/usb/validate.c 262 */;
	struct uac2_output_terminal_descriptor cocci_id/* sound/usb/validate.c 254 */;
	struct uac2_input_terminal_descriptor cocci_id/* sound/usb/validate.c 252 */;
	struct uac2_ac_header_descriptor cocci_id/* sound/usb/validate.c 250 */;
	struct uac1_output_terminal_descriptor cocci_id/* sound/usb/validate.c 242 */;
	struct uac_input_terminal_descriptor cocci_id/* sound/usb/validate.c 240 */;
	struct usb_desc_validator cocci_id/* sound/usb/validate.c 236 */[];
	const struct usb_midi_out_jack_descriptor *cocci_id/* sound/usb/validate.c 227 */;
	const void *cocci_id/* sound/usb/validate.c 224 */;
	unsigned char cocci_id/* sound/usb/validate.c 22 */;
	const struct uac3_feature_unit_descriptor *cocci_id/* sound/usb/validate.c 216 */;
	const struct uac2_feature_unit_descriptor *cocci_id/* sound/usb/validate.c 205 */;
	const struct uac_feature_unit_descriptor *cocci_id/* sound/usb/validate.c 194 */;
	const struct uac_selector_unit_descriptor *cocci_id/* sound/usb/validate.c 170 */;
	struct usb_desc_validator {
		unsigned char protocol;
		unsigned char type;
		bool (*func)(const void *p,
			     const struct usb_desc_validator *v);
		size_t size;
	} cocci_id/* sound/usb/validate.c 15 */;
}
