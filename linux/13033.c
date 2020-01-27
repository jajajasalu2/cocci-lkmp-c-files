cocci_test_suite() {
	u32 cocci_id/* drivers/soc/imx/soc-imx-scu.c 89 */;
	u64 cocci_id/* drivers/soc/imx/soc-imx-scu.c 88 */;
	struct soc_device *cocci_id/* drivers/soc/imx/soc-imx-scu.c 86 */;
	struct soc_device_attribute *cocci_id/* drivers/soc/imx/soc-imx-scu.c 85 */;
	struct imx_sc_rpc_msg *cocci_id/* drivers/soc/imx/soc-imx-scu.c 63 */;
	struct imx_sc_msg_misc_get_soc_id cocci_id/* drivers/soc/imx/soc-imx-scu.c 62 */;
	int cocci_id/* drivers/soc/imx/soc-imx-scu.c 60 */;
	void cocci_id/* drivers/soc/imx/soc-imx-scu.c 60 */;
	struct imx_sc_msg_misc_get_soc_uid cocci_id/* drivers/soc/imx/soc-imx-scu.c 38 */;
	u64 *cocci_id/* drivers/soc/imx/soc-imx-scu.c 36 */;
	struct imx_sc_msg_misc_get_soc_uid {
		struct imx_sc_rpc_msg hdr;
		u32 uid_low;
		u32 uid_high;
	}__packed cocci_id/* drivers/soc/imx/soc-imx-scu.c 30 */;
	struct imx_sc_msg_misc_get_soc_id {
		struct imx_sc_rpc_msg hdr;
		union {
			struct {
				u32 control;
				u16 resource;
			}__packed req;
			struct {
				u32 id;
			} resp;
		} data;
	}__packed cocci_id/* drivers/soc/imx/soc-imx-scu.c 17 */;
	struct device_node *cocci_id/* drivers/soc/imx/soc-imx-scu.c 167 */;
	struct platform_device *cocci_id/* drivers/soc/imx/soc-imx-scu.c 166 */;
	int __init cocci_id/* drivers/soc/imx/soc-imx-scu.c 164 */;
	struct platform_driver cocci_id/* drivers/soc/imx/soc-imx-scu.c 157 */;
	struct imx_sc_ipc *cocci_id/* drivers/soc/imx/soc-imx-scu.c 15 */;
}
