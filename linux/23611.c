cocci_test_suite() {
	enum rsnd_reg cocci_id/* sound/soc/sh/rcar/gen.c 62 */;
	const struct rsnd_regmap_field_conf cocci_id/* sound/soc/sh/rcar/gen.c 423 */[];
	struct rsnd_regmap_field_conf {
		int idx;
		unsigned int reg_offset;
		unsigned int id_offset;
		const char *reg_name;
	} cocci_id/* sound/soc/sh/rcar/gen.c 36 */;
	struct rsnd_gen {
		struct rsnd_gen_ops *ops;
		void __iomem *base[RSND_BASE_MAX];
		phys_addr_t res[RSND_BASE_MAX];
		struct regmap *regmap[RSND_BASE_MAX];
		struct regmap_field *regs[REG_MAX];
		const char *reg_name[REG_MAX];
	} cocci_id/* sound/soc/sh/rcar/gen.c 20 */;
	void __iomem *cocci_id/* sound/soc/sh/rcar/gen.c 161 */;
	struct reg_field cocci_id/* sound/soc/sh/rcar/gen.c 160 */;
	struct regmap *cocci_id/* sound/soc/sh/rcar/gen.c 159 */;
	struct regmap_field *cocci_id/* sound/soc/sh/rcar/gen.c 158 */;
	struct regmap_config cocci_id/* sound/soc/sh/rcar/gen.c 157 */;
	struct resource *cocci_id/* sound/soc/sh/rcar/gen.c 156 */;
	struct device *cocci_id/* sound/soc/sh/rcar/gen.c 155 */;
	struct rsnd_gen *cocci_id/* sound/soc/sh/rcar/gen.c 154 */;
	struct platform_device *cocci_id/* sound/soc/sh/rcar/gen.c 153 */;
	const struct rsnd_regmap_field_conf *cocci_id/* sound/soc/sh/rcar/gen.c 150 */;
	const char *cocci_id/* sound/soc/sh/rcar/gen.c 149 */;
	struct rsnd_priv *cocci_id/* sound/soc/sh/rcar/gen.c 146 */;
	int cocci_id/* sound/soc/sh/rcar/gen.c 146 */;
	phys_addr_t cocci_id/* sound/soc/sh/rcar/gen.c 137 */;
	u32 cocci_id/* sound/soc/sh/rcar/gen.c 119 */;
	struct rsnd_mod *cocci_id/* sound/soc/sh/rcar/gen.c 118 */;
	void cocci_id/* sound/soc/sh/rcar/gen.c 118 */;
}
