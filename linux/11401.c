cocci_test_suite() {
	struct ttm_object_device {
		spinlock_t object_lock;
		struct drm_open_hash object_hash;
		atomic_t object_count;
		struct ttm_mem_global *mem_glob;
		struct dma_buf_ops ops;
		void (*dmabuf_release)(struct dma_buf *dma_buf);
		size_t dma_buf_size;
		struct idr idr;
	} cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 89 */;
	size_t cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 778 */;
	struct ttm_operation_ctx cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 715 */;
	struct ttm_prime_object cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 700 */;
	struct ttm_object_file {
		struct ttm_object_device *tdev;
		spinlock_t lock;
		struct list_head ref_list;
		struct drm_open_hash ref_hash[TTM_REF_NUM];
		struct kref refcount;
	} cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 69 */;
	int *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 685 */;
	u32 *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 649 */;
	struct ttm_prime_object *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 622 */;
	bool __must_check cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 582 */;
	struct dma_buf *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 582 */;
	struct ttm_object_device **cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 556 */;
	struct file cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 548 */;
	struct dma_buf cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 547 */;
	const struct dma_buf_ops *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 528 */;
	unsigned int cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 527 */;
	struct ttm_mem_global *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 526 */;
	struct list_head *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 466 */;
	struct ttm_ref_object *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 465 */;
	struct ttm_object_file **cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 463 */;
	unsigned long cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 444 */;
	void __releases(tfile->lock)__acquires(tfile->lock) cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 419 */;
	enum ttm_ref_type cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 346 */;
	bool *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 346 */;
	struct ttm_ref_object cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 275 */;
	struct drm_open_hash *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 268 */;
	struct drm_hash_item *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 267 */;
	uint32_t cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 264 */;
	struct ttm_base_object **cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 219 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 219 */;
	struct ttm_base_object cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 201 */;
	struct ttm_object_device *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 166 */;
	void (*cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 163 */)(struct ttm_base_object *,
								      enum ttm_ref_type ref_type);
	void (*cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 162 */)(struct ttm_base_object **);
	enum ttm_object_type cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 161 */;
	bool cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 160 */;
	struct ttm_base_object *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 159 */;
	struct ttm_object_file *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 158 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 158 */;
	struct ttm_object_file cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 143 */;
	struct kref *cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 140 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 131 */(struct dma_buf *dma_buf);
	struct ttm_ref_object {
		struct rcu_head rcu_head;
		struct drm_hash_item hash;
		struct list_head head;
		struct kref kref;
		enum ttm_ref_type ref_type;
		struct ttm_base_object *obj;
		struct ttm_object_file *tfile;
	} cocci_id/* drivers/gpu/drm/vmwgfx/ttm_object.c 121 */;
}
