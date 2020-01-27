cocci_test_suite() {
	uint8_t cocci_id/* drivers/firmware/imx/misc.c 90 */;
	struct imx_sc_rpc_msg *cocci_id/* drivers/firmware/imx/misc.c 86 */;
	struct imx_sc_msg_resp_misc_get_ctrl *cocci_id/* drivers/firmware/imx/misc.c 85 */;
	struct imx_sc_msg_req_misc_get_ctrl cocci_id/* drivers/firmware/imx/misc.c 84 */;
	u8 cocci_id/* drivers/firmware/imx/misc.c 82 */;
	u32 *cocci_id/* drivers/firmware/imx/misc.c 82 */;
	u32 cocci_id/* drivers/firmware/imx/misc.c 81 */;
	struct imx_sc_ipc *cocci_id/* drivers/firmware/imx/misc.c 81 */;
	int cocci_id/* drivers/firmware/imx/misc.c 81 */;
	struct imx_sc_msg_req_misc_set_ctrl cocci_id/* drivers/firmware/imx/misc.c 54 */;
	struct imx_sc_msg_resp_misc_get_ctrl {
		struct imx_sc_rpc_msg hdr;
		u32 val;
	}__packed cocci_id/* drivers/firmware/imx/misc.c 35 */;
	struct imx_sc_msg_req_misc_get_ctrl {
		struct imx_sc_rpc_msg hdr;
		u32 ctrl;
		u16 resource;
	}__packed cocci_id/* drivers/firmware/imx/misc.c 29 */;
	struct imx_sc_msg_req_cpu_start {
		struct imx_sc_rpc_msg hdr;
		u32 address_hi;
		u32 address_lo;
		u16 resource;
		u8 enable;
	}__packed cocci_id/* drivers/firmware/imx/misc.c 21 */;
	struct imx_sc_msg_req_misc_set_ctrl {
		struct imx_sc_rpc_msg hdr;
		u32 ctrl;
		u32 val;
		u16 resource;
	}__packed cocci_id/* drivers/firmware/imx/misc.c 14 */;
	struct imx_sc_msg_req_cpu_start cocci_id/* drivers/firmware/imx/misc.c 122 */;
	u64 cocci_id/* drivers/firmware/imx/misc.c 120 */;
	bool cocci_id/* drivers/firmware/imx/misc.c 120 */;
}
