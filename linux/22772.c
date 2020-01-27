cocci_test_suite() {
	struct snd_kcontrol *cocci_id/* sound/isa/sb/sb16_csp.c 984 */;
	struct snd_ctl_elem_value *cocci_id/* sound/isa/sb/sb16_csp.c 984 */;
	struct snd_ctl_elem_info *cocci_id/* sound/isa/sb/sb16_csp.c 975 */;
	void cocci_id/* sound/isa/sb/sb16_csp.c 97 */(struct snd_info_entry *entry,
						      struct snd_info_buffer *buffer);
	int cocci_id/* sound/isa/sb/sb16_csp.c 96 */(struct snd_sb_csp *p,
						     int device);
	void cocci_id/* sound/isa/sb/sb16_csp.c 93 */(struct snd_sb_csp *p);
	int cocci_id/* sound/isa/sb/sb16_csp.c 87 */(struct snd_sb_csp *p,
						     int sample_width,
						     int channels);
	int cocci_id/* sound/isa/sb/sb16_csp.c 83 */(struct snd_sb_csp *p);
	int cocci_id/* sound/isa/sb/sb16_csp.c 82 */(struct snd_sb_csp *p,
						     snd_pcm_format_t pcm_sfmt,
						     int play_rec_mode);
	int cocci_id/* sound/isa/sb/sb16_csp.c 81 */(struct snd_sb_csp *p,
						     const unsigned char __user *buf,
						     int size, int load_flags);
	int cocci_id/* sound/isa/sb/sb16_csp.c 78 */(struct snd_sb_csp *p,
						     struct snd_sb_csp_microcode __user *code);
	int cocci_id/* sound/isa/sb/sb16_csp.c 76 */(struct snd_sb *chip);
	int cocci_id/* sound/isa/sb/sb16_csp.c 75 */(struct snd_sb *chip,
						     unsigned char mode);
	int cocci_id/* sound/isa/sb/sb16_csp.c 74 */(struct snd_sb *chip,
						     unsigned char reg);
	int cocci_id/* sound/isa/sb/sb16_csp.c 73 */(struct snd_sb *chip,
						     unsigned char reg,
						     unsigned char val);
	int cocci_id/* sound/isa/sb/sb16_csp.c 72 */(struct snd_sb *chip,
						     unsigned char par,
						     unsigned char val);
	snd_pcm_format_t cocci_id/* sound/isa/sb/sb16_csp.c 715 */;
	int cocci_id/* sound/isa/sb/sb16_csp.c 71 */(struct snd_sb *chip,
						     int *version);
	const struct firmware *cocci_id/* sound/isa/sb/sb16_csp.c 697 */;
	const char *const cocci_id/* sound/isa/sb/sb16_csp.c 690 */[];
	int cocci_id/* sound/isa/sb/sb16_csp.c 68 */(struct snd_hwdep *hw,
						     struct file *file,
						     unsigned int cmd,
						     unsigned long arg);
	unsigned char *cocci_id/* sound/isa/sb/sb16_csp.c 676 */;
	const unsigned char __user *cocci_id/* sound/isa/sb/sb16_csp.c 673 */;
	int cocci_id/* sound/isa/sb/sb16_csp.c 67 */(struct snd_hwdep *hw,
						     struct file *file);
	void cocci_id/* sound/isa/sb/sb16_csp.c 66 */(struct snd_hwdep *hw);
	unsigned char cocci_id/* sound/isa/sb/sb16_csp.c 583 */[2];
	unsigned long cocci_id/* sound/isa/sb/sb16_csp.c 547 */;
	unsigned char cocci_id/* sound/isa/sb/sb16_csp.c 546 */;
	int *cocci_id/* sound/isa/sb/sb16_csp.c 544 */;
	struct desc_header {
		struct riff_header info;
		__le16 func_nr;
		__le16 VOC_type;
		__le16 flags_play_rec;
		__le16 flags_16bit_8bit;
		__le16 flags_stereo_mono;
		__le16 flags_rates;
	} cocci_id/* sound/isa/sb/sb16_csp.c 53 */;
	unsigned char cocci_id/* sound/isa/sb/sb16_csp.c 489 */[3];
	struct riff_header {
		__le32 name;
		__le32 len;
	} cocci_id/* sound/isa/sb/sb16_csp.c 48 */;
	const unsigned char *cocci_id/* sound/isa/sb/sb16_csp.c 474 */;
	struct snd_sb *cocci_id/* sound/isa/sb/sb16_csp.c 474 */;
	int cocci_id/* sound/isa/sb/sb16_csp.c 474 */;
	struct desc_header cocci_id/* sound/isa/sb/sb16_csp.c 304 */;
	__le32 cocci_id/* sound/isa/sb/sb16_csp.c 303 */;
	struct riff_header cocci_id/* sound/isa/sb/sb16_csp.c 302 */;
	unsigned short cocci_id/* sound/isa/sb/sb16_csp.c 300 */;
	unsigned char __user *cocci_id/* sound/isa/sb/sb16_csp.c 298 */;
	struct snd_sb_csp_mc_header cocci_id/* sound/isa/sb/sb16_csp.c 296 */;
	struct snd_sb_csp_microcode __user *cocci_id/* sound/isa/sb/sb16_csp.c 218 */;
	void __user *cocci_id/* sound/isa/sb/sb16_csp.c 209 */;
	struct snd_sb_csp_start cocci_id/* sound/isa/sb/sb16_csp.c 185 */;
	struct snd_sb_csp_info cocci_id/* sound/isa/sb/sb16_csp.c 184 */;
	struct file *cocci_id/* sound/isa/sb/sb16_csp.c 181 */;
	unsigned int cocci_id/* sound/isa/sb/sb16_csp.c 181 */;
	struct snd_hwdep *cocci_id/* sound/isa/sb/sb16_csp.c 154 */;
	struct snd_sb_csp *cocci_id/* sound/isa/sb/sb16_csp.c 1123 */;
	struct snd_info_entry *cocci_id/* sound/isa/sb/sb16_csp.c 1121 */;
	struct snd_info_buffer *cocci_id/* sound/isa/sb/sb16_csp.c 1121 */;
	void cocci_id/* sound/isa/sb/sb16_csp.c 1121 */;
	char cocci_id/* sound/isa/sb/sb16_csp.c 1114 */[16];
	struct snd_card *cocci_id/* sound/isa/sb/sb16_csp.c 1036 */;
	const struct snd_kcontrol_new cocci_id/* sound/isa/sb/sb16_csp.c 1026 */;
	struct snd_hwdep **cocci_id/* sound/isa/sb/sb16_csp.c 102 */;
}
