cocci_test_suite() {
	struct drm_device *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 79 */;
	const union {
		struct nvif_notify_rep_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 76 */;
	const void *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 73 */;
	struct usif_notify {
		struct list_head head;
		atomic_t enabled;
		u32 handle;
		u16 reply;
		u8 route;
		u64 token;
		struct usif_notify_p *p;
	} cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 43 */;
	struct usif_notify *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 382 */;
	struct usif_object *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 381 */;
	struct nouveau_cli *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 379 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 378 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 357 */;
	struct usif_notify_p {
		struct drm_pending_event base;
		struct {
			struct drm_event base;
			u8 data[];
		} e;
	} cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 35 */;
	u8 cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 304 */;
	union {
		struct nvif_ioctl_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 300 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 298 */;
	struct nvif_client *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 297 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 294 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 294 */;
	void __user *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 294 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 293 */;
	union {
		struct nvif_ioctl_new_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 268 */;
	struct usif_object {
		struct list_head head;
		struct list_head ntfy;
		u8 route;
		u64 token;
	} cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 249 */;
	union {
		struct nvif_ioctl_ntfy_put_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 231 */;
	union {
		struct nvif_ioctl_ntfy_del_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 171 */;
	struct nvif_notify_rep_v0 cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 148 */;
	union {
		struct nvif_notify_req_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 129 */;
	union {
		struct nvif_ioctl_ntfy_new_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 126 */;
	struct nvif_notify_rep_v0 *cocci_id/* drivers/gpu/drm/nouveau/nouveau_usif.c 100 */;
}
