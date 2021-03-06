cocci_test_suite() {
	u8 cocci_id/* sound/aoa/codecs/onyx.c 998 */;
	struct device_node *cocci_id/* sound/aoa/codecs/onyx.c 996 */;
	const struct i2c_device_id *cocci_id/* sound/aoa/codecs/onyx.c 994 */;
	struct i2c_client *cocci_id/* sound/aoa/codecs/onyx.c 993 */;
	struct aoa_codec *cocci_id/* sound/aoa/codecs/onyx.c 982 */;
	void cocci_id/* sound/aoa/codecs/onyx.c 982 */;
	struct snd_device *cocci_id/* sound/aoa/codecs/onyx.c 95 */;
	struct codec_info *cocci_id/* sound/aoa/codecs/onyx.c 864 */;
	struct snd_kcontrol *cocci_id/* sound/aoa/codecs/onyx.c 863 */;
	struct codec_info cocci_id/* sound/aoa/codecs/onyx.c 844 */;
	pm_message_t cocci_id/* sound/aoa/codecs/onyx.c 793 */;
	enum clock_switch cocci_id/* sound/aoa/codecs/onyx.c 770 */;
	struct onyx *cocci_id/* sound/aoa/codecs/onyx.c 758 */;
	struct snd_pcm_substream *cocci_id/* sound/aoa/codecs/onyx.c 756 */;
	struct codec_info_item *cocci_id/* sound/aoa/codecs/onyx.c 755 */;
	int cocci_id/* sound/aoa/codecs/onyx.c 755 */;
	struct bus_info *cocci_id/* sound/aoa/codecs/onyx.c 693 */;
	s32 cocci_id/* sound/aoa/codecs/onyx.c 67 */;
	struct transfer_info *cocci_id/* sound/aoa/codecs/onyx.c 668 */;
	u8 *cocci_id/* sound/aoa/codecs/onyx.c 65 */;
	struct transfer_info cocci_id/* sound/aoa/codecs/onyx.c 604 */[];
	u8 cocci_id/* sound/aoa/codecs/onyx.c 582 */[sizeof(initial_values)];
	u8 cocci_id/* sound/aoa/codecs/onyx.c 562 */[ARRAY_SIZE(register_map)];
	u8 cocci_id/* sound/aoa/codecs/onyx.c 546 */[];
	struct onyx {
		u8 cache[16];
		struct i2c_client *i2c;
		struct aoa_codec codec;
		u32 initialised:1,spdif_locked:1,analog_locked:1,original_mute:2;
		int open_count;
		struct codec_info *codec_info;
		struct mutex mutex;
	} cocci_id/* sound/aoa/codecs/onyx.c 45 */;
	long int cocci_id/* sound/aoa/codecs/onyx.c 370 */;
	const struct snd_kcontrol_new cocci_id/* sound/aoa/codecs/onyx.c 286 */;
	s8 cocci_id/* sound/aoa/codecs/onyx.c 265 */;
	struct snd_ctl_elem_value *cocci_id/* sound/aoa/codecs/onyx.c 249 */;
	const char *constcocci_id/* sound/aoa/codecs/onyx.c 243 */[];
	struct snd_ctl_elem_info *cocci_id/* sound/aoa/codecs/onyx.c 241 */;
	struct i2c_driver cocci_id/* sound/aoa/codecs/onyx.c 1049 */;
	const struct i2c_device_id cocci_id/* sound/aoa/codecs/onyx.c 1043 */[];
	struct onyx cocci_id/* sound/aoa/codecs/onyx.c 1000 */;
	struct snd_device_ops cocci_id/* sound/aoa/codecs/onyx.c 100 */;
}
