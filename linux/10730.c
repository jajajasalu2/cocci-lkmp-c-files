cocci_test_suite() {
	struct interval_tree_node *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 94 */;
	struct i915_mmu_notifier cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 93 */;
	const struct mmu_notifier_range *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 90 */;
	struct mmu_notifier *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 89 */;
	struct i915_address_space *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 776 */;
	char __user *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 772 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 753 */;
	struct drm_i915_gem_userptr *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 750 */;
	struct lock_class_key cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 748 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 746 */;
	void *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 745 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 744 */;
	const struct drm_i915_gem_object_ops cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 697 */;
	struct i915_mmu_object *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 64 */;
	struct sgt_iter cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 628 */;
	bool cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 62 */;
	struct get_pages_work *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 516 */;
	struct mm_struct *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 460 */;
	struct page *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 458 */;
	const int cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 451 */;
	typeof(*work) cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 449 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 447 */;
	void cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 446 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 407 */;
	struct page **cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 405 */;
	int cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 405 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 404 */;
	struct sg_table *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 403 */;
	struct i915_mmu_object {
		struct i915_mmu_notifier *mn;
		struct drm_i915_gem_object *obj;
		struct interval_tree_node it;
	} cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 40 */;
	struct get_pages_work {
		struct work_struct work;
		struct drm_i915_gem_object *obj;
		struct task_struct *task;
	} cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 397 */;
	typeof(*mm) cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 375 */;
	struct kref *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 373 */;
	struct i915_mmu_notifier {
		spinlock_t lock;
		struct hlist_node node;
		struct mmu_notifier mn;
		struct rb_root_cached objects;
		struct i915_mm_struct *mm;
	} cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 32 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 310 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 305 */;
	struct i915_mm_struct *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 304 */;
	struct i915_mmu_notifier *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 233 */;
	unsigned cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 231 */;
	struct i915_mm_struct {
		struct mm_struct *mm;
		struct drm_i915_private *i915;
		struct i915_mmu_notifier *mn;
		struct hlist_node node;
		struct kref kref;
		struct work_struct work;
	} cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 20 */;
	const struct mmu_notifier_ops cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 154 */;
	struct i915_mmu_object cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_userptr.c 124 */;
}
