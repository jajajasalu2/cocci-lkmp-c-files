cocci_test_suite() {
	struct usbmix_dB_map {
		u32 min;
		u32 max;
	} cocci_id/* sound/usb/mixer_maps.c 8 */;
	struct usbmix_ctl_map cocci_id/* sound/usb/mixer_maps.c 508 */[];
	const struct usbmix_name_map cocci_id/* sound/usb/mixer_maps.c 345 */[];
	struct usbmix_dB_map cocci_id/* sound/usb/mixer_maps.c 333 */;
	struct usbmix_ctl_map {
		u32 id;
		const struct usbmix_name_map *map;
		const struct usbmix_selector_map *selector_map;
		int ignore_ctl_error;
	} cocci_id/* sound/usb/mixer_maps.c 26 */;
	struct usbmix_selector_map {
		int id;
		int count;
		const char **names;
	} cocci_id/* sound/usb/mixer_maps.c 20 */;
	const char *cocci_id/* sound/usb/mixer_maps.c 188 */[];
	struct usbmix_selector_map cocci_id/* sound/usb/mixer_maps.c 184 */[];
	struct usbmix_name_map cocci_id/* sound/usb/mixer_maps.c 142 */[];
	struct usbmix_name_map {
		int id;
		const char *name;
		int control;
		struct usbmix_dB_map *dB;
	} cocci_id/* sound/usb/mixer_maps.c 13 */;
}
