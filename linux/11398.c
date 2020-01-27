cocci_test_suite() {
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 93 */(struct vmw_mob *mob,
								  struct vmw_piter data_iter,
								  unsigned long num_data_pages);
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 91 */(struct vmw_private *dev_priv,
								 struct vmw_mob *mob);
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDefineGBMob64 body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 654 */;
	struct vmw_piter cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 653 */;
	bool cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 652 */;
	int32_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 649 */;
	unsigned long cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 648 */;
	const struct vmw_sg_table *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 647 */;
	struct vmw_mob *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 646 */;
	struct vmw_private *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 645 */;
	int cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 645 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdDestroyGBMob body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 600 */;
	struct vmw_mob {
		struct ttm_buffer_object *pt_bo;
		unsigned long num_pages;
		unsigned pt_level;
		dma_addr_t pt_root_page;
		uint32_t id;
	} cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 58 */;
	struct ttm_buffer_object *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 550 */;
	struct page *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 514 */;
	u32 *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 512 */;
	struct vmw_piter *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 505 */;
	u64 *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 484 */;
	dma_addr_t cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 482 */;
	u32 **cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 482 */;
	void cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 482 */;
	struct ttm_operation_ctx cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 436 */;
	struct vmw_otable **cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 320 */;
	SVGAOTableType cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 245 */;
	struct vmw_otable *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 240 */;
	struct vmw_otable_batch *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 236 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdSetOTableBase body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 196 */;
	struct {
		SVGA3dCmdHeader header;
		SVGA3dCmdSetOTableBase64 body;
	} *cocci_id/* drivers/gpu/drm/vmwgfx/vmwgfx_mob.c 115 */;
}
