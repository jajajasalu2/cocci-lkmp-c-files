cocci_test_suite() {
	struct ssp_frame_hdr cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 999 */;
	struct ssp_tmf_iu cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 998 */;
	u8 *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 963 */;
	struct hisi_sas_tmf_task *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 961 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 960 */;
	struct sas_ssp_task *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 959 */;
	unsigned int cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 923 */;
	dma_addr_t cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 922 */;
	struct hisi_sas_port *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 919 */;
	struct domain_device *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 918 */;
	struct sas_task *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 916 */;
	struct hisi_sas_sge *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 900 */;
	struct hisi_sas_sge_page *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 895 */;
	struct scatterlist *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 892 */;
	struct hisi_sas_cmd_hdr *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 891 */;
	struct hisi_sas_dq *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 863 */;
	struct sas_phy_linkrates *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 840 */;
	enum sas_linkrate cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 834 */;
	struct timer_list *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 810 */;
	acpi_status cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 610 */;
	u32 cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 540 */;
	struct hisi_sas_itct *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 538 */;
	u64 cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 537 */;
	struct hisi_sas_device *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 535 */;
	struct hisi_hba *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 534 */;
	int cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 534 */;
	struct asd_sas_port *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 497 */;
	u32 *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 463 */;
	struct sas_identify_frame cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 462 */;
	void cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 460 */;
	void __iomem *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 438 */;
	enum{DMA_TX_ERR_BASE=0x0, DMA_RX_ERR_BASE=0x100, TRANS_TX_FAIL_BASE=0x200, TRANS_RX_FAIL_BASE=0x300, DMA_TX_DIF_CRC_ERR=DMA_TX_ERR_BASE, DMA_TX_DIF_APP_ERR, DMA_TX_DIF_RPP_ERR, DMA_TX_AXI_BUS_ERR, DMA_TX_DATA_SGL_OVERFLOW_ERR, DMA_TX_DIF_SGL_OVERFLOW_ERR, DMA_TX_UNEXP_XFER_RDY_ERR, DMA_TX_XFER_RDY_OFFSET_ERR, DMA_TX_DATA_UNDERFLOW_ERR, DMA_TX_XFER_RDY_LENGTH_OVERFLOW_ERR, DMA_RX_BUFFER_ECC_ERR=DMA_RX_ERR_BASE, DMA_RX_DIF_CRC_ERR, DMA_RX_DIF_APP_ERR, DMA_RX_DIF_RPP_ERR, DMA_RX_RESP_BUFFER_OVERFLOW_ERR, DMA_RX_AXI_BUS_ERR, DMA_RX_DATA_SGL_OVERFLOW_ERR, DMA_RX_DIF_SGL_OVERFLOW_ERR, DMA_RX_DATA_OFFSET_ERR, DMA_RX_UNEXP_RX_DATA_ERR, DMA_RX_DATA_OVERFLOW_ERR, DMA_RX_DATA_UNDERFLOW_ERR, DMA_RX_UNEXP_RETRANS_RESP_ERR, TRANS_TX_RSVD0_ERR=TRANS_TX_FAIL_BASE, TRANS_TX_PHY_NOT_ENABLE_ERR, TRANS_TX_OPEN_REJCT_WRONG_DEST_ERR, TRANS_TX_OPEN_REJCT_ZONE_VIOLATION_ERR, TRANS_TX_OPEN_REJCT_BY_OTHER_ERR, TRANS_TX_RSVD1_ERR, TRANS_TX_OPEN_REJCT_AIP_TIMEOUT_ERR, TRANS_TX_OPEN_REJCT_STP_BUSY_ERR, TRANS_TX_OPEN_REJCT_PROTOCOL_NOT_SUPPORT_ERR, TRANS_TX_OPEN_REJCT_RATE_NOT_SUPPORT_ERR, TRANS_TX_OPEN_REJCT_BAD_DEST_ERR, TRANS_TX_OPEN_BREAK_RECEIVE_ERR, TRANS_TX_LOW_PHY_POWER_ERR, TRANS_TX_OPEN_REJCT_PATHWAY_BLOCKED_ERR, TRANS_TX_OPEN_TIMEOUT_ERR, TRANS_TX_OPEN_REJCT_NO_DEST_ERR, TRANS_TX_OPEN_RETRY_ERR, TRANS_TX_RSVD2_ERR, TRANS_TX_BREAK_TIMEOUT_ERR, TRANS_TX_BREAK_REQUEST_ERR, TRANS_TX_BREAK_RECEIVE_ERR, TRANS_TX_CLOSE_TIMEOUT_ERR, TRANS_TX_CLOSE_NORMAL_ERR, TRANS_TX_CLOSE_PHYRESET_ERR, TRANS_TX_WITH_CLOSE_DWS_TIMEOUT_ERR, TRANS_TX_WITH_CLOSE_COMINIT_ERR, TRANS_TX_NAK_RECEIVE_ERR, TRANS_TX_ACK_NAK_TIMEOUT_ERR, TRANS_TX_CREDIT_TIMEOUT_ERR, TRANS_TX_IPTT_CONFLICT_ERR, TRANS_TX_TXFRM_TYPE_ERR, TRANS_TX_TXSMP_LENGTH_ERR, TRANS_RX_FRAME_CRC_ERR=TRANS_RX_FAIL_BASE, TRANS_RX_FRAME_DONE_ERR, TRANS_RX_FRAME_ERRPRM_ERR, TRANS_RX_FRAME_NO_CREDIT_ERR, TRANS_RX_RSVD0_ERR, TRANS_RX_FRAME_OVERRUN_ERR, TRANS_RX_FRAME_NO_EOF_ERR, TRANS_RX_LINK_BUF_OVERRUN_ERR, TRANS_RX_BREAK_TIMEOUT_ERR, TRANS_RX_BREAK_REQUEST_ERR, TRANS_RX_BREAK_RECEIVE_ERR, TRANS_RX_CLOSE_TIMEOUT_ERR, TRANS_RX_CLOSE_NORMAL_ERR, TRANS_RX_CLOSE_PHYRESET_ERR, TRANS_RX_WITH_CLOSE_DWS_TIMEOUT_ERR, TRANS_RX_WITH_CLOSE_COMINIT_ERR, TRANS_RX_DATA_LENGTH0_ERR, TRANS_RX_BAD_HASH_ERR, TRANS_RX_XRDY_ZERO_ERR, TRANS_RX_SSP_FRAME_LEN_ERR, TRANS_RX_TRANS_RX_RSVD1_ERR, TRANS_RX_NO_BALANCE_ERR, TRANS_RX_TRANS_RX_RSVD2_ERR, TRANS_RX_TRANS_RX_RSVD3_ERR, TRANS_RX_BAD_FRAME_TYPE_ERR, TRANS_RX_SMP_FRAME_LEN_ERR, TRANS_RX_SMP_RESP_TIMEOUT_ERR,} cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 307 */;
	enum{HISI_SAS_PHY_BCAST_ACK=0, HISI_SAS_PHY_SL_PHY_ENABLED, HISI_SAS_PHY_INT_ABNORMAL, HISI_SAS_PHY_INT_NR,} cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 300 */;
	struct hisi_sas_err_record_v1 {
		__le32 dma_err_type;
		__le32 trans_tx_fail_type;
		__le32 trans_rx_fail_type;
		u32 rsvd;
	} cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 286 */;
	struct hisi_sas_complete_v1_hdr {
		__le32 data;
	} cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 282 */;
	struct platform_driver cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1821 */;
	const struct acpi_device_id cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1814 */[];
	const struct of_device_id cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1808 */[];
	struct platform_device *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1798 */;
	struct hisi_sas_complete_v1_hdr cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1794 */;
	const struct hisi_sas_hw cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1779 */;
	struct scsi_host_template cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1758 */;
	struct device_attribute *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1753 */[];
	irq_handler_t cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1633 */[HISI_SAS_MAX_QUEUES];
	irq_handler_t cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1627 */[HISI_SAS_PHY_INT_NR];
	struct device *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1602 */;
	struct hisi_sas_complete_v1_hdr *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1499 */;
	struct hisi_sas_slot *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1497 */;
	struct hisi_sas_cq *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1495 */;
	irqreturn_t cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1493 */;
	void *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1493 */;
	struct asd_sas_phy *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1443 */;
	struct hisi_sas_phy *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1440 */;
	struct sas_ha_struct *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1413 */;
	unsigned long cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1332 */;
	struct sas_identify_frame *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1330 */;
	struct hisi_sas_err_record cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1289 */;
	struct ssp_response_iu *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1272 */;
	struct hisi_sas_status_buffer *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1270 */;
	enum exec_status cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1186 */;
	struct task_status_struct *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1184 */;
	struct hisi_sas_err_record_v1 *cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1055 */;
	struct ssp_command_iu cocci_id/* drivers/scsi/hisi_sas/hisi_sas_v1_hw.c 1002 */;
}