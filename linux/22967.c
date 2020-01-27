cocci_test_suite() {
	void __user *cocci_id/* sound/core/hwdep_compat.c 52 */;
	unsigned long cocci_id/* sound/core/hwdep_compat.c 49 */;
	struct file *cocci_id/* sound/core/hwdep_compat.c 48 */;
	unsigned int cocci_id/* sound/core/hwdep_compat.c 48 */;
	long cocci_id/* sound/core/hwdep_compat.c 48 */;
	enum{SNDRV_HWDEP_IOCTL_DSP_LOAD32=_IOW('H', 0x03,
					       struct snd_hwdep_dsp_image32),} cocci_id/* sound/core/hwdep_compat.c 44 */;
	u32 cocci_id/* sound/core/hwdep_compat.c 24 */;
	compat_caddr_t cocci_id/* sound/core/hwdep_compat.c 23 */;
	struct snd_hwdep_dsp_image __user *cocci_id/* sound/core/hwdep_compat.c 22 */;
	struct snd_hwdep_dsp_image32 __user *cocci_id/* sound/core/hwdep_compat.c 20 */;
	struct snd_hwdep *cocci_id/* sound/core/hwdep_compat.c 19 */;
	int cocci_id/* sound/core/hwdep_compat.c 19 */;
	struct snd_hwdep_dsp_image32 {
		u32 index;
		unsigned char name[64];
		u32 image;
		u32 length;
		u32 driver_data;
	} cocci_id/* sound/core/hwdep_compat.c 11 */;
}
