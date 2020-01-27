cocci_test_suite() {
	struct imx_sc_ipc **cocci_id/* drivers/firmware/imx/imx-scu.c 93 */;
	int cocci_id/* drivers/firmware/imx/imx-scu.c 83 */;
	struct imx_sc_ipc *cocci_id/* drivers/firmware/imx/imx-scu.c 81 */;
	int cocci_id/* drivers/firmware/imx/imx-scu.c 66 */[IMX_SC_ERR_LAST];
	enum imx_sc_error_codes{IMX_SC_ERR_NONE=0, IMX_SC_ERR_VERSION=1, IMX_SC_ERR_CONFIG=2, IMX_SC_ERR_PARM=3, IMX_SC_ERR_NOACCESS=4, IMX_SC_ERR_LOCKED=5, IMX_SC_ERR_UNAVAILABLE=6, IMX_SC_ERR_NOTFOUND=7, IMX_SC_ERR_NOPOWER=8, IMX_SC_ERR_IPC=9, IMX_SC_ERR_BUSY=10, IMX_SC_ERR_FAIL=11, IMX_SC_ERR_LAST,} cocci_id/* drivers/firmware/imx/imx-scu.c 50 */;
	struct imx_sc_ipc {
		struct imx_sc_chan chans[SCU_MU_CHAN_NUM];
		struct device *dev;
		struct mutex lock;
		struct completion done;
		u32 *msg;
		u8 rx_size;
		u8 count;
	} cocci_id/* drivers/firmware/imx/imx-scu.c 34 */;
	struct platform_driver cocci_id/* drivers/firmware/imx/imx-scu.c 287 */;
	const struct of_device_id cocci_id/* drivers/firmware/imx/imx-scu.c 282 */[];
	struct imx_sc_chan {
		struct imx_sc_ipc *sc_ipc;
		struct mbox_client cl;
		struct mbox_chan *ch;
		int idx;
	} cocci_id/* drivers/firmware/imx/imx-scu.c 26 */;
	char *cocci_id/* drivers/firmware/imx/imx-scu.c 226 */;
	struct mbox_client *cocci_id/* drivers/firmware/imx/imx-scu.c 225 */;
	struct device *cocci_id/* drivers/firmware/imx/imx-scu.c 222 */;
	struct platform_device *cocci_id/* drivers/firmware/imx/imx-scu.c 220 */;
	struct imx_sc_rpc_msg *cocci_id/* drivers/firmware/imx/imx-scu.c 166 */;
	uint8_t cocci_id/* drivers/firmware/imx/imx-scu.c 165 */;
	bool cocci_id/* drivers/firmware/imx/imx-scu.c 163 */;
	void *cocci_id/* drivers/firmware/imx/imx-scu.c 163 */;
	u32 *cocci_id/* drivers/firmware/imx/imx-scu.c 139 */;
	struct imx_sc_chan *cocci_id/* drivers/firmware/imx/imx-scu.c 138 */;
	struct imx_sc_chan cocci_id/* drivers/firmware/imx/imx-scu.c 105 */;
	void cocci_id/* drivers/firmware/imx/imx-scu.c 103 */;
}
