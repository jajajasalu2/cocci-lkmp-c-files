cocci_test_suite() {
	struct drm_dp_mst_topology_mgr *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 989 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 957 */;
	struct nv50_mstc *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 944 */;
	struct nv50_msto **cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 918 */;
	struct nvif_sclass *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 85 */;
	struct drm_connector_list_iter cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 842 */;
	struct nv50_chan *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 83 */;
	unsigned int cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 823 */;
	u8 cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 82 */;
	const s32 *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 82 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 82 */;
	struct nvif_object *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 81 */;
	struct {
		struct nv50_disp_mthd_v1 base;
		struct nv50_disp_sor_dp_mst_vcpi_v0 vcpi;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 739 */;
	struct drm_dp_payload *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 687 */;
	struct nv50_msto {
		struct drm_encoder encoder;
		struct nv50_head *head;
		struct nv50_mstc *mstc;
		bool disabled;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 679 */;
	struct nv50_mstc {
		struct nv50_mstm *mstm;
		struct drm_dp_mst_port *port;
		struct drm_connector connector;
		struct drm_display_mode *native;
		struct edid *edid;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 670 */;
	struct nv50_mstm {
		struct nouveau_encoder *outp;
		struct drm_dp_mst_topology_mgr mgr;
		struct nv50_msto *msto[4];
		bool modified;
		bool disabled;
		int links;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 659 */;
	struct nv50_msto cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 657 */;
	struct nv50_mstc cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 656 */;
	struct nv50_mstm cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 655 */;
	struct nv50_outp_atom {
		struct list_head head;
		struct drm_encoder *encoder;
		bool flush_disable;
		union nv50_outp_atom_mask {
			struct {
				bool ctrl:1;
			};
			u8 mask;
		} set,clr;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 62 */;
	union hdmi_infoframe cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 577 */;
	struct drm_hdmi_info *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 575 */;
	struct {
		struct nv50_disp_mthd_v1 base;
		struct nv50_disp_sor_hdmi_pwr_v0 pwr;
		u8 infoframes[2 * 17];
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 561 */;
	struct {
		struct nv50_disp_mthd_v1 base;
		struct nv50_disp_sor_hdmi_pwr_v0 pwr;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 540 */;
	struct __packed {
		struct {
			struct nv50_disp_mthd_v1 mthd;
			struct nv50_disp_sor_hda_eld_v0 eld;
		} base;
		u8 data[sizeof(nv_connector->base.eld)];
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 508 */;
	struct nouveau_connector *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 506 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 502 */;
	struct {
		struct nv50_disp_mthd_v1 base;
		struct nv50_disp_sor_hda_eld_v0 eld;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 487 */;
	struct nv50_disp *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 486 */;
	struct nouveau_encoder *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 485 */;
	struct nouveau_crtc *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 483 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 483 */;
	struct nvkm_i2c_bus *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 454 */;
	struct nvkm_i2c *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 453 */;
	struct nouveau_drm *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 452 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 450 */;
	struct dcb_output *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 450 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 444 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 429 */;
	struct {
		struct nv50_disp_mthd_v1 base;
		struct nv50_disp_dac_load_v0 load;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 407 */;
	enum drm_connector_status cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 402 */;
	struct nv50_head_atom *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 391 */;
	struct nv50_core *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 379 */;
	struct nouveau_conn_atom *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 313 */;
	struct {
		struct nv50_disp_mthd_v1 base;
		struct nv50_disp_acquire_v0 info;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 282 */;
	struct {
		struct nv50_disp_mthd_v1 base;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 263 */;
	u32 *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 246 */;
	struct dcb_table *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2321 */;
	const struct drm_mode_config_funcs cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2236 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 222 */;
	int cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 218 */;
	struct drm_crtc *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2168 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2167 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2165 */;
	struct nv50_atom *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2164 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2162 */;
	struct drm_atomic_state *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2162 */;
	struct nvif_device *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 208 */;
	struct nv50_wndw *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2060 */;
	struct nv50_wndw_atom *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2059 */;
	struct drm_plane *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2031 */;
	struct drm_plane_state *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2030 */;
	bool cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2028 */;
	typeof(*state) cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2022 */;
	struct nv50_dmac *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 202 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 2019 */;
	void cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 201 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1994 */;
	const struct drm_encoder_helper_funcs *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1881 */;
	struct nv50_head *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1850 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1836 */[NV50_DISP_INTERLOCK__SIZE];
	struct nv50_outp_atom *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1835 */;
	struct nv50_mstm *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1780 */;
	struct nv_dma_v0 cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 174 */;
	struct i2c_adapter *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1732 */;
	struct nvkm_i2c_aux *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1731 */;
	struct nvkm_bios *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1577 */;
	u8 *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1512 */;
	struct nvbios *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1474 */;
	struct {
		struct nv50_disp_mthd_v1 base;
		struct nv50_disp_sor_lvds_script_v0 lvds;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1461 */;
	struct nv50_disp_core_channel_dma_v0 *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 139 */;
	struct nouveau_cli *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 138 */;
	const int cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1367 */;
	struct nv50_mstm **cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1353 */;
	u64 cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 135 */;
	struct drm_dp_aux *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1276 */;
	u8 cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1274 */[8];
	struct {
		struct nv50_disp_mthd_v1 base;
		struct nv50_disp_sor_dp_mst_link_v0 mst;
	} cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1238 */;
	const struct drm_dp_mst_topology_cbs cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1194 */;
	struct nv50_msto *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1119 */;
	const char *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1071 */;
	struct nv50_mstc **cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1071 */;
	struct drm_dp_mst_port *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1070 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1058 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1037 */;
	struct drm_modeset_acquire_ctx *cocci_id/* drivers/gpu/drm/nouveau/dispnv50/disp.c 1017 */;
}
