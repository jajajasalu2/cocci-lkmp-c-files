cocci_test_suite() {
	const struct da8xx_mstpri_descr cocci_id/* drivers/bus/da8xx-mstpri.c 59 */[];
	struct da8xx_mstpri_descr {
		int reg;
		int shift;
		int mask;
	} cocci_id/* drivers/bus/da8xx-mstpri.c 53 */;
	enum{DA8XX_MSTPRI_ARM_I=0, DA8XX_MSTPRI_ARM_D, DA8XX_MSTPRI_UPP, DA8XX_MSTPRI_SATA, DA8XX_MSTPRI_PRU0, DA8XX_MSTPRI_PRU1, DA8XX_MSTPRI_EDMA30TC0, DA8XX_MSTPRI_EDMA30TC1, DA8XX_MSTPRI_EDMA31TC0, DA8XX_MSTPRI_VPIF_DMA_0, DA8XX_MSTPRI_VPIF_DMA_1, DA8XX_MSTPRI_EMAC, DA8XX_MSTPRI_USB0CFG, DA8XX_MSTPRI_USB0CDMA, DA8XX_MSTPRI_UHPI, DA8XX_MSTPRI_USB1, DA8XX_MSTPRI_LCDC,} cocci_id/* drivers/bus/da8xx-mstpri.c 33 */;
	struct platform_driver cocci_id/* drivers/bus/da8xx-mstpri.c 253 */;
	const struct of_device_id cocci_id/* drivers/bus/da8xx-mstpri.c 248 */[];
	u32 cocci_id/* drivers/bus/da8xx-mstpri.c 213 */;
	void __iomem *cocci_id/* drivers/bus/da8xx-mstpri.c 212 */;
	struct resource *cocci_id/* drivers/bus/da8xx-mstpri.c 211 */;
	struct device *cocci_id/* drivers/bus/da8xx-mstpri.c 210 */;
	const struct da8xx_mstpri_priority *cocci_id/* drivers/bus/da8xx-mstpri.c 209 */;
	const struct da8xx_mstpri_descr *cocci_id/* drivers/bus/da8xx-mstpri.c 208 */;
	struct platform_device *cocci_id/* drivers/bus/da8xx-mstpri.c 205 */;
	int cocci_id/* drivers/bus/da8xx-mstpri.c 193 */;
	void cocci_id/* drivers/bus/da8xx-mstpri.c 190 */;
	const struct da8xx_mstpri_board_priorities *cocci_id/* drivers/bus/da8xx-mstpri.c 189 */;
	const struct da8xx_mstpri_board_priorities cocci_id/* drivers/bus/da8xx-mstpri.c 181 */[];
	const struct da8xx_mstpri_priority cocci_id/* drivers/bus/da8xx-mstpri.c 166 */[];
	struct da8xx_mstpri_board_priorities {
		const char *board;
		const struct da8xx_mstpri_priority *priorities;
		size_t numprio;
	} cocci_id/* drivers/bus/da8xx-mstpri.c 152 */;
	struct da8xx_mstpri_priority {
		int which;
		u32 val;
	} cocci_id/* drivers/bus/da8xx-mstpri.c 147 */;
}
