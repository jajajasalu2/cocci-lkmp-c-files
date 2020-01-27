cocci_test_suite() {
	struct hdmi_ops {
		int (*pin_get_eld)(struct hda_codec *codec, hda_nid_t pin_nid,
				   int dev_id, unsigned char *buf,
				   int *eld_size);
		void (*pin_setup_infoframe)(struct hda_codec *codec,
					    hda_nid_t pin_nid, int dev_id,
					    int ca, int active_channels,
					    int conn_type);
		int (*pin_hbr_setup)(struct hda_codec *codec,
				     hda_nid_t pin_nid, int dev_id, bool hbr);
		int (*setup_stream)(struct hda_codec *codec,
				    hda_nid_t cvt_nid, hda_nid_t pin_nid,
				    int dev_id, u32 stream_tag, int format);
		void (*pin_cvt_fixup)(struct hda_codec *codec,
				      struct hdmi_spec_per_pin *per_pin,
				      hda_nid_t cvt_nid);
	} cocci_id/* sound/pci/hda/patch_hdmi.c 82 */;
	struct hda_jack_callback *cocci_id/* sound/pci/hda/patch_hdmi.c 772 */;
	bool cocci_id/* sound/pci/hda/patch_hdmi.c 755 */(struct hdmi_spec_per_pin *per_pin,
							  int repoll);
	struct dp_audio_infoframe *cocci_id/* sound/pci/hda/patch_hdmi.c 669 */;
	union audio_infoframe cocci_id/* sound/pci/hda/patch_hdmi.c 656 */;
	u8 cocci_id/* sound/pci/hda/patch_hdmi.c 597 */;
	u8 *cocci_id/* sound/pci/hda/patch_hdmi.c 596 */;
	struct hdmi_audio_infoframe *cocci_id/* sound/pci/hda/patch_hdmi.c 594 */;
	struct hdmi_spec_per_pin {
		hda_nid_t pin_nid;
		int dev_id;
		int pin_nid_idx;
		int num_mux_nids;
		hda_nid_t mux_nids[HDA_MAX_CONNECTIONS];
		int mux_idx;
		hda_nid_t cvt_nid;
		struct hda_codec *codec;
		struct hdmi_eld sink_eld;
		struct mutex lock;
		struct delayed_work work;
		struct hdmi_pcm *pcm;
		int pcm_idx;
		int repoll_count;
		bool setup;
		int channels;
		bool non_pcm;
		bool chmap_set;
		unsigned char chmap[8];
#ifdef CONFIG_SND_PROC_FS
		struct snd_info_entry *proc_entry;
#endif
	} cocci_id/* sound/pci/hda/patch_hdmi.c 54 */;
	struct snd_info_entry *cocci_id/* sound/pci/hda/patch_hdmi.c 488 */;
	char cocci_id/* sound/pci/hda/patch_hdmi.c 486 */[32];
	struct snd_info_buffer *cocci_id/* sound/pci/hda/patch_hdmi.c 465 */;
	unsigned char cocci_id/* sound/pci/hda/patch_hdmi.c 431 */;
	struct hda_codec_driver cocci_id/* sound/pci/hda/patch_hdmi.c 4269 */;
	const struct hda_device_id cocci_id/* sound/pci/hda/patch_hdmi.c 4151 */[];
	struct hdmi_spec_per_cvt {
		hda_nid_t cvt_nid;
		int assigned;
		unsigned int channels_min;
		unsigned int channels_max;
		u32 rates;
		u64 formats;
		unsigned int maxbps;
	} cocci_id/* sound/pci/hda/patch_hdmi.c 41 */;
	const struct drm_audio_component_audio_ops cocci_id/* sound/pci/hda/patch_hdmi.c 4079 */;
	void *cocci_id/* sound/pci/hda/patch_hdmi.c 4068 */;
	struct hdmi_spec_per_pin *cocci_id/* sound/pci/hda/patch_hdmi.c 4050 */;
	u32 cocci_id/* sound/pci/hda/patch_hdmi.c 4023 */;
	unsigned int *cocci_id/* sound/pci/hda/patch_hdmi.c 3967 */;
	struct hdac_cea_channel_speaker_allocation *cocci_id/* sound/pci/hda/patch_hdmi.c 3966 */;
	struct hdac_chmap *cocci_id/* sound/pci/hda/patch_hdmi.c 3965 */;
	void cocci_id/* sound/pci/hda/patch_hdmi.c 3965 */;
	struct hda_codec cocci_id/* sound/pci/hda/patch_hdmi.c 3908 */;
	struct hdac_device *cocci_id/* sound/pci/hda/patch_hdmi.c 3905 */;
	struct snd_kcontrol *cocci_id/* sound/pci/hda/patch_hdmi.c 385 */;
	bool cocci_id/* sound/pci/hda/patch_hdmi.c 3832 */;
	unsigned char *cocci_id/* sound/pci/hda/patch_hdmi.c 3822 */;
	int *cocci_id/* sound/pci/hda/patch_hdmi.c 3788 */;
	hda_nid_t cocci_id/* sound/pci/hda/patch_hdmi.c 3787 */;
	const struct snd_kcontrol_new cocci_id/* sound/pci/hda/patch_hdmi.c 374 */;
	struct snd_pcm_chmap *cocci_id/* sound/pci/hda/patch_hdmi.c 3425 */;
	struct hdmi_eld *cocci_id/* sound/pci/hda/patch_hdmi.c 341 */;
	const struct hda_pcm_stream cocci_id/* sound/pci/hda/patch_hdmi.c 3378 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/hda/patch_hdmi.c 336 */;
	const struct snd_pcm_hw_constraint_list *cocci_id/* sound/pci/hda/patch_hdmi.c 3118 */;
	const struct snd_pcm_hw_constraint_list cocci_id/* sound/pci/hda/patch_hdmi.c 3101 */;
	const unsigned int cocci_id/* sound/pci/hda/patch_hdmi.c 3093 */[];
	struct snd_ctl_elem_info *cocci_id/* sound/pci/hda/patch_hdmi.c 309 */;
	const struct hda_verb cocci_id/* sound/pci/hda/patch_hdmi.c 3045 */[];
	const hda_nid_t cocci_id/* sound/pci/hda/patch_hdmi.c 3040 */[4];
	const int cocci_id/* sound/pci/hda/patch_hdmi.c 2895 */[];
	const int *cocci_id/* sound/pci/hda/patch_hdmi.c 2848 */;
	int (*cocci_id/* sound/pci/hda/patch_hdmi.c 2602 */)(struct hda_codec *,
							     int);
	const struct drm_audio_component_audio_ops *cocci_id/* sound/pci/hda/patch_hdmi.c 2601 */;
	struct pci_dev *cocci_id/* sound/pci/hda/patch_hdmi.c 2549 */;
	struct hdac_bus *cocci_id/* sound/pci/hda/patch_hdmi.c 2548 */;
	struct drm_audio_component *cocci_id/* sound/pci/hda/patch_hdmi.c 2533 */;
	struct device *cocci_id/* sound/pci/hda/patch_hdmi.c 2532 */;
	struct hdmi_spec cocci_id/* sound/pci/hda/patch_hdmi.c 2516 */;
	const struct hdmi_ops cocci_id/* sound/pci/hda/patch_hdmi.c 2427 */;
	const struct hda_codec_ops cocci_id/* sound/pci/hda/patch_hdmi.c 2416 */;
	struct hdmi_spec_per_cvt cocci_id/* sound/pci/hda/patch_hdmi.c 2347 */;
	struct hdmi_spec_per_pin cocci_id/* sound/pci/hda/patch_hdmi.c 2346 */;
	struct hda_pcm *cocci_id/* sound/pci/hda/patch_hdmi.c 2288 */;
	struct hda_jack_tbl *cocci_id/* sound/pci/hda/patch_hdmi.c 2198 */;
	struct snd_jack *cocci_id/* sound/pci/hda/patch_hdmi.c 2179 */;
	const char *cocci_id/* sound/pci/hda/patch_hdmi.c 2177 */;
	struct hdmi_spec *cocci_id/* sound/pci/hda/patch_hdmi.c 2175 */;
	struct hda_codec *cocci_id/* sound/pci/hda/patch_hdmi.c 2174 */;
	int cocci_id/* sound/pci/hda/patch_hdmi.c 2174 */;
	struct hdmi_pcm *cocci_id/* sound/pci/hda/patch_hdmi.c 2169 */;
	struct hda_pcm_stream *cocci_id/* sound/pci/hda/patch_hdmi.c 2144 */;
	const struct hda_pcm_ops cocci_id/* sound/pci/hda/patch_hdmi.c 2063 */;
	union audio_infoframe {
		struct hdmi_audio_infoframe hdmi;
		struct dp_audio_infoframe dp;
		u8 bytes[0];
	} cocci_id/* sound/pci/hda/patch_hdmi.c 205 */;
	struct snd_pcm_substream *cocci_id/* sound/pci/hda/patch_hdmi.c 1994 */;
	struct dp_audio_infoframe {
		u8 type;
		u8 len;
		u8 ver;
		u8 CC02_CT47;
		u8 SS01_SF24;
		u8 CXT04;
		u8 CA;
		u8 LFEPBL01_LSV36_DM_INH7;
	} cocci_id/* sound/pci/hda/patch_hdmi.c 193 */;
	struct snd_pcm_runtime *cocci_id/* sound/pci/hda/patch_hdmi.c 1919 */;
	unsigned int cocci_id/* sound/pci/hda/patch_hdmi.c 1911 */;
	struct hda_spdif_out *cocci_id/* sound/pci/hda/patch_hdmi.c 1890 */;
	struct hdmi_spec_per_cvt *cocci_id/* sound/pci/hda/patch_hdmi.c 1819 */;
	struct hdmi_audio_infoframe {
		u8 type;
		u8 ver;
		u8 len;
		u8 checksum;
		u8 CC02_CT47;
		u8 SS01_SF24;
		u8 CXT04;
		u8 CA;
		u8 LFEPBL01_LSV36_DM_INH7;
	} cocci_id/* sound/pci/hda/patch_hdmi.c 179 */;
	struct work_struct *cocci_id/* sound/pci/hda/patch_hdmi.c 1710 */;
	bool cocci_id/* sound/pci/hda/patch_hdmi.c 1421 */(struct hda_codec *codec,
							   hda_nid_t cvt_nid);
	struct hdmi_spec {
		struct hda_codec *codec;
		int num_cvts;
		struct snd_array cvts;
		hda_nid_t cvt_nids[4];
		int num_pins;
		int num_nids;
		int dev_num;
		struct snd_array pins;
		struct hdmi_pcm pcm_rec[16];
		struct mutex pcm_lock;
		struct mutex bind_lock;
		unsigned long pcm_bitmap;
		int pcm_used;
		unsigned long pcm_in_use;
		struct hdmi_eld temp_eld;
		struct hdmi_ops ops;
		bool dyn_pin_out;
		bool dyn_pcm_assign;
		bool intel_hsw_fixup;
		struct hda_multi_out multiout;
		struct hda_pcm_stream pcm_playback;
		bool use_jack_detect;
		bool use_acomp_notifier;
		bool acomp_registered;
		struct drm_audio_component_audio_ops drm_audio_ops;
		int (*port2pin)(struct hda_codec *, int);
		struct hdac_chmap chmap;
		hda_nid_t vendor_nid;
		const int *port_map;
		int port_num;
	} cocci_id/* sound/pci/hda/patch_hdmi.c 109 */;
	struct hdmi_pcm {
		struct hda_pcm *pcm;
		struct snd_jack *jack;
		struct snd_kcontrol *eld_ctl;
	} cocci_id/* sound/pci/hda/patch_hdmi.c 103 */;
}
