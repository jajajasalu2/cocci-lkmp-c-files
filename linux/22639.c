cocci_test_suite() {
	struct usb_mixer_elem_info *cocci_id/* sound/usb/mixer_scarlett_gen2.c 945 */;
	struct snd_kcontrol *cocci_id/* sound/usb/mixer_scarlett_gen2.c 944 */;
	struct snd_kcontrol **cocci_id/* sound/usb/mixer_scarlett_gen2.c 942 */;
	const char *cocci_id/* sound/usb/mixer_scarlett_gen2.c 941 */;
	const struct snd_kcontrol_new *cocci_id/* sound/usb/mixer_scarlett_gen2.c 940 */;
	u32 cocci_id/* sound/usb/mixer_scarlett_gen2.c 918 */[SCARLETT2_NUM_METERS];
	struct {
		u16 pad;
		u16 num_meters;
		u32 magic;
	}__packed cocci_id/* sound/usb/mixer_scarlett_gen2.c 913 */;
	u16 *cocci_id/* sound/usb/mixer_scarlett_gen2.c 911 */;
	struct {
		u16 pad;
		u16 num;
		u32 data[SCARLETT2_MUX_MAX];
	}__packed cocci_id/* sound/usb/mixer_scarlett_gen2.c 852 */;
	const int cocci_id/* sound/usb/mixer_scarlett_gen2.c 843 */[SCARLETT2_PORT_TYPE_COUNT];
	struct {
		u16 mix_num;
		u16 data[SCARLETT2_INPUT_MIX_MAX];
	}__packed cocci_id/* sound/usb/mixer_scarlett_gen2.c 796 */;
	struct scarlett2_usb_volume_status *cocci_id/* sound/usb/mixer_scarlett_gen2.c 781 */;
	const struct scarlett2_config cocci_id/* sound/usb/mixer_scarlett_gen2.c 771 */;
	struct {
		u32 offset;
		u32 size;
	}__packed cocci_id/* sound/usb/mixer_scarlett_gen2.c 755 */;
	struct {
		u32 offset;
		u32 bytes;
		s32 value;
	}__packed cocci_id/* sound/usb/mixer_scarlett_gen2.c 715 */;
	struct scarlett2_mixer_data cocci_id/* sound/usb/mixer_scarlett_gen2.c 701 */;
	struct work_struct *cocci_id/* sound/usb/mixer_scarlett_gen2.c 698 */;
	u32 cocci_id/* sound/usb/mixer_scarlett_gen2.c 690 */;
	void cocci_id/* sound/usb/mixer_scarlett_gen2.c 688 */;
	struct scarlett2_usb_packet cocci_id/* sound/usb/mixer_scarlett_gen2.c 591 */;
	u16 cocci_id/* sound/usb/mixer_scarlett_gen2.c 573 */;
	struct scarlett2_usb_packet *cocci_id/* sound/usb/mixer_scarlett_gen2.c 572 */;
	struct scarlett2_usb_packet {
		u32 cmd;
		u16 size;
		u16 seq;
		u32 error;
		u32 pad;
		u8 data[];
	} cocci_id/* sound/usb/mixer_scarlett_gen2.c 560 */;
	const struct scarlett2_config cocci_id/* sound/usb/mixer_scarlett_gen2.c 521 */[SCARLETT2_CONFIG_COUNT];
	struct scarlett2_config {
		u8 offset;
		u8 size;
		u8 activate;
	} cocci_id/* sound/usb/mixer_scarlett_gen2.c 515 */;
	enum{SCARLETT2_CONFIG_BUTTONS=0, SCARLETT2_CONFIG_LINE_OUT_VOLUME=1, SCARLETT2_CONFIG_SW_HW_SWITCH=2, SCARLETT2_CONFIG_LEVEL_SWITCH=3, SCARLETT2_CONFIG_PAD_SWITCH=4, SCARLETT2_CONFIG_COUNT=5,} cocci_id/* sound/usb/mixer_scarlett_gen2.c 503 */;
	struct scarlett2_usb_volume_status {
		u8 buttons[SCARLETT2_BUTTON_MAX];
		u8 pad1;
		s16 sw_vol[SCARLETT2_ANALOGUE_MAX];
		s16 hw_vol[SCARLETT2_ANALOGUE_MAX];
		u8 pad2[SCARLETT2_ANALOGUE_MAX];
		u8 sw_hw_switch[SCARLETT2_ANALOGUE_MAX];
		u8 pad3[6];
		s16 master_vol;
	}__packed cocci_id/* sound/usb/mixer_scarlett_gen2.c 479 */;
	const struct scarlett2_device_info cocci_id/* sound/usb/mixer_scarlett_gen2.c 367 */;
	struct scarlett2_mixer_data {
		struct usb_mixer_interface *mixer;
		struct mutex usb_mutex;
		struct mutex data_mutex;
		struct delayed_work work;
		const struct scarlett2_device_info *info;
		int num_mux_srcs;
		u16 scarlett2_seq;
		u8 vol_updated;
		u8 master_vol;
		u8 vol[SCARLETT2_ANALOGUE_MAX];
		u8 vol_sw_hw_switch[SCARLETT2_ANALOGUE_MAX];
		u8 level_switch[SCARLETT2_LEVEL_SWITCH_MAX];
		u8 pad_switch[SCARLETT2_PAD_SWITCH_MAX];
		u8 buttons[SCARLETT2_BUTTON_MAX];
		struct snd_kcontrol *master_vol_ctl;
		struct snd_kcontrol *vol_ctls[SCARLETT2_ANALOGUE_MAX];
		struct snd_kcontrol *button_ctls[SCARLETT2_BUTTON_MAX];
		u8 mux[SCARLETT2_MUX_MAX];
		u8 mix[SCARLETT2_INPUT_MIX_MAX * SCARLETT2_OUTPUT_MIX_MAX];
	} cocci_id/* sound/usb/mixer_scarlett_gen2.c 223 */;
	struct scarlett2_device_info {
		u8 line_out_hw_vol;
		u8 button_count;
		u8 level_input_count;
		u8 pad_input_count;
		const char *const line_out_descrs[SCARLETT2_ANALOGUE_MAX];
		struct scarlett2_ports ports[SCARLETT2_PORT_TYPE_COUNT];
	} cocci_id/* sound/usb/mixer_scarlett_gen2.c 214 */;
	struct scarlett2_ports {
		u16 id;
		int num[SCARLETT2_PORT_DIRECTIONS];
		const char *const src_descr;
		int src_num_offset;
		const char *const dst_descr;
	} cocci_id/* sound/usb/mixer_scarlett_gen2.c 206 */;
	void *cocci_id/* sound/usb/mixer_scarlett_gen2.c 1973 */;
	unsigned int cocci_id/* sound/usb/mixer_scarlett_gen2.c 1971 */;
	struct usb_device *cocci_id/* sound/usb/mixer_scarlett_gen2.c 1970 */;
	const char *constcocci_id/* sound/usb/mixer_scarlett_gen2.c 195 */[SCARLETT2_BUTTON_MAX];
	u32 *cocci_id/* sound/usb/mixer_scarlett_gen2.c 1949 */;
	struct urb *cocci_id/* sound/usb/mixer_scarlett_gen2.c 1938 */;
	struct scarlett2_usb_volume_status cocci_id/* sound/usb/mixer_scarlett_gen2.c 1844 */;
	u8 cocci_id/* sound/usb/mixer_scarlett_gen2.c 1843 */[SCARLETT2_PAD_SWITCH_MAX];
	u8 cocci_id/* sound/usb/mixer_scarlett_gen2.c 1842 */[SCARLETT2_LEVEL_SWITCH_MAX];
	enum{SCARLETT2_PORT_IN=0, SCARLETT2_PORT_OUT=1, SCARLETT2_PORT_OUT_44=2, SCARLETT2_PORT_OUT_88=3, SCARLETT2_PORT_OUT_176=4, SCARLETT2_PORT_DIRECTIONS=5,} cocci_id/* sound/usb/mixer_scarlett_gen2.c 183 */;
	const int cocci_id/* sound/usb/mixer_scarlett_gen2.c 1762 */[];
	u8 *cocci_id/* sound/usb/mixer_scarlett_gen2.c 1756 */;
	enum{SCARLETT2_PORT_TYPE_NONE=0, SCARLETT2_PORT_TYPE_ANALOGUE=1, SCARLETT2_PORT_TYPE_SPDIF=2, SCARLETT2_PORT_TYPE_ADAT=3, SCARLETT2_PORT_TYPE_MIX=4, SCARLETT2_PORT_TYPE_PCM=5, SCARLETT2_PORT_TYPE_COUNT=6,} cocci_id/* sound/usb/mixer_scarlett_gen2.c 172 */;
	u16 cocci_id/* sound/usb/mixer_scarlett_gen2.c 1692 */[SCARLETT2_NUM_METERS];
	const char *constcocci_id/* sound/usb/mixer_scarlett_gen2.c 1657 */;
	const  cocci_id/* sound/usb/mixer_scarlett_gen2.c 1519 */(
								  db_scale_scarlett2_mixer,
								  SCARLETT2_MIXER_MIN_DB*100,
								  SCARLETT2_MIXER_MAX_DB*100);
	char cocci_id/* sound/usb/mixer_scarlett_gen2.c 1441 */[SNDRV_CTL_ELEM_ID_NAME_MAXLEN];
	const struct scarlett2_device_info *cocci_id/* sound/usb/mixer_scarlett_gen2.c 1439 */;
	struct scarlett2_mixer_data *cocci_id/* sound/usb/mixer_scarlett_gen2.c 1438 */;
	struct usb_mixer_interface *cocci_id/* sound/usb/mixer_scarlett_gen2.c 1436 */;
	int cocci_id/* sound/usb/mixer_scarlett_gen2.c 1436 */;
	const struct scarlett2_ports *cocci_id/* sound/usb/mixer_scarlett_gen2.c 1370 */;
	const struct snd_kcontrol_new cocci_id/* sound/usb/mixer_scarlett_gen2.c 1356 */;
	struct snd_ctl_elem_value *cocci_id/* sound/usb/mixer_scarlett_gen2.c 1311 */;
	const u16 cocci_id/* sound/usb/mixer_scarlett_gen2.c 124 */[173];
	const char *constcocci_id/* sound/usb/mixer_scarlett_gen2.c 1203 */[2];
	struct snd_ctl_elem_info *cocci_id/* sound/usb/mixer_scarlett_gen2.c 1201 */;
	const  cocci_id/* sound/usb/mixer_scarlett_gen2.c 1087 */(
								  db_scale_scarlett2_gain,
								  -SCARLETT2_VOLUME_BIAS*100,
								  0);
}
