cocci_test_suite() {
	struct usb_phy *cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 79 */;
	enum u2d_ulpi_phy_mode cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 58 */;
	enum u2d_ulpi_phy_mode{SYNCH=0, CARKIT=(1 << 0), SER_3PIN=(1 << 1), SER_6PIN=(1 << 2), LOWPOWER=(1 << 3),} cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 50 */;
	struct platform_driver cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 374 */;
	struct pxa3xx_u2d_ulpi *cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 37 */;
	struct pxa3xx_u2d_ulpi {
		struct clk *clk;
		void __iomem *mmio_base;
		struct usb_phy *otg;
		unsigned int ulpi_mode;
	} cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 29 */;
	struct resource *cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 283 */;
	struct platform_device *cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 280 */;
	void cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 230 */;
	unsigned int cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 210 */;
	struct pxa3xx_u2d_platform_data *cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 208 */;
	int cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 208 */;
	struct usb_bus *cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 158 */;
	u32 cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 118 */;
	struct usb_phy_io_ops cocci_id/* arch/arm/mach-pxa/pxa3xx-ulpi.c 111 */;
}
