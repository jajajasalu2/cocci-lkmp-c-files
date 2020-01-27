cocci_test_suite() {
	const struct msm_function cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 953 */[];
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 86 */[];
	const char *const cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 847 */[];
	enum msm8994_functions{MSM_MUX_audio_ref_clk, MSM_MUX_blsp_i2c1, MSM_MUX_blsp_i2c2, MSM_MUX_blsp_i2c3, MSM_MUX_blsp_i2c4, MSM_MUX_blsp_i2c5, MSM_MUX_blsp_i2c6, MSM_MUX_blsp_i2c7, MSM_MUX_blsp_i2c8, MSM_MUX_blsp_i2c9, MSM_MUX_blsp_i2c10, MSM_MUX_blsp_i2c11, MSM_MUX_blsp_i2c12, MSM_MUX_blsp_spi1, MSM_MUX_blsp_spi1_cs1, MSM_MUX_blsp_spi1_cs2, MSM_MUX_blsp_spi1_cs3, MSM_MUX_blsp_spi2, MSM_MUX_blsp_spi2_cs1, MSM_MUX_blsp_spi2_cs2, MSM_MUX_blsp_spi2_cs3, MSM_MUX_blsp_spi3, MSM_MUX_blsp_spi4, MSM_MUX_blsp_spi5, MSM_MUX_blsp_spi6, MSM_MUX_blsp_spi7, MSM_MUX_blsp_spi8, MSM_MUX_blsp_spi9, MSM_MUX_blsp_spi10, MSM_MUX_blsp_spi10_cs1, MSM_MUX_blsp_spi10_cs2, MSM_MUX_blsp_spi10_cs3, MSM_MUX_blsp_spi11, MSM_MUX_blsp_spi12, MSM_MUX_blsp_uart1, MSM_MUX_blsp_uart2, MSM_MUX_blsp_uart3, MSM_MUX_blsp_uart4, MSM_MUX_blsp_uart5, MSM_MUX_blsp_uart6, MSM_MUX_blsp_uart7, MSM_MUX_blsp_uart8, MSM_MUX_blsp_uart9, MSM_MUX_blsp_uart10, MSM_MUX_blsp_uart11, MSM_MUX_blsp_uart12, MSM_MUX_blsp_uim1, MSM_MUX_blsp_uim2, MSM_MUX_blsp_uim3, MSM_MUX_blsp_uim4, MSM_MUX_blsp_uim5, MSM_MUX_blsp_uim6, MSM_MUX_blsp_uim7, MSM_MUX_blsp_uim8, MSM_MUX_blsp_uim9, MSM_MUX_blsp_uim10, MSM_MUX_blsp_uim11, MSM_MUX_blsp_uim12, MSM_MUX_blsp11_i2c_scl_b, MSM_MUX_blsp11_i2c_sda_b, MSM_MUX_blsp11_uart_rx_b, MSM_MUX_blsp11_uart_tx_b, MSM_MUX_cam_mclk0, MSM_MUX_cam_mclk1, MSM_MUX_cam_mclk2, MSM_MUX_cam_mclk3, MSM_MUX_cci_async_in0, MSM_MUX_cci_async_in1, MSM_MUX_cci_async_in2, MSM_MUX_cci_i2c0, MSM_MUX_cci_i2c1, MSM_MUX_cci_timer0, MSM_MUX_cci_timer1, MSM_MUX_cci_timer2, MSM_MUX_cci_timer3, MSM_MUX_cci_timer4, MSM_MUX_gcc_gp1_clk_a, MSM_MUX_gcc_gp1_clk_b, MSM_MUX_gcc_gp2_clk_a, MSM_MUX_gcc_gp2_clk_b, MSM_MUX_gcc_gp3_clk_a, MSM_MUX_gcc_gp3_clk_b, MSM_MUX_gp_mn, MSM_MUX_gp_pdm0, MSM_MUX_gp_pdm1, MSM_MUX_gp_pdm2, MSM_MUX_gp0_clk, MSM_MUX_gp1_clk, MSM_MUX_gps_tx, MSM_MUX_gsm_tx, MSM_MUX_hdmi_cec, MSM_MUX_hdmi_ddc, MSM_MUX_hdmi_hpd, MSM_MUX_hdmi_rcv, MSM_MUX_mdp_vsync, MSM_MUX_mss_lte, MSM_MUX_nav_pps, MSM_MUX_nav_tsync, MSM_MUX_qdss_cti_trig_in_a, MSM_MUX_qdss_cti_trig_in_b, MSM_MUX_qdss_cti_trig_in_c, MSM_MUX_qdss_cti_trig_in_d, MSM_MUX_qdss_cti_trig_out_a, MSM_MUX_qdss_cti_trig_out_b, MSM_MUX_qdss_cti_trig_out_c, MSM_MUX_qdss_cti_trig_out_d, MSM_MUX_qdss_traceclk_a, MSM_MUX_qdss_traceclk_b, MSM_MUX_qdss_tracectl_a, MSM_MUX_qdss_tracectl_b, MSM_MUX_qdss_tracedata_a, MSM_MUX_qdss_tracedata_b, MSM_MUX_qua_mi2s, MSM_MUX_pci_e0, MSM_MUX_pci_e1, MSM_MUX_pri_mi2s, MSM_MUX_sdc4, MSM_MUX_sec_mi2s, MSM_MUX_slimbus, MSM_MUX_spkr_i2s, MSM_MUX_ter_mi2s, MSM_MUX_tsif1, MSM_MUX_tsif2, MSM_MUX_uim1, MSM_MUX_uim2, MSM_MUX_uim3, MSM_MUX_uim4, MSM_MUX_uim_batt_alarm, MSM_MUX_gpio, MSM_MUX_NA,} cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 405 */;
	const unsigned int cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 395 */[];
	int cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 25 */[];
	void __exit cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 1363 */;
	void cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 1363 */;
	int __init cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 1357 */;
	struct platform_driver cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 1348 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 1342 */[];
	struct platform_device *cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 1337 */;
	int cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 1337 */;
	const struct msm_pinctrl_soc_data cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 1327 */;
	const struct msm_pingroup cocci_id/* drivers/pinctrl/qcom/pinctrl-msm8994.c 1085 */[];
}
