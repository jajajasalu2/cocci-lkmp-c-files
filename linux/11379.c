cocci_test_suite() {
	u32 cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 93 */;
	struct cec_msg *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 93 */;
	u8 cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 77 */;
	struct dw_hdmi_cec {
		struct dw_hdmi *hdmi;
		const struct dw_hdmi_cec_ops *ops;
		u32 addresses;
		struct cec_adapter *adap;
		struct cec_msg rx_msg;
		unsigned int tx_status;
		bool tx_done;
		bool rx_done;
		struct cec_notifier *notify;
		int irq;
	} cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 54 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 311 */;
	struct dw_hdmi_cec_data *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 231 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 229 */;
	struct dw_hdmi_cec *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 224 */;
	void *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 222 */;
	void cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 222 */;
	const struct cec_adap_ops cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 216 */;
	enum{HDMI_IH_CEC_STAT0=0x0106, HDMI_IH_MUTE_CEC_STAT0=0x0186, HDMI_CEC_CTRL=0x7d00, CEC_CTRL_START=BIT(0), CEC_CTRL_FRAME_TYP=3 << 1, CEC_CTRL_RETRY=0 << 1, CEC_CTRL_NORMAL=1 << 1, CEC_CTRL_IMMED=2 << 1, HDMI_CEC_STAT=0x7d01, CEC_STAT_DONE=BIT(0), CEC_STAT_EOM=BIT(1), CEC_STAT_NACK=BIT(2), CEC_STAT_ARBLOST=BIT(3), CEC_STAT_ERROR_INIT=BIT(4), CEC_STAT_ERROR_FOLL=BIT(5), CEC_STAT_WAKEUP=BIT(6), HDMI_CEC_MASK=0x7d02, HDMI_CEC_POLARITY=0x7d03, HDMI_CEC_INT=0x7d04, HDMI_CEC_ADDR_L=0x7d05, HDMI_CEC_ADDR_H=0x7d06, HDMI_CEC_TX_CNT=0x7d07, HDMI_CEC_RX_CNT=0x7d08, HDMI_CEC_TX_DATA0=0x7d10, HDMI_CEC_RX_DATA0=0x7d20, HDMI_CEC_LOCK=0x7d30, HDMI_CEC_WKUPCTRL=0x7d31,} cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 21 */;
	unsigned int cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 197 */;
	bool cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 186 */;
	struct cec_adapter *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 186 */;
	int cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 186 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-hdmi-cec.c 120 */;
}
