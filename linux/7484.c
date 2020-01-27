cocci_test_suite() {
	struct _OVRL_SRC_DEST {
		u32 ulDstX1;
		u32 ulDstY1;
		u32 ulDstX2;
		u32 ulDstY2;
		u32 ulSrcX1;
		u32 ulSrcY1;
		u32 ulSrcX2;
		u32 ulSrcY2;
		s32 lDstX1;
		s32 lDstY1;
		s32 lDstX2;
		s32 lDstY2;
	} cocci_id/* drivers/video/fbdev/kyro/STG4000OverlayDevice.c 56 */;
	u32 cocci_id/* drivers/video/fbdev/kyro/STG4000OverlayDevice.c 46 */[33];
	OVRL_SRC_DEST cocci_id/* drivers/video/fbdev/kyro/STG4000OverlayDevice.c 321 */;
	void cocci_id/* drivers/video/fbdev/kyro/STG4000OverlayDevice.c 288 */;
	OVRL_BLEND_MODE cocci_id/* drivers/video/fbdev/kyro/STG4000OverlayDevice.c 243 */;
	u32 *cocci_id/* drivers/video/fbdev/kyro/STG4000OverlayDevice.c 145 */;
	u32 cocci_id/* drivers/video/fbdev/kyro/STG4000OverlayDevice.c 141 */;
	volatile STG4000REG __iomem *cocci_id/* drivers/video/fbdev/kyro/STG4000OverlayDevice.c 140 */;
	int cocci_id/* drivers/video/fbdev/kyro/STG4000OverlayDevice.c 140 */;
}
