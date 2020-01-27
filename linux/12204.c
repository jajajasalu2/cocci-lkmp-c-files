cocci_test_suite() {
	struct xen_drm_front_drm_info *cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 80 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 78 */;
	void cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 53 */;
	struct page *cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 49 */;
	size_t cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 45 */;
	struct xen_gem_object *cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 44 */;
	int cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 44 */;
	struct xen_gem_object cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 41 */;
	struct drm_gem_object *cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 39 */;
	void *cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 275 */;
	struct file *cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 260 */;
	struct xen_gem_object {
		struct drm_gem_object base;
		size_t num_pages;
		struct page **pages;
		bool be_alloc;
		struct sg_table *sgt_imported;
	} cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 25 */;
	struct vm_area_struct *cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 224 */;
	struct dma_buf_attachment *cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 187 */;
	struct sg_table *cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 175 */;
	struct page **cocci_id/* drivers/gpu/drm/xen/xen_drm_front_gem.c 168 */;
}
