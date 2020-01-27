cocci_test_suite() {
	bool cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 91 */;
	struct {
		struct nvif_ioctl_v0 ioctl;
		struct nvif_ioctl_ntfy_get_v0 ntfy;
	} cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 67 */;
	struct {
		struct nvif_ioctl_v0 ioctl;
		struct nvif_ioctl_ntfy_put_v0 ntfy;
	} cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 36 */;
	struct {
		struct nvif_ioctl_v0 ioctl;
		struct nvif_ioctl_ntfy_new_v0 ntfy;
		struct nvif_notify_req_v0 req;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 169 */;
	u8 cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 166 */;
	int (*cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 165 */)(struct nvif_notify *);
	struct {
		struct nvif_ioctl_v0 ioctl;
		struct nvif_ioctl_ntfy_del_v0 ntfy;
	} cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 148 */;
	struct nvif_object *cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 147 */;
	struct nvif_client *cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 127 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 123 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 123 */;
	const union {
		struct nvif_notify_rep_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 115 */;
	struct nvif_notify *cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 114 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 112 */;
	const void *cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 112 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 111 */;
	typeof(*notify) cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 107 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 105 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvif/notify.c 104 */;
}
