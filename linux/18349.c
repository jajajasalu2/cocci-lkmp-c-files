cocci_test_suite() {
	const struct imx5_pm_data cocci_id/* arch/arm/mach-imx/pm-imx5.c 99 */;
	const struct imx5_suspend_io_state cocci_id/* arch/arm/mach-imx/pm-imx5.c 72 */[];
	struct imx5_pm_data {
		phys_addr_t ccm_addr;
		phys_addr_t cortex_addr;
		phys_addr_t gpc_addr;
		phys_addr_t m4if_addr;
		phys_addr_t iomuxc_addr;
		void (*suspend_asm)(void __iomem *ocram_vbase);
		const u32 *suspend_asm_sz;
		const struct imx5_suspend_io_state *suspend_io_config;
		int suspend_io_count;
	} cocci_id/* arch/arm/mach-imx/pm-imx5.c 60 */;
	struct imx5_suspend_io_state {
		u32 offset;
		u32 clear;
		u32 set;
		u32 saved_value;
	} cocci_id/* arch/arm/mach-imx/pm-imx5.c 53 */;
	void __init cocci_id/* arch/arm/mach-imx/pm-imx5.c 408 */;
	void cocci_id/* arch/arm/mach-imx/pm-imx5.c 408 */;
	struct clk *cocci_id/* arch/arm/mach-imx/pm-imx5.c 375 */;
	const struct imx5_pm_data *cocci_id/* arch/arm/mach-imx/pm-imx5.c 372 */;
	int __init cocci_id/* arch/arm/mach-imx/pm-imx5.c 372 */;
	void (*cocci_id/* arch/arm/mach-imx/pm-imx5.c 326 */)(void __iomem *);
	struct imx5_cpu_suspend_info *cocci_id/* arch/arm/mach-imx/pm-imx5.c 323 */;
	phys_addr_t cocci_id/* arch/arm/mach-imx/pm-imx5.c 277 */;
	unsigned long cocci_id/* arch/arm/mach-imx/pm-imx5.c 275 */;
	struct gen_pool *cocci_id/* arch/arm/mach-imx/pm-imx5.c 274 */;
	struct platform_device *cocci_id/* arch/arm/mach-imx/pm-imx5.c 273 */;
	struct device_node *cocci_id/* arch/arm/mach-imx/pm-imx5.c 272 */;
	phys_addr_t *cocci_id/* arch/arm/mach-imx/pm-imx5.c 270 */;
	void __iomem **cocci_id/* arch/arm/mach-imx/pm-imx5.c 269 */;
	size_t cocci_id/* arch/arm/mach-imx/pm-imx5.c 268 */;
	int cocci_id/* arch/arm/mach-imx/pm-imx5.c 252 */;
	const struct platform_suspend_ops cocci_id/* arch/arm/mach-imx/pm-imx5.c 247 */;
	suspend_state_t cocci_id/* arch/arm/mach-imx/pm-imx5.c 242 */;
	u32 cocci_id/* arch/arm/mach-imx/pm-imx5.c 145 */;
	enum mxc_cpu_pwr_mode cocci_id/* arch/arm/mach-imx/pm-imx5.c 143 */;
	void (*cocci_id/* arch/arm/mach-imx/pm-imx5.c 137 */)(void __iomem *ocram_vbase);
	void __iomem *cocci_id/* arch/arm/mach-imx/pm-imx5.c 133 */;
	struct imx5_cpu_suspend_info {
		void __iomem *m4if_base;
		void __iomem *iomuxc_base;
		u32 io_count;
		struct imx5_suspend_io_state io_state[MX5_MAX_SUSPEND_IOSTATE];
	}__aligned(8) cocci_id/* arch/arm/mach-imx/pm-imx5.c 126 */;
}
