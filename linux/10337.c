cocci_test_suite() {
	drm_mga_getparam_t cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 93 */;
	drm_mga_getparam32_t cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 92 */;
	struct drm_mga_getparam32 {
		int param;
		u32 value;
	} cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 84 */;
	drm_mga_init_t cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 63 */;
	drm_mga_init32_t cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 62 */;
	struct drm32_mga_init {
		int func;
		u32 sarea_priv_offset;
		int chipset;
		int sgram;
		unsigned int maccess;
		unsigned int fb_cpp;
		unsigned int front_offset,front_pitch;
		unsigned int back_offset,back_pitch;
		unsigned int depth_cpp;
		unsigned int depth_offset,depth_pitch;
		unsigned int texture_offset[MGA_NR_TEX_HEAPS];
		unsigned int texture_size[MGA_NR_TEX_HEAPS];
		u32 fb_offset;
		u32 mmio_offset;
		u32 status_offset;
		u32 warp_offset;
		u32 primary_offset;
		u32 buffers_offset;
	} cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 38 */;
	drm_ioctl_compat_t *cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 174 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 173 */;
	long cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 170 */;
	struct {
		drm_ioctl_compat_t *fn;
		char *name;
	} cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 151 */[];
	void __user *cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 120 */;
	drm_mga_dma_bootstrap_t cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 117 */;
	drm_mga_dma_bootstrap32_t cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 116 */;
	unsigned long cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 114 */;
	struct file *cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 113 */;
	unsigned int cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 113 */;
	int cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 113 */;
	struct drm_mga_drm_bootstrap32 {
		u32 texture_handle;
		u32 texture_size;
		u32 primary_size;
		u32 secondary_bin_count;
		u32 secondary_bin_size;
		u32 agp_mode;
		u8 agp_size;
	} cocci_id/* drivers/gpu/drm/mga/mga_ioc32.c 103 */;
}
