cocci_test_suite() {
	struct msm_rd_state {
		struct drm_device *dev;
		bool open;
		struct msm_gem_submit *submit;
		struct mutex read_lock;
		wait_queue_head_t fifo_event;
		struct circ_buf fifo;
		char buf[BUF_SZ];
	} cocci_id/* drivers/gpu/drm/msm/msm_rd.c 80 */;
	enum rd_sect_type{RD_NONE, RD_TEST, RD_CMD, RD_GPUADDR, RD_CONTEXT, RD_CMDSTREAM, RD_CMDSTREAM_ADDR, RD_PARAM, RD_FLUSH, RD_PROGRAM, RD_VERT_SHADER, RD_FRAG_SHADER, RD_BUFFER_CONTENTS, RD_GPU_ID,} cocci_id/* drivers/gpu/drm/msm/msm_rd.c 50 */;
	bool cocci_id/* drivers/gpu/drm/msm/msm_rd.c 46 */;
	uint32_t cocci_id/* drivers/gpu/drm/msm/msm_rd.c 413 */[3];
	uint64_t cocci_id/* drivers/gpu/drm/msm/msm_rd.c 400 */;
	uint32_t cocci_id/* drivers/gpu/drm/msm/msm_rd.c 390 */;
	va_list cocci_id/* drivers/gpu/drm/msm/msm_rd.c 363 */;
	char cocci_id/* drivers/gpu/drm/msm/msm_rd.c 351 */[256];
	struct task_struct *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 350 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 349 */;
	const char *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 347 */;
	struct msm_gem_submit *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 346 */;
	unsigned cocci_id/* drivers/gpu/drm/msm/msm_rd.c 304 */;
	struct msm_gem_object *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 303 */;
	struct msm_drm_private *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 290 */;
	void cocci_id/* drivers/gpu/drm/msm/msm_rd.c 290 */;
	struct msm_rd_state *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 260 */;
	struct drm_minor *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 257 */;
	int cocci_id/* drivers/gpu/drm/msm/msm_rd.c 257 */;
	const struct file_operations cocci_id/* drivers/gpu/drm/msm/msm_rd.c 218 */;
	struct msm_gpu *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 179 */;
	struct inode *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 174 */;
	struct file *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 174 */;
	struct circ_buf *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 141 */;
	loff_t *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 138 */;
	size_t cocci_id/* drivers/gpu/drm/msm/msm_rd.c 138 */;
	char __user *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 137 */;
	ssize_t cocci_id/* drivers/gpu/drm/msm/msm_rd.c 137 */;
	enum rd_sect_type cocci_id/* drivers/gpu/drm/msm/msm_rd.c 130 */;
	char *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 107 */;
	const void *cocci_id/* drivers/gpu/drm/msm/msm_rd.c 101 */;
}
