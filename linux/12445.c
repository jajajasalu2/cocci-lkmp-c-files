cocci_test_suite() {
	struct panfrost_job_slot *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 87 */;
	struct panfrost_fence *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 86 */;
	struct panfrost_device *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 84 */;
	const struct dma_fence_ops cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 79 */;
	const char *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 58 */;
	struct panfrost_file_priv *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 557 */;
	struct drm_sched_rq *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 545 */;
	struct panfrost_fence {
		struct dma_fence base;
		struct drm_device *dev;
		u64 seqno;
		int queue;
	} cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 44 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 426 */;
	void *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 426 */;
	const struct drm_sched_backend_ops cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 419 */;
	struct drm_gpu_scheduler *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 387 */;
	unsigned long cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 365 */;
	u32 cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 350 */;
	struct panfrost_job_slot {
		struct panfrost_queue_state queue[NUM_JOB_SLOTS];
		spinlock_t job_lock;
	} cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 33 */;
	struct drm_sched_entity *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 295 */;
	struct drm_sched_job *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 294 */;
	struct panfrost_queue_state {
		struct drm_gpu_scheduler sched;
		u64 fence_context;
		u64 emit_seqno;
	} cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 26 */;
	unsigned int cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 256 */;
	struct panfrost_job cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 254 */;
	struct panfrost_job *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 254 */;
	struct kref *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 252 */;
	struct ww_acquire_ctx cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 214 */;
	struct dma_fence *cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 201 */;
	struct dma_fence **cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 191 */;
	int cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 190 */;
	struct drm_gem_object **cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 189 */;
	void cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 189 */;
	u64 cocci_id/* drivers/gpu/drm/panfrost/panfrost_job.c 145 */;
}
