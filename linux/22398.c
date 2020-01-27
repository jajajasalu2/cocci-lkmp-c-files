cocci_test_suite() {
	enum CT_SUM_CTL cocci_id/* sound/pci/ctxfi/ctmixer.c 937 */;
	void *cocci_id/* sound/pci/ctxfi/ctmixer.c 909 */;
	struct amixer_desc cocci_id/* sound/pci/ctxfi/ctmixer.c 843 */;
	struct sum_desc cocci_id/* sound/pci/ctxfi/ctmixer.c 840 */;
	void cocci_id/* sound/pci/ctxfi/ctmixer.c 808 */;
	unsigned long cocci_id/* sound/pci/ctxfi/ctmixer.c 745 */;
	struct capabilities cocci_id/* sound/pci/ctxfi/ctmixer.c 738 */;
	struct snd_kcontrol_new *cocci_id/* sound/pci/ctxfi/ctmixer.c 706 */;
	struct snd_kcontrol_new cocci_id/* sound/pci/ctxfi/ctmixer.c 692 */;
	unsigned int cocci_id/* sound/pci/ctxfi/ctmixer.c 637 */;
	enum CTALSA_MIXER_CTL{MIXER_MASTER_P, MIXER_PCM_P, MIXER_LINEIN_P, MIXER_MIC_P, MIXER_SPDIFI_P, MIXER_SPDIFO_P, MIXER_WAVEF_P, MIXER_WAVER_P, MIXER_WAVEC_P, MIXER_WAVES_P, MIXER_MASTER_C, MIXER_PCM_C, MIXER_LINEIN_C, MIXER_MIC_C, MIXER_SPDIFI_C, MIXER_PCM_C_S, MIXER_LINEIN_C_S, MIXER_MIC_C_S, MIXER_SPDIFI_C_S, MIXER_SPDIFO_P_S, MIXER_WAVEF_P_S, MIXER_WAVER_P_S, MIXER_WAVEC_P_S, MIXER_WAVES_P_S, MIXER_DIGITAL_IO_S, MIXER_IEC958_MASK, MIXER_IEC958_DEFAULT, MIXER_IEC958_STREAM, NUM_CTALSA_MIXERS,} cocci_id/* sound/pci/ctxfi/ctmixer.c 62 */;
	enum CTALSA_MIXER_CTL cocci_id/* sound/pci/ctxfi/ctmixer.c 583 */;
	struct snd_ctl_elem_value *cocci_id/* sound/pci/ctxfi/ctmixer.c 579 */;
	struct snd_kcontrol *cocci_id/* sound/pci/ctxfi/ctmixer.c 578 */;
	struct snd_ctl_elem_info *cocci_id/* sound/pci/ctxfi/ctmixer.c 567 */;
	const char *const cocci_id/* sound/pci/ctxfi/ctmixer.c 448 */[3];
	struct amixer *cocci_id/* sound/pci/ctxfi/ctmixer.c 346 */;
	enum CT_AMIXER_CTL cocci_id/* sound/pci/ctxfi/ctmixer.c 345 */;
	enum CT_AMIXER_CTL{AMIXER_MASTER_F, AMIXER_MASTER_R, AMIXER_MASTER_C, AMIXER_MASTER_S, AMIXER_PCM_F, AMIXER_PCM_R, AMIXER_PCM_C, AMIXER_PCM_S, AMIXER_SPDIFI, AMIXER_LINEIN, AMIXER_MIC, AMIXER_SPDIFO, AMIXER_WAVE_F, AMIXER_WAVE_R, AMIXER_WAVE_C, AMIXER_WAVE_S, AMIXER_MASTER_F_C, AMIXER_PCM_F_C, AMIXER_SPDIFI_C, AMIXER_LINEIN_C, AMIXER_MIC_C, NUM_CT_AMIXERS,} cocci_id/* sound/pci/ctxfi/ctmixer.c 34 */;
	unsigned char cocci_id/* sound/pci/ctxfi/ctmixer.c 266 */;
	enum CT_SUM_CTL{SUM_IN_F, SUM_IN_R, SUM_IN_C, SUM_IN_S, SUM_IN_F_C, NUM_CT_SUMS,} cocci_id/* sound/pci/ctxfi/ctmixer.c 24 */;
	struct snd_kcontrol *cocci_id/* sound/pci/ctxfi/ctmixer.c 226 */[2];
	void cocci_id/* sound/pci/ctxfi/ctmixer.c 218 */(struct ct_mixer *mixer,
							 enum CT_AMIXER_CTL type);
	struct ct_mixer *cocci_id/* sound/pci/ctxfi/ctmixer.c 1218 */;
	const char *cocci_id/* sound/pci/ctxfi/ctmixer.c 1212 */;
	enum CTALSADEVS cocci_id/* sound/pci/ctxfi/ctmixer.c 1211 */;
	struct ct_atc *cocci_id/* sound/pci/ctxfi/ctmixer.c 1210 */;
	int cocci_id/* sound/pci/ctxfi/ctmixer.c 1210 */;
	struct ct_mixer **cocci_id/* sound/pci/ctxfi/ctmixer.c 1171 */;
	struct sum *cocci_id/* sound/pci/ctxfi/ctmixer.c 1160 */;
	struct amixer_mgr *cocci_id/* sound/pci/ctxfi/ctmixer.c 1144 */;
	struct sum_mgr *cocci_id/* sound/pci/ctxfi/ctmixer.c 1143 */;
	struct ct_kcontrol_init cocci_id/* sound/pci/ctxfi/ctmixer.c 114 */[NUM_CTALSA_MIXERS];
	struct rsc *cocci_id/* sound/pci/ctxfi/ctmixer.c 1093 */;
	struct ct_kcontrol_init {
		unsigned char ctl;
		char *name;
	} cocci_id/* sound/pci/ctxfi/ctmixer.c 109 */;
	struct rsc **cocci_id/* sound/pci/ctxfi/ctmixer.c 1078 */;
	enum MIXER_PORT_T cocci_id/* sound/pci/ctxfi/ctmixer.c 1077 */;
}
