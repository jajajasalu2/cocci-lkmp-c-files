cocci_test_suite() {
	struct asd_ctrla_phy_settings cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 970 */;
	struct asd_ctrla_phy_settings *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 969 */;
	u64 *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 928 */;
	struct asd_ctrla_phy_entry *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 924 */;
	struct asd_bios_chim_struct {
		char sig[4];
		u8 major;
		u8 minor;
		u8 bios_major;
		u8 bios_minor;
		__le32 bios_build;
		u8 flags;
		u8 pci_slot;
		__le16 ue_num;
		__le16 ue_size;
		u8 _r[14];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 91 */;
	struct asd_ms_conn_map *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 825 */;
	struct asd_manuf_sec *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 823 */;
	struct asd_manuf_phy_desc *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 793 */;
	struct asd_manuf_phy_desc cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 770 */;
	struct asd_manuf_phy_param cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 759 */;
	struct asd_manuf_phy_param *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 758 */;
	struct asd_ll_el *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 716 */;
	const u8 cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 714 */;
	void *const cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 714 */;
	void *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 714 */;
	__le16 cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 677 */;
	struct asd_flash_de *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 648 */;
	struct asd_flash_dir *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 644 */;
	u16 cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 633 */;
	u16 *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 633 */;
	int cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 633 */;
	struct asd_ocm_dir_ent cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 62 */[OCM_INIT_DIR_ENTRIES];
	struct asd_ll_el {
		u8 id0;
		u8 id1;
		__le16 next;
		u8 something_here[0];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 541 */;
	struct asd_ctrla_phy_settings {
		u8 id0;
		u8 _r;
		u16 next;
		u8 num_phys;
		u8 _r2[3];
		struct asd_ctrla_phy_entry phy_ent[ASD_MAX_PHYS];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 532 */;
	struct asd_ocm_dir cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 53 */;
	struct asd_ctrla_phy_entry {
		u8 sas_addr[SAS_ADDR_SIZE];
		u8 sas_link_rates;
		u8 flags;
		u8 sata_link_rates;
		u8 _r[5];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 524 */;
	struct asd_ms_conn_map {
		char sig[2];
		__le16 next;
		u8 maj;
		u8 min;
		__le16 cm_size;
		u8 num_conn;
		u8 conn_size;
		u8 num_nodes;
		u8 usage_model_id;
		u32 _resvd;
		struct asd_ms_conn_desc conn_desc[0];
		struct asd_ms_node_desc node_desc[0];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 509 */;
	struct asd_ms_node_desc {
		u8 type;
		u8 num_phy_desc;
		u8 size_phy_desc;
		u8 _resvd;
		u8 name[16];
		struct asd_nd_phy_desc phy_desc[0];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 500 */;
	struct asd_nd_phy_desc {
		u8 vp_attch_type;
		u8 attch_specific[0];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 484 */;
	struct asd_ms_conn_desc {
		u8 type;
		u8 location;
		u8 num_sideband_desc;
		u8 size_sideband_desc;
		u32 _resvd;
		u8 name[16];
		struct asd_ms_sb_desc sb_desc[0];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 474 */;
	struct asd_ms_sb_desc {
		u8 type;
		u8 node_desc_index;
		u8 conn_desc_index;
		u8 _recvd[0];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 448 */;
	struct asd_manuf_phy_param {
		char sig[2];
		u16 next;
		u8 maj;
		u8 min;
		u8 num_phy_desc;
		u8 phy_desc_size;
		u8 _r[3];
		u8 usage_model_id;
		u32 _r2;
		struct asd_manuf_phy_desc phy_desc[ASD_MAX_PHYS];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 425 */;
	struct asd_manuf_phy_desc {
		u8 state;
#define MS_PHY_STATE_ENABLED 0
#define MS_PHY_STATE_REPORTED 1
#define MS_PHY_STATE_HIDDEN 2
		u8 phy_id;
		u16 _r;
		u8 phy_control_0;
		u8 phy_control_1;
		u8 phy_control_2;
		u8 phy_control_3;
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 412 */;
	struct asd_manuf_sec {
		char sig[2];
		u16 offs_next;
		u8 maj;
		u8 min;
		u16 chksum;
		u16 size;
		u8 _r[6];
		u8 sas_addr[SAS_ADDR_SIZE];
		u8 pcba_sn[ASD_PCBA_SN_SIZE];
		u8 linked_list[0];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 398 */;
	struct asd_flash_dir {
		u8 cookie[32];
		__le32 rev;
		__le32 chksum;
		__le32 chksum_antidote;
		__le32 bld;
		u8 bld_id[32];
		u8 ver_data[32];
		__le32 ae_mask;
		__le32 v_mask;
		__le32 oc_mask;
		u8 _r[20];
		struct asd_flash_de dir_entry[FLASH_MAX_DIR_ENTRIES];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 383 */;
	struct asd_flash_de {
		__le32 type;
		__le32 offs;
		__le32 pad_size;
		__le32 image_size;
		__le32 chksum;
		u8 _r[12];
		u8 version[32];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 373 */;
	struct pci_dev *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 296 */;
	struct asd_ocm_dir_ent cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 288 */;
	void cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 271 */;
	struct asd_ocm_dir {
		char sig[2];
		u8 _r1[2];
		u8 major;
		u8 minor;
		u8 _r2;
		u8 num_de;
		struct asd_ocm_dir_ent entry[15];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 27 */;
	struct asd_bios_chim_struct *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 201 */;
	struct asd_ocm_dir_ent {
		u8 type;
		u8 offs[3];
		u8 _r1;
		u8 size[3];
	}__attribute__((packed)) cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 20 */;
	struct asd_ocm_dir_ent *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 180 */;
	u32 *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 177 */;
	struct asd_ocm_dir *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 176 */;
	u32 cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 1302 */;
	u8 cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 1299 */;
	struct asd_ha_struct *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 1297 */;
	u8 *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 119 */;
	const u8 *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 1082 */;
	const void *cocci_id/* drivers/scsi/aic94xx/aic94xx_sds.c 1080 */;
}
