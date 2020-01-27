cocci_test_suite() {
	uint32_t cocci_id/* drivers/gpu/drm/msm/msm_perf.c 81 */[5];
	uint32_t cocci_id/* drivers/gpu/drm/msm/msm_perf.c 80 */;
	const struct msm_gpu_perfcntr *cocci_id/* drivers/gpu/drm/msm/msm_perf.c 73 */;
	char *cocci_id/* drivers/gpu/drm/msm/msm_perf.c 62 */;
	unsigned long cocci_id/* drivers/gpu/drm/msm/msm_perf.c 43 */;
	struct msm_perf_state {
		struct drm_device *dev;
		bool open;
		int cnt;
		struct mutex read_lock;
		char buf[256];
		int buftot,bufpos;
		unsigned long next_jiffies;
	} cocci_id/* drivers/gpu/drm/msm/msm_perf.c 25 */;
	struct msm_perf_state *cocci_id/* drivers/gpu/drm/msm/msm_perf.c 221 */;
	struct msm_drm_private *cocci_id/* drivers/gpu/drm/msm/msm_perf.c 219 */;
	void cocci_id/* drivers/gpu/drm/msm/msm_perf.c 219 */;
	struct drm_minor *cocci_id/* drivers/gpu/drm/msm/msm_perf.c 196 */;
	int cocci_id/* drivers/gpu/drm/msm/msm_perf.c 196 */;
	const struct file_operations cocci_id/* drivers/gpu/drm/msm/msm_perf.c 188 */;
	struct msm_gpu *cocci_id/* drivers/gpu/drm/msm/msm_perf.c 155 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/msm/msm_perf.c 153 */;
	struct inode *cocci_id/* drivers/gpu/drm/msm/msm_perf.c 150 */;
	struct file *cocci_id/* drivers/gpu/drm/msm/msm_perf.c 150 */;
	loff_t *cocci_id/* drivers/gpu/drm/msm/msm_perf.c 121 */;
	size_t cocci_id/* drivers/gpu/drm/msm/msm_perf.c 121 */;
	char __user *cocci_id/* drivers/gpu/drm/msm/msm_perf.c 120 */;
	ssize_t cocci_id/* drivers/gpu/drm/msm/msm_perf.c 120 */;
}
