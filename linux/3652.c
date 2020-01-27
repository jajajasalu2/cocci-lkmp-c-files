cocci_test_suite() {
	const struct imx_sc_pd_range cocci_id/* drivers/firmware/imx/scu-pd.c 88 */[];
	struct imx_sc_pd_soc {
		const struct imx_sc_pd_range *pd_ranges;
		u8 num_ranges;
	} cocci_id/* drivers/firmware/imx/scu-pd.c 83 */;
	struct imx_sc_pd_range {
		char *name;
		u32 rsrc;
		u8 num;
		bool postfix;
		u8 start_from;
	} cocci_id/* drivers/firmware/imx/scu-pd.c 73 */;
	struct imx_sc_pm_domain {
		struct generic_pm_domain pd;
		char name[IMX_SCU_PD_NAME_SIZE];
		u32 rsrc;
	} cocci_id/* drivers/firmware/imx/scu-pd.c 67 */;
	struct imx_sc_msg_req_set_resource_power_mode {
		struct imx_sc_rpc_msg hdr;
		u16 resource;
		u8 mode;
	}__packed cocci_id/* drivers/firmware/imx/scu-pd.c 60 */;
	struct platform_driver cocci_id/* drivers/firmware/imx/scu-pd.c 338 */;
	const struct of_device_id cocci_id/* drivers/firmware/imx/scu-pd.c 332 */[];
	const struct imx_sc_pd_soc *cocci_id/* drivers/firmware/imx/scu-pd.c 318 */;
	struct platform_device *cocci_id/* drivers/firmware/imx/scu-pd.c 316 */;
	u32 cocci_id/* drivers/firmware/imx/scu-pd.c 281 */;
	struct genpd_onecell_data *cocci_id/* drivers/firmware/imx/scu-pd.c 279 */;
	struct generic_pm_domain **cocci_id/* drivers/firmware/imx/scu-pd.c 278 */;
	const struct imx_sc_pd_range *cocci_id/* drivers/firmware/imx/scu-pd.c 233 */;
	struct device *cocci_id/* drivers/firmware/imx/scu-pd.c 232 */;
	unsigned int cocci_id/* drivers/firmware/imx/scu-pd.c 216 */;
	void *cocci_id/* drivers/firmware/imx/scu-pd.c 212 */;
	struct of_phandle_args *cocci_id/* drivers/firmware/imx/scu-pd.c 211 */;
	struct imx_sc_pm_domain *cocci_id/* drivers/firmware/imx/scu-pd.c 180 */;
	struct imx_sc_rpc_msg *cocci_id/* drivers/firmware/imx/scu-pd.c 179 */;
	struct imx_sc_msg_req_set_resource_power_mode cocci_id/* drivers/firmware/imx/scu-pd.c 178 */;
	bool cocci_id/* drivers/firmware/imx/scu-pd.c 176 */;
	struct generic_pm_domain *cocci_id/* drivers/firmware/imx/scu-pd.c 176 */;
	int cocci_id/* drivers/firmware/imx/scu-pd.c 176 */;
	struct imx_sc_pm_domain cocci_id/* drivers/firmware/imx/scu-pd.c 173 */;
	struct imx_sc_ipc *cocci_id/* drivers/firmware/imx/scu-pd.c 168 */;
	const struct imx_sc_pd_soc cocci_id/* drivers/firmware/imx/scu-pd.c 163 */;
}
