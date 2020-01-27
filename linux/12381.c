cocci_test_suite() {
	struct drm_r128_depth32 {
		int func;
		int n;
		u32 x;
		u32 y;
		u32 buffer;
		u32 mask;
	} cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 99 */;
	drm_r128_init_t cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 67 */;
	drm_r128_init32_t cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 66 */;
	struct drm_r128_init32 {
		int func;
		unsigned int sarea_priv_offset;
		int is_pci;
		int cce_mode;
		int cce_secure;
		int ring_size;
		int usec_timeout;
		unsigned int fb_bpp;
		unsigned int front_offset,front_pitch;
		unsigned int back_offset,back_pitch;
		unsigned int depth_bpp;
		unsigned int depth_offset,depth_pitch;
		unsigned int span_offset;
		unsigned int fb_offset;
		unsigned int mmio_offset;
		unsigned int ring_offset;
		unsigned int ring_rptr_offset;
		unsigned int buffers_offset;
		unsigned int agp_textures_offset;
	} cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 39 */;
	drm_ioctl_compat_t *cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 184 */;
	long cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 181 */;
	drm_ioctl_compat_t *cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 165 */[];
	drm_r128_getparam_t cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 154 */;
	drm_r128_getparam32_t cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 153 */;
	struct drm_r128_getparam32 {
		int param;
		u32 value;
	} cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 145 */;
	drm_r128_stipple_t cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 135 */;
	drm_r128_stipple32_t cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 134 */;
	struct drm_r128_stipple32 {
		u32 mask;
	} cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 127 */;
	void __user *cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 114 */;
	drm_r128_depth_t cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 112 */;
	drm_r128_depth32_t cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 111 */;
	unsigned long cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 109 */;
	struct file *cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 108 */;
	unsigned int cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 108 */;
	int cocci_id/* drivers/gpu/drm/r128/r128_ioc32.c 108 */;
}
