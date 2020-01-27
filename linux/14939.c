cocci_test_suite() {
	struct imx_sc_msg_get_clock_parent {
		struct imx_sc_rpc_msg hdr;
		union {
			struct req_get_clock_parent {
				__le16 resource;
				u8 clk;
			}__packed req;
			struct resp_get_clock_parent {
				u8 parent;
			} resp;
		} data;
	} cocci_id/* drivers/clk/imx/clk-scu.c 81 */;
	struct imx_sc_msg_get_clock_rate {
		struct imx_sc_rpc_msg hdr;
		union {
			struct req_get_clock_rate req;
			struct resp_get_clock_rate resp;
		} data;
	} cocci_id/* drivers/clk/imx/clk-scu.c 65 */;
	struct resp_get_clock_rate {
		__le32 rate;
	} cocci_id/* drivers/clk/imx/clk-scu.c 53 */;
	struct req_get_clock_rate {
		__le16 resource;
		u8 clk;
	}__packed cocci_id/* drivers/clk/imx/clk-scu.c 48 */;
	struct imx_sc_msg_req_set_clock_rate {
		struct imx_sc_rpc_msg hdr;
		__le32 rate;
		__le16 resource;
		u8 clk;
	}__packed cocci_id/* drivers/clk/imx/clk-scu.c 41 */;
	struct clk_scu *cocci_id/* drivers/clk/imx/clk-scu.c 351 */;
	struct clk_init_data cocci_id/* drivers/clk/imx/clk-scu.c 350 */;
	u8 cocci_id/* drivers/clk/imx/clk-scu.c 348 */;
	u32 cocci_id/* drivers/clk/imx/clk-scu.c 348 */;
	int cocci_id/* drivers/clk/imx/clk-scu.c 348 */;
	const char *const*cocci_id/* drivers/clk/imx/clk-scu.c 347 */;
	const char *cocci_id/* drivers/clk/imx/clk-scu.c 347 */;
	struct clk_hw *cocci_id/* drivers/clk/imx/clk-scu.c 347 */;
	const struct clk_ops cocci_id/* drivers/clk/imx/clk-scu.c 339 */;
	void cocci_id/* drivers/clk/imx/clk-scu.c 317 */;
	struct imx_sc_msg_req_clock_enable cocci_id/* drivers/clk/imx/clk-scu.c 281 */;
	bool cocci_id/* drivers/clk/imx/clk-scu.c 279 */;
	u16 cocci_id/* drivers/clk/imx/clk-scu.c 278 */;
	struct imx_sc_msg_set_clock_parent cocci_id/* drivers/clk/imx/clk-scu.c 263 */;
	struct clk_scu {
		struct clk_hw hw;
		u16 rsrc_id;
		u8 clk_type;
	} cocci_id/* drivers/clk/imx/clk-scu.c 26 */;
	struct imx_sc_rpc_msg *cocci_id/* drivers/clk/imx/clk-scu.c 239 */;
	struct imx_sc_msg_get_clock_parent cocci_id/* drivers/clk/imx/clk-scu.c 238 */;
	struct imx_sc_msg_req_set_clock_rate cocci_id/* drivers/clk/imx/clk-scu.c 220 */;
	struct arm_smccc_res cocci_id/* drivers/clk/imx/clk-scu.c 192 */;
	unsigned long cocci_id/* drivers/clk/imx/clk-scu.c 188 */;
	struct imx_sc_ipc *cocci_id/* drivers/clk/imx/clk-scu.c 18 */;
	unsigned long *cocci_id/* drivers/clk/imx/clk-scu.c 179 */;
	long cocci_id/* drivers/clk/imx/clk-scu.c 178 */;
	struct imx_sc_msg_get_clock_rate cocci_id/* drivers/clk/imx/clk-scu.c 148 */;
	struct clk_scu cocci_id/* drivers/clk/imx/clk-scu.c 128 */;
	struct imx_sc_msg_req_clock_enable {
		struct imx_sc_rpc_msg hdr;
		__le16 resource;
		u8 clk;
		u8 enable;
		u8 autog;
	}__packed cocci_id/* drivers/clk/imx/clk-scu.c 118 */;
	struct imx_sc_msg_set_clock_parent {
		struct imx_sc_rpc_msg hdr;
		__le16 resource;
		u8 clk;
		u8 parent;
	}__packed cocci_id/* drivers/clk/imx/clk-scu.c 101 */;
}
