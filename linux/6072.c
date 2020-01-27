cocci_test_suite() {
	int __init cocci_id/* drivers/pinctrl/freescale/pinctrl-imx6sl.c 386 */;
	void cocci_id/* drivers/pinctrl/freescale/pinctrl-imx6sl.c 386 */;
	struct platform_driver cocci_id/* drivers/pinctrl/freescale/pinctrl-imx6sl.c 378 */;
	struct platform_device *cocci_id/* drivers/pinctrl/freescale/pinctrl-imx6sl.c 373 */;
	int cocci_id/* drivers/pinctrl/freescale/pinctrl-imx6sl.c 373 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/freescale/pinctrl-imx6sl.c 368 */[];
	const struct imx_pinctrl_soc_info cocci_id/* drivers/pinctrl/freescale/pinctrl-imx6sl.c 362 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/freescale/pinctrl-imx6sl.c 190 */[];
	enum imx6sl_pads{MX6SL_PAD_RESERVE0=0, MX6SL_PAD_RESERVE1=1, MX6SL_PAD_RESERVE2=2, MX6SL_PAD_RESERVE3=3, MX6SL_PAD_RESERVE4=4, MX6SL_PAD_RESERVE5=5, MX6SL_PAD_RESERVE6=6, MX6SL_PAD_RESERVE7=7, MX6SL_PAD_RESERVE8=8, MX6SL_PAD_RESERVE9=9, MX6SL_PAD_RESERVE10=10, MX6SL_PAD_RESERVE11=11, MX6SL_PAD_RESERVE12=12, MX6SL_PAD_RESERVE13=13, MX6SL_PAD_RESERVE14=14, MX6SL_PAD_RESERVE15=15, MX6SL_PAD_RESERVE16=16, MX6SL_PAD_RESERVE17=17, MX6SL_PAD_RESERVE18=18, MX6SL_PAD_AUD_MCLK=19, MX6SL_PAD_AUD_RXC=20, MX6SL_PAD_AUD_RXD=21, MX6SL_PAD_AUD_RXFS=22, MX6SL_PAD_AUD_TXC=23, MX6SL_PAD_AUD_TXD=24, MX6SL_PAD_AUD_TXFS=25, MX6SL_PAD_ECSPI1_MISO=26, MX6SL_PAD_ECSPI1_MOSI=27, MX6SL_PAD_ECSPI1_SCLK=28, MX6SL_PAD_ECSPI1_SS0=29, MX6SL_PAD_ECSPI2_MISO=30, MX6SL_PAD_ECSPI2_MOSI=31, MX6SL_PAD_ECSPI2_SCLK=32, MX6SL_PAD_ECSPI2_SS0=33, MX6SL_PAD_EPDC_BDR0=34, MX6SL_PAD_EPDC_BDR1=35, MX6SL_PAD_EPDC_D0=36, MX6SL_PAD_EPDC_D1=37, MX6SL_PAD_EPDC_D10=38, MX6SL_PAD_EPDC_D11=39, MX6SL_PAD_EPDC_D12=40, MX6SL_PAD_EPDC_D13=41, MX6SL_PAD_EPDC_D14=42, MX6SL_PAD_EPDC_D15=43, MX6SL_PAD_EPDC_D2=44, MX6SL_PAD_EPDC_D3=45, MX6SL_PAD_EPDC_D4=46, MX6SL_PAD_EPDC_D5=47, MX6SL_PAD_EPDC_D6=48, MX6SL_PAD_EPDC_D7=49, MX6SL_PAD_EPDC_D8=50, MX6SL_PAD_EPDC_D9=51, MX6SL_PAD_EPDC_GDCLK=52, MX6SL_PAD_EPDC_GDOE=53, MX6SL_PAD_EPDC_GDRL=54, MX6SL_PAD_EPDC_GDSP=55, MX6SL_PAD_EPDC_PWRCOM=56, MX6SL_PAD_EPDC_PWRCTRL0=57, MX6SL_PAD_EPDC_PWRCTRL1=58, MX6SL_PAD_EPDC_PWRCTRL2=59, MX6SL_PAD_EPDC_PWRCTRL3=60, MX6SL_PAD_EPDC_PWRINT=61, MX6SL_PAD_EPDC_PWRSTAT=62, MX6SL_PAD_EPDC_PWRWAKEUP=63, MX6SL_PAD_EPDC_SDCE0=64, MX6SL_PAD_EPDC_SDCE1=65, MX6SL_PAD_EPDC_SDCE2=66, MX6SL_PAD_EPDC_SDCE3=67, MX6SL_PAD_EPDC_SDCLK=68, MX6SL_PAD_EPDC_SDLE=69, MX6SL_PAD_EPDC_SDOE=70, MX6SL_PAD_EPDC_SDSHR=71, MX6SL_PAD_EPDC_VCOM0=72, MX6SL_PAD_EPDC_VCOM1=73, MX6SL_PAD_FEC_CRS_DV=74, MX6SL_PAD_FEC_MDC=75, MX6SL_PAD_FEC_MDIO=76, MX6SL_PAD_FEC_REF_CLK=77, MX6SL_PAD_FEC_RX_ER=78, MX6SL_PAD_FEC_RXD0=79, MX6SL_PAD_FEC_RXD1=80, MX6SL_PAD_FEC_TX_CLK=81, MX6SL_PAD_FEC_TX_EN=82, MX6SL_PAD_FEC_TXD0=83, MX6SL_PAD_FEC_TXD1=84, MX6SL_PAD_HSIC_DAT=85, MX6SL_PAD_HSIC_STROBE=86, MX6SL_PAD_I2C1_SCL=87, MX6SL_PAD_I2C1_SDA=88, MX6SL_PAD_I2C2_SCL=89, MX6SL_PAD_I2C2_SDA=90, MX6SL_PAD_KEY_COL0=91, MX6SL_PAD_KEY_COL1=92, MX6SL_PAD_KEY_COL2=93, MX6SL_PAD_KEY_COL3=94, MX6SL_PAD_KEY_COL4=95, MX6SL_PAD_KEY_COL5=96, MX6SL_PAD_KEY_COL6=97, MX6SL_PAD_KEY_COL7=98, MX6SL_PAD_KEY_ROW0=99, MX6SL_PAD_KEY_ROW1=100, MX6SL_PAD_KEY_ROW2=101, MX6SL_PAD_KEY_ROW3=102, MX6SL_PAD_KEY_ROW4=103, MX6SL_PAD_KEY_ROW5=104, MX6SL_PAD_KEY_ROW6=105, MX6SL_PAD_KEY_ROW7=106, MX6SL_PAD_LCD_CLK=107, MX6SL_PAD_LCD_DAT0=108, MX6SL_PAD_LCD_DAT1=109, MX6SL_PAD_LCD_DAT10=110, MX6SL_PAD_LCD_DAT11=111, MX6SL_PAD_LCD_DAT12=112, MX6SL_PAD_LCD_DAT13=113, MX6SL_PAD_LCD_DAT14=114, MX6SL_PAD_LCD_DAT15=115, MX6SL_PAD_LCD_DAT16=116, MX6SL_PAD_LCD_DAT17=117, MX6SL_PAD_LCD_DAT18=118, MX6SL_PAD_LCD_DAT19=119, MX6SL_PAD_LCD_DAT2=120, MX6SL_PAD_LCD_DAT20=121, MX6SL_PAD_LCD_DAT21=122, MX6SL_PAD_LCD_DAT22=123, MX6SL_PAD_LCD_DAT23=124, MX6SL_PAD_LCD_DAT3=125, MX6SL_PAD_LCD_DAT4=126, MX6SL_PAD_LCD_DAT5=127, MX6SL_PAD_LCD_DAT6=128, MX6SL_PAD_LCD_DAT7=129, MX6SL_PAD_LCD_DAT8=130, MX6SL_PAD_LCD_DAT9=131, MX6SL_PAD_LCD_ENABLE=132, MX6SL_PAD_LCD_HSYNC=133, MX6SL_PAD_LCD_RESET=134, MX6SL_PAD_LCD_VSYNC=135, MX6SL_PAD_PWM1=136, MX6SL_PAD_REF_CLK_24M=137, MX6SL_PAD_REF_CLK_32K=138, MX6SL_PAD_SD1_CLK=139, MX6SL_PAD_SD1_CMD=140, MX6SL_PAD_SD1_DAT0=141, MX6SL_PAD_SD1_DAT1=142, MX6SL_PAD_SD1_DAT2=143, MX6SL_PAD_SD1_DAT3=144, MX6SL_PAD_SD1_DAT4=145, MX6SL_PAD_SD1_DAT5=146, MX6SL_PAD_SD1_DAT6=147, MX6SL_PAD_SD1_DAT7=148, MX6SL_PAD_SD2_CLK=149, MX6SL_PAD_SD2_CMD=150, MX6SL_PAD_SD2_DAT0=151, MX6SL_PAD_SD2_DAT1=152, MX6SL_PAD_SD2_DAT2=153, MX6SL_PAD_SD2_DAT3=154, MX6SL_PAD_SD2_DAT4=155, MX6SL_PAD_SD2_DAT5=156, MX6SL_PAD_SD2_DAT6=157, MX6SL_PAD_SD2_DAT7=158, MX6SL_PAD_SD2_RST=159, MX6SL_PAD_SD3_CLK=160, MX6SL_PAD_SD3_CMD=161, MX6SL_PAD_SD3_DAT0=162, MX6SL_PAD_SD3_DAT1=163, MX6SL_PAD_SD3_DAT2=164, MX6SL_PAD_SD3_DAT3=165, MX6SL_PAD_UART1_RXD=166, MX6SL_PAD_UART1_TXD=167, MX6SL_PAD_WDOG_B=168,} cocci_id/* drivers/pinctrl/freescale/pinctrl-imx6sl.c 17 */;
}