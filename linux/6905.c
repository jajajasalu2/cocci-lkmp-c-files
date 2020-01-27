cocci_test_suite() {
	struct timer_list *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 71 */;
	u8 *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 638 */;
	struct tasklet_completion_status *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 59 */;
	struct done_list_struct *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 57 */;
	void cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 56 */;
	struct tasklet_completion_status {
		int dl_opcode;
		int tmf_state;
		u8 tag_valid:1;
		__be16 tag;
	} cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 40 */;
	struct scb *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 393 */;
	unsigned long cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 391 */;
	struct asd_ha_struct *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 389 */;
	struct asd_ascb *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 388 */;
	struct sas_task *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 386 */;
	__be16 *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 286 */;
	struct ssp_response_iu *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 270 */;
	struct ssp_frame_hdr *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 269 */;
	struct asd_dma_tok *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 268 */;
	void *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 264 */;
	struct tc_resp_sb_struct {
		__le16 index_escb;
		u8 len_lsb;
		u8 flags;
	}__attribute__((packed)) *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 260 */;
	void (*cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 20 */)(struct timer_list *t);
	void (*cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 18 */)(struct asd_ascb *,
								    struct done_list_struct *);
	struct sas_phy *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 165 */;
	struct domain_device *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 162 */;
	int cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 162 */;
	enum clear_nexus_phase cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 141 */;
	enum clear_nexus_phase{NEXUS_PHASE_PRE, NEXUS_PHASE_POST, NEXUS_PHASE_RESUME,} cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 134 */;
	struct asd_sas_port *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 124 */;
	struct sas_ha_struct *cocci_id/* drivers/scsi/aic94xx/aic94xx_tmf.c 115 */;
}
