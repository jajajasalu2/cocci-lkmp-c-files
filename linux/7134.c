cocci_test_suite() {
	void cocci_id/* drivers/xen/gntdev-dmabuf.c 95 */(struct kref *kref);
	struct file *cocci_id/* drivers/xen/gntdev-dmabuf.c 848 */;
	struct ioctl_gntdev_dmabuf_imp_release cocci_id/* drivers/xen/gntdev-dmabuf.c 840 */;
	struct ioctl_gntdev_dmabuf_imp_release __user *cocci_id/* drivers/xen/gntdev-dmabuf.c 838 */;
	struct ioctl_gntdev_dmabuf_imp_to_refs cocci_id/* drivers/xen/gntdev-dmabuf.c 809 */;
	struct ioctl_gntdev_dmabuf_imp_to_refs __user *cocci_id/* drivers/xen/gntdev-dmabuf.c 807 */;
	struct ioctl_gntdev_dmabuf_exp_wait_released cocci_id/* drivers/xen/gntdev-dmabuf.c 797 */;
	struct ioctl_gntdev_dmabuf_exp_wait_released __user *cocci_id/* drivers/xen/gntdev-dmabuf.c 795 */;
	struct ioctl_gntdev_dmabuf_exp_from_refs cocci_id/* drivers/xen/gntdev-dmabuf.c 756 */;
	struct ioctl_gntdev_dmabuf_exp_from_refs __user *cocci_id/* drivers/xen/gntdev-dmabuf.c 754 */;
	long cocci_id/* drivers/xen/gntdev-dmabuf.c 753 */;
	struct gntdev_dmabuf_priv {
		struct list_head exp_list;
		struct list_head exp_wait_list;
		struct list_head imp_list;
		struct mutex lock;
		struct file *filp;
	} cocci_id/* drivers/xen/gntdev-dmabuf.c 74 */;
	struct gntdev_dmabuf_attachment {
		struct sg_table *sgt;
		enum dma_data_direction dir;
	} cocci_id/* drivers/xen/gntdev-dmabuf.c 69 */;
	struct page *cocci_id/* drivers/xen/gntdev-dmabuf.c 652 */;
	struct gntdev_dmabuf_wait_obj {
		struct list_head next;
		struct gntdev_dmabuf *gntdev_dmabuf;
		struct completion completion;
	} cocci_id/* drivers/xen/gntdev-dmabuf.c 63 */;
	struct sg_page_iter cocci_id/* drivers/xen/gntdev-dmabuf.c 609 */;
	struct device *cocci_id/* drivers/xen/gntdev-dmabuf.c 602 */;
	grant_ref_t cocci_id/* drivers/xen/gntdev-dmabuf.c 520 */;
	struct page **cocci_id/* drivers/xen/gntdev-dmabuf.c 517 */;
	struct gntdev_dmabuf_export_args cocci_id/* drivers/xen/gntdev-dmabuf.c 469 */;
	u32 cocci_id/* drivers/xen/gntdev-dmabuf.c 466 */;
	u32 *cocci_id/* drivers/xen/gntdev-dmabuf.c 466 */;
	struct gntdev_priv *cocci_id/* drivers/xen/gntdev-dmabuf.c 444 */;
	int cocci_id/* drivers/xen/gntdev-dmabuf.c 444 */;
	struct gntdev_grant_map *cocci_id/* drivers/xen/gntdev-dmabuf.c 443 */;
	struct gntdev_dmabuf *cocci_id/* drivers/xen/gntdev-dmabuf.c 389 */;
	struct gntdev_dmabuf_export_args *cocci_id/* drivers/xen/gntdev-dmabuf.c 386 */;
	struct gntdev_dmabuf_export_args {
		struct gntdev_priv *priv;
		struct gntdev_grant_map *map;
		struct gntdev_dmabuf_priv *dmabuf_priv;
		struct device *dev;
		int count;
		struct page **pages;
		u32 fd;
	} cocci_id/* drivers/xen/gntdev-dmabuf.c 376 */;
	const struct dma_buf_ops cocci_id/* drivers/xen/gntdev-dmabuf.c 365 */;
	struct vm_area_struct *cocci_id/* drivers/xen/gntdev-dmabuf.c 359 */;
	unsigned long cocci_id/* drivers/xen/gntdev-dmabuf.c 346 */;
	void *cocci_id/* drivers/xen/gntdev-dmabuf.c 345 */;
	struct gntdev_dmabuf_priv *cocci_id/* drivers/xen/gntdev-dmabuf.c 336 */;
	struct gntdev_dmabuf {
		struct gntdev_dmabuf_priv *priv;
		struct dma_buf *dmabuf;
		struct list_head next;
		int fd;
		union {
			struct {
				struct kref refcount;
				struct gntdev_priv *priv;
				struct gntdev_grant_map *map;
			} exp;
			struct {
				grant_ref_t *refs;
				struct sg_table *sgt;
				struct dma_buf_attachment *attach;
			} imp;
		} u;
		int nr_pages;
		struct page **pages;
	} cocci_id/* drivers/xen/gntdev-dmabuf.c 33 */;
	struct gntdev_dmabuf cocci_id/* drivers/xen/gntdev-dmabuf.c 316 */;
	struct kref *cocci_id/* drivers/xen/gntdev-dmabuf.c 313 */;
	enum dma_data_direction cocci_id/* drivers/xen/gntdev-dmabuf.c 265 */;
	struct sg_table *cocci_id/* drivers/xen/gntdev-dmabuf.c 246 */;
	void cocci_id/* drivers/xen/gntdev-dmabuf.c 240 */;
	struct gntdev_dmabuf_attachment *cocci_id/* drivers/xen/gntdev-dmabuf.c 228 */;
	struct dma_buf_attachment *cocci_id/* drivers/xen/gntdev-dmabuf.c 226 */;
	struct dma_buf *cocci_id/* drivers/xen/gntdev-dmabuf.c 225 */;
	unsigned int cocci_id/* drivers/xen/gntdev-dmabuf.c 201 */;
	struct gntdev_dmabuf_wait_obj *cocci_id/* drivers/xen/gntdev-dmabuf.c 119 */;
}
