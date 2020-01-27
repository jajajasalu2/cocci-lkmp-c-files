cocci_test_suite() {
	typeof(*notify) cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 84 */;
	struct nvkm_client_notify *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 84 */;
	struct nvkm_notify *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 82 */;
	struct nvkm_client_notify {
		struct nvkm_client *client;
		struct nvkm_notify n;
		u8 version;
		u8 size;
		union {
			struct nvif_notify_rep_v0 v0;
		} rep;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 71 */;
	const struct nvkm_sclass cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 63 */;
	union {
		struct nvif_client_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 38 */;
	struct nvkm_oclass cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 291 */;
	struct nvkm_client **cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 289 */;
	int (*cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 288 */)(const void *,
									    u32,
									    const void *,
									    u32);
	u64 cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 286 */;
	const char *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 286 */;
	struct nvkm_client *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 270 */;
	const char *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 259 */[2];
	bool cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 256 */;
	const struct nvkm_sclass *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 241 */;
	struct nvkm_oclass *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 239 */;
	struct nvkm_object *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 238 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 237 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 232 */;
	struct nvkm_object **cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 232 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 232 */;
	const struct nvkm_oclass *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 231 */;
	union {
		struct nvif_client_devlist_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 194 */;
	const struct nvkm_object_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 178 */;
	u8 cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 136 */;
	union {
		struct nvif_notify_req_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 133 */;
	struct nvkm_event *cocci_id/* drivers/gpu/drm/nouveau/nvkm/core/client.c 129 */;
}
