cocci_test_suite() {
	struct clk_hw *cocci_id/* drivers/clk/sirf/clk-prima2.c 67 */[maxclk];
	enum prima2_clk_index{rtc, osc, pll1, pll2, pll3, mem, sys, security, dsp, gps, mf, io, cpu, uart0, uart1, uart2, tsc, i2c0, i2c1, spi0, spi1, pwmc, efuse, pulse, dmac0, dmac1, nand, audio, usp0, usp1, usp2, vip, gfx, mm, lcd, vpp, mmc01, mmc23, mmc45, usbpll, usb0, usb1, cphif, maxclk,} cocci_id/* drivers/clk/sirf/clk-prima2.c 58 */;
	struct clk_std cocci_id/* drivers/clk/sirf/clk-prima2.c 51 */;
	const struct clk_init_data cocci_id/* drivers/clk/sirf/clk-prima2.c 44 */;
	struct clk_dmn cocci_id/* drivers/clk/sirf/clk-prima2.c 20 */;
	int cocci_id/* drivers/clk/sirf/clk-prima2.c 118 */;
	struct device_node *cocci_id/* drivers/clk/sirf/clk-prima2.c 115 */;
	void __init cocci_id/* drivers/clk/sirf/clk-prima2.c 115 */;
	struct clk *cocci_id/* drivers/clk/sirf/clk-prima2.c 113 */[maxclk];
}
