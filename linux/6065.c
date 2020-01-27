cocci_test_suite() {
	unsigned int cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 76 */;
	struct imx_sc_msg_req_pad_set cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 74 */;
	struct imx_pinctrl *cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 73 */;
	struct imx_sc_rpc_msg *cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 50 */;
	struct imx_sc_msg_resp_pad_get *cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 49 */;
	struct imx_sc_msg_req_pad_get cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 48 */;
	unsigned long *cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 46 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 45 */;
	unsigned cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 45 */;
	int cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 45 */;
	struct platform_device *cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 40 */;
	struct imx_sc_ipc *cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 38 */;
	struct imx_sc_msg_resp_pad_get {
		struct imx_sc_rpc_msg hdr;
		u32 val;
	}__packed cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 33 */;
	struct imx_sc_msg_req_pad_get {
		struct imx_sc_rpc_msg hdr;
		u16 pad;
	}__packed cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 28 */;
	struct imx_sc_msg_req_pad_set {
		struct imx_sc_rpc_msg hdr;
		u32 val;
		u16 pad;
	}__packed cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 22 */;
	enum pad_func_e{IMX_SC_PAD_FUNC_SET=15, IMX_SC_PAD_FUNC_GET=16,} cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 17 */;
	const __be32 *cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 111 */;
	struct imx_pin_scu *cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 110 */;
	const struct imx_pinctrl_soc_info *cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 109 */;
	const __be32 **cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 107 */;
	struct imx_pin *cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 106 */;
	unsigned int *cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 106 */;
	void cocci_id/* drivers/pinctrl/freescale/pinctrl-scu.c 105 */;
}
