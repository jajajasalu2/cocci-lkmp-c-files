cocci_test_suite() {
	long cocci_id/* sound/soc/codecs/hdac_hdmi.c 992 */;
	char *cocci_id/* sound/soc/codecs/hdac_hdmi.c 974 */[HDA_MAX_CONNECTIONS];
	struct hdac_hdmi_pcm {
		struct list_head head;
		int pcm_id;
		struct list_head port_list;
		struct hdac_hdmi_cvt *cvt;
		struct snd_soc_jack *jack;
		int stream_tag;
		int channels;
		int format;
		bool chmap_set;
		unsigned char chmap[8];
		struct mutex lock;
		int jack_event;
	} cocci_id/* sound/soc/codecs/hdac_hdmi.c 97 */;
	const char *cocci_id/* sound/soc/codecs/hdac_hdmi.c 964 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/hdac_hdmi.c 899 */;
	struct hdac_hdmi_port {
		struct list_head head;
		int id;
		struct hdac_hdmi_pin *pin;
		int num_mux_nids;
		hda_nid_t mux_nids[HDA_MAX_CONNECTIONS];
		struct hdac_hdmi_eld eld;
		const char *jack_pin;
		bool is_connect;
		struct snd_soc_dapm_context *dapm;
		const char *output_pin;
		struct work_struct dapm_work;
	} cocci_id/* sound/soc/codecs/hdac_hdmi.c 83 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/hdac_hdmi.c 814 */;
	struct hdac_hdmi_pin {
		struct list_head head;
		hda_nid_t nid;
		bool mst_capable;
		struct hdac_hdmi_port *ports;
		int num_ports;
		struct hdac_device *hdev;
	} cocci_id/* sound/soc/codecs/hdac_hdmi.c 74 */;
	int (*cocci_id/* sound/soc/codecs/hdac_hdmi.c 709 */)(struct snd_soc_dapm_widget *src,
							      struct snd_soc_dapm_widget *sink);
	unsigned short cocci_id/* sound/soc/codecs/hdac_hdmi.c 688 */;
	int (*cocci_id/* sound/soc/codecs/hdac_hdmi.c 687 */)(struct snd_soc_dapm_widget *,
							      struct snd_kcontrol *,
							      int);
	enum snd_soc_dapm_type cocci_id/* sound/soc/codecs/hdac_hdmi.c 684 */;
	struct device *cocci_id/* sound/soc/codecs/hdac_hdmi.c 683 */;
	struct hdac_hdmi_eld {
		bool monitor_present;
		bool eld_valid;
		int eld_size;
		char eld_buffer[ELD_MAX_SIZE];
		struct hdac_hdmi_parsed_eld info;
	} cocci_id/* sound/soc/codecs/hdac_hdmi.c 66 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/hdac_hdmi.c 632 */;
	struct hdac_hdmi_parsed_eld {
		u8 spk_alloc;
	} cocci_id/* sound/soc/codecs/hdac_hdmi.c 62 */;
	struct hdac_hdmi_cvt {
		struct list_head head;
		hda_nid_t nid;
		const char *name;
		struct hdac_hdmi_cvt_params params;
	} cocci_id/* sound/soc/codecs/hdac_hdmi.c 54 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/hdac_hdmi.c 467 */;
	struct hdac_hdmi_cvt_params {
		unsigned int channels_min;
		unsigned int channels_max;
		u32 rates;
		u64 formats;
		unsigned int maxbps;
	} cocci_id/* sound/soc/codecs/hdac_hdmi.c 46 */;
	u8 cocci_id/* sound/soc/codecs/hdac_hdmi.c 375 */;
	u8 *cocci_id/* sound/soc/codecs/hdac_hdmi.c 371 */;
	struct dp_audio_infoframe cocci_id/* sound/soc/codecs/hdac_hdmi.c 368 */;
	struct hdmi_audio_infoframe cocci_id/* sound/soc/codecs/hdac_hdmi.c 366 */;
	uint8_t cocci_id/* sound/soc/codecs/hdac_hdmi.c 365 */[HDMI_INFOFRAME_HEADER_SIZE + HDMI_AUDIO_INFOFRAME_SIZE];
	struct dp_audio_infoframe {
		u8 type;
		u8 len;
		u8 ver;
		u8 CC02_CT47;
		u8 SS01_SF24;
		u8 CXT04;
		u8 CA;
		u8 LFEPBL01_LSV36_DM_INH7;
	} cocci_id/* sound/soc/codecs/hdac_hdmi.c 350 */;
	const u8 *cocci_id/* sound/soc/codecs/hdac_hdmi.c 316 */;
	void *cocci_id/* sound/soc/codecs/hdac_hdmi.c 312 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/codecs/hdac_hdmi.c 311 */;
	struct hdac_hdmi_pcm *cocci_id/* sound/soc/codecs/hdac_hdmi.c 288 */;
	void __exit cocci_id/* sound/soc/codecs/hdac_hdmi.c 2241 */;
	int __init cocci_id/* sound/soc/codecs/hdac_hdmi.c 2236 */;
	struct hdac_driver cocci_id/* sound/soc/codecs/hdac_hdmi.c 2226 */;
	const struct hda_device_id cocci_id/* sound/soc/codecs/hdac_hdmi.c 2211 */[];
	struct hdac_bus *cocci_id/* sound/soc/codecs/hdac_hdmi.c 2172 */;
	int cocci_id/* sound/soc/codecs/hdac_hdmi.c 2115 */;
	struct hdac_hdmi_pin *cocci_id/* sound/soc/codecs/hdac_hdmi.c 2114 */;
	struct hdac_hdmi_priv *cocci_id/* sound/soc/codecs/hdac_hdmi.c 2113 */;
	struct hdac_device *cocci_id/* sound/soc/codecs/hdac_hdmi.c 2111 */;
	void cocci_id/* sound/soc/codecs/hdac_hdmi.c 2111 */;
	struct hdac_hdmi_drv_data *cocci_id/* sound/soc/codecs/hdac_hdmi.c 2077 */;
	const struct hda_device_id *cocci_id/* sound/soc/codecs/hdac_hdmi.c 2050 */;
	struct work_struct *cocci_id/* sound/soc/codecs/hdac_hdmi.c 205 */;
	struct hdac_driver *cocci_id/* sound/soc/codecs/hdac_hdmi.c 2049 */;
	struct hdac_ext_link *cocci_id/* sound/soc/codecs/hdac_hdmi.c 2046 */;
	struct hdac_hdmi_drv_data cocci_id/* sound/soc/codecs/hdac_hdmi.c 2038 */;
	struct hdac_hdmi_port cocci_id/* sound/soc/codecs/hdac_hdmi.c 2020 */;
	unsigned char *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1964 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/hdac_hdmi.c 1955 */;
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1791 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1790 */;
	unsigned long cocci_id/* sound/soc/codecs/hdac_hdmi.c 1702 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1681 */;
	char *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1678 */;
	char cocci_id/* sound/soc/codecs/hdac_hdmi.c 1677 */[NAME_SIZE];
	struct snd_kcontrol_new *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1676 */;
	struct snd_soc_card *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1672 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1661 */;
	struct snd_pcm *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1658 */;
	struct drm_audio_component_audio_ops cocci_id/* sound/soc/codecs/hdac_hdmi.c 1653 */;
	bool cocci_id/* sound/soc/codecs/hdac_hdmi.c 164 */;
	const int *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1571 */;
	int *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1504 */;
	u64 cocci_id/* sound/soc/codecs/hdac_hdmi.c 1444 */;
	unsigned int cocci_id/* sound/soc/codecs/hdac_hdmi.c 1443 */;
	u32 cocci_id/* sound/soc/codecs/hdac_hdmi.c 1442 */;
	struct snd_soc_dai_driver **cocci_id/* sound/soc/codecs/hdac_hdmi.c 1435 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/hdac_hdmi.c 1423 */;
	struct hdac_hdmi_port *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1329 */;
	struct hdac_hdmi_priv {
		struct hdac_device *hdev;
		struct snd_soc_component *component;
		struct snd_card *card;
		struct hdac_hdmi_dai_port_map dai_map[HDA_MAX_CVTS];
		struct list_head pin_list;
		struct list_head cvt_list;
		struct list_head pcm_list;
		int num_pin;
		int num_cvt;
		int num_ports;
		struct mutex pin_mutex;
		struct hdac_chmap chmap;
		struct hdac_hdmi_drv_data *drv_data;
		struct snd_soc_dai_driver *dai_drv;
	} cocci_id/* sound/soc/codecs/hdac_hdmi.c 130 */;
	struct hdac_hdmi_drv_data {
		unsigned int vendor_nid;
		const int *port_map;
		int port_num;
	} cocci_id/* sound/soc/codecs/hdac_hdmi.c 124 */;
	const int cocci_id/* sound/soc/codecs/hdac_hdmi.c 122 */[];
	hda_nid_t cocci_id/* sound/soc/codecs/hdac_hdmi.c 1203 */;
	struct hdac_hdmi_dai_port_map *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1179 */;
	struct hdac_hdmi_dai_port_map {
		int dai_id;
		struct hdac_hdmi_port *port;
		struct hdac_hdmi_cvt *cvt;
	} cocci_id/* sound/soc/codecs/hdac_hdmi.c 112 */;
	struct hdac_hdmi_cvt *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1080 */;
	struct snd_soc_dai_driver *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1078 */;
	struct snd_soc_dapm_route *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1075 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1074 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1072 */;
	struct soc_enum *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1036 */;
	const struct snd_kcontrol_new *cocci_id/* sound/soc/codecs/hdac_hdmi.c 1035 */;
}
