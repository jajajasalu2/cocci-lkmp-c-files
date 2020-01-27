cocci_test_suite() {
	const unsigned int *cocci_id/* sound/aoa/fabrics/layout.c 999 */;
	struct device_node *cocci_id/* sound/aoa/fabrics/layout.c 998 */;
	struct soundbus_dev *cocci_id/* sound/aoa/fabrics/layout.c 996 */;
	int cocci_id/* sound/aoa/fabrics/layout.c 996 */;
	struct aoa_fabric cocci_id/* sound/aoa/fabrics/layout.c 988 */;
	struct snd_card *cocci_id/* sound/aoa/fabrics/layout.c 856 */;
	struct layout_dev_ptr *cocci_id/* sound/aoa/fabrics/layout.c 852 */;
	void *cocci_id/* sound/aoa/fabrics/layout.c 850 */;
	struct codec_connection *cocci_id/* sound/aoa/fabrics/layout.c 774 */;
	char cocci_id/* sound/aoa/fabrics/layout.c 773 */[32];
	const u32 *cocci_id/* sound/aoa/fabrics/layout.c 772 */;
	struct codec_connect_info *cocci_id/* sound/aoa/fabrics/layout.c 770 */;
	struct aoa_codec *cocci_id/* sound/aoa/fabrics/layout.c 768 */;
	const struct snd_kcontrol_new cocci_id/* sound/aoa/fabrics/layout.c 708 */;
	struct snd_ctl_elem_value *cocci_id/* sound/aoa/fabrics/layout.c 673 */;
	struct snd_kcontrol *cocci_id/* sound/aoa/fabrics/layout.c 672 */;
	struct layout {
		unsigned int layout_id,device_id;
		struct codec_connect_info codecs[MAX_CODECS_PER_BUS];
		int flags;
		char *busname;
		int pcmid;
	} cocci_id/* sound/aoa/fabrics/layout.c 62 */;
	struct layout_dev {
		struct list_head list;
		struct soundbus_dev *sdev;
		struct device_node *sound;
		struct aoa_codec *codecs[MAX_CODECS_PER_BUS];
		struct layout *layout;
		struct gpio_runtime gpio;
		struct snd_kcontrol *headphone_ctrl;
		struct snd_kcontrol *lineout_ctrl;
		struct snd_kcontrol *speaker_ctrl;
		struct snd_kcontrol *master_ctrl;
		struct snd_kcontrol *headphone_detected_ctrl;
		struct snd_kcontrol *lineout_detected_ctrl;
		struct layout_dev_ptr selfptr_headphone;
		struct layout_dev_ptr selfptr_lineout;
		u32 have_lineout_detect:1,have_headphone_detect:1,switch_on_headphone:1,switch_on_lineout:1;
	} cocci_id/* sound/aoa/fabrics/layout.c 606 */;
	struct layout_dev_ptr {
		struct layout_dev *ptr;
	} cocci_id/* sound/aoa/fabrics/layout.c 602 */;
	unsigned int cocci_id/* sound/aoa/fabrics/layout.c 575 */;
	struct codec_connect_info {
		char *name;
		struct codec_connection *connections;
	} cocci_id/* sound/aoa/fabrics/layout.c 55 */;
	struct codec_connection {
		int connected;
		int codec_bit;
	} cocci_id/* sound/aoa/fabrics/layout.c 45 */;
	struct layout cocci_id/* sound/aoa/fabrics/layout.c 271 */[];
	struct codec_connection cocci_id/* sound/aoa/fabrics/layout.c 135 */[];
	void __exit cocci_id/* sound/aoa/fabrics/layout.c 1173 */;
	void cocci_id/* sound/aoa/fabrics/layout.c 1173 */;
	int __init cocci_id/* sound/aoa/fabrics/layout.c 1168 */;
	struct soundbus_driver cocci_id/* sound/aoa/fabrics/layout.c 1155 */;
	struct device *cocci_id/* sound/aoa/fabrics/layout.c 1140 */;
	struct layout_dev cocci_id/* sound/aoa/fabrics/layout.c 1030 */;
	struct layout_dev *cocci_id/* sound/aoa/fabrics/layout.c 1001 */;
	struct layout *cocci_id/* sound/aoa/fabrics/layout.c 1000 */;
}
