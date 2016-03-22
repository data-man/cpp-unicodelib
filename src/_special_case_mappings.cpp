const std::unordered_multimap<char32_t, SpecialCasing> _special_case_mappings = {
{ 0x000000DF, { U"\U000000DF", U"\U00000053\U00000073", U"\U00000053\U00000053", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00000130, { U"\U00000069\U00000307", U"\U00000130", U"\U00000130", nullptr, SpecialCasingContext::Unassigned } },
{ 0x0000FB00, { U"\U0000FB00", U"\U00000046\U00000066", U"\U00000046\U00000046", nullptr, SpecialCasingContext::Unassigned } },
{ 0x0000FB01, { U"\U0000FB01", U"\U00000046\U00000069", U"\U00000046\U00000049", nullptr, SpecialCasingContext::Unassigned } },
{ 0x0000FB02, { U"\U0000FB02", U"\U00000046\U0000006C", U"\U00000046\U0000004C", nullptr, SpecialCasingContext::Unassigned } },
{ 0x0000FB03, { U"\U0000FB03", U"\U00000046\U00000066\U00000069", U"\U00000046\U00000046\U00000049", nullptr, SpecialCasingContext::Unassigned } },
{ 0x0000FB04, { U"\U0000FB04", U"\U00000046\U00000066\U0000006C", U"\U00000046\U00000046\U0000004C", nullptr, SpecialCasingContext::Unassigned } },
{ 0x0000FB05, { U"\U0000FB05", U"\U00000053\U00000074", U"\U00000053\U00000054", nullptr, SpecialCasingContext::Unassigned } },
{ 0x0000FB06, { U"\U0000FB06", U"\U00000053\U00000074", U"\U00000053\U00000054", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00000587, { U"\U00000587", U"\U00000535\U00000582", U"\U00000535\U00000552", nullptr, SpecialCasingContext::Unassigned } },
{ 0x0000FB13, { U"\U0000FB13", U"\U00000544\U00000576", U"\U00000544\U00000546", nullptr, SpecialCasingContext::Unassigned } },
{ 0x0000FB14, { U"\U0000FB14", U"\U00000544\U00000565", U"\U00000544\U00000535", nullptr, SpecialCasingContext::Unassigned } },
{ 0x0000FB15, { U"\U0000FB15", U"\U00000544\U0000056B", U"\U00000544\U0000053B", nullptr, SpecialCasingContext::Unassigned } },
{ 0x0000FB16, { U"\U0000FB16", U"\U0000054E\U00000576", U"\U0000054E\U00000546", nullptr, SpecialCasingContext::Unassigned } },
{ 0x0000FB17, { U"\U0000FB17", U"\U00000544\U0000056D", U"\U00000544\U0000053D", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00000149, { U"\U00000149", U"\U000002BC\U0000004E", U"\U000002BC\U0000004E", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00000390, { U"\U00000390", U"\U00000399\U00000308\U00000301", U"\U00000399\U00000308\U00000301", nullptr, SpecialCasingContext::Unassigned } },
{ 0x000003B0, { U"\U000003B0", U"\U000003A5\U00000308\U00000301", U"\U000003A5\U00000308\U00000301", nullptr, SpecialCasingContext::Unassigned } },
{ 0x000001F0, { U"\U000001F0", U"\U0000004A\U0000030C", U"\U0000004A\U0000030C", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001E96, { U"\U00001E96", U"\U00000048\U00000331", U"\U00000048\U00000331", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001E97, { U"\U00001E97", U"\U00000054\U00000308", U"\U00000054\U00000308", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001E98, { U"\U00001E98", U"\U00000057\U0000030A", U"\U00000057\U0000030A", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001E99, { U"\U00001E99", U"\U00000059\U0000030A", U"\U00000059\U0000030A", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001E9A, { U"\U00001E9A", U"\U00000041\U000002BE", U"\U00000041\U000002BE", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F50, { U"\U00001F50", U"\U000003A5\U00000313", U"\U000003A5\U00000313", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F52, { U"\U00001F52", U"\U000003A5\U00000313\U00000300", U"\U000003A5\U00000313\U00000300", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F54, { U"\U00001F54", U"\U000003A5\U00000313\U00000301", U"\U000003A5\U00000313\U00000301", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F56, { U"\U00001F56", U"\U000003A5\U00000313\U00000342", U"\U000003A5\U00000313\U00000342", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FB6, { U"\U00001FB6", U"\U00000391\U00000342", U"\U00000391\U00000342", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FC6, { U"\U00001FC6", U"\U00000397\U00000342", U"\U00000397\U00000342", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FD2, { U"\U00001FD2", U"\U00000399\U00000308\U00000300", U"\U00000399\U00000308\U00000300", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FD3, { U"\U00001FD3", U"\U00000399\U00000308\U00000301", U"\U00000399\U00000308\U00000301", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FD6, { U"\U00001FD6", U"\U00000399\U00000342", U"\U00000399\U00000342", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FD7, { U"\U00001FD7", U"\U00000399\U00000308\U00000342", U"\U00000399\U00000308\U00000342", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FE2, { U"\U00001FE2", U"\U000003A5\U00000308\U00000300", U"\U000003A5\U00000308\U00000300", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FE3, { U"\U00001FE3", U"\U000003A5\U00000308\U00000301", U"\U000003A5\U00000308\U00000301", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FE4, { U"\U00001FE4", U"\U000003A1\U00000313", U"\U000003A1\U00000313", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FE6, { U"\U00001FE6", U"\U000003A5\U00000342", U"\U000003A5\U00000342", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FE7, { U"\U00001FE7", U"\U000003A5\U00000308\U00000342", U"\U000003A5\U00000308\U00000342", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FF6, { U"\U00001FF6", U"\U000003A9\U00000342", U"\U000003A9\U00000342", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F80, { U"\U00001F80", U"\U00001F88", U"\U00001F08\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F81, { U"\U00001F81", U"\U00001F89", U"\U00001F09\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F82, { U"\U00001F82", U"\U00001F8A", U"\U00001F0A\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F83, { U"\U00001F83", U"\U00001F8B", U"\U00001F0B\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F84, { U"\U00001F84", U"\U00001F8C", U"\U00001F0C\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F85, { U"\U00001F85", U"\U00001F8D", U"\U00001F0D\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F86, { U"\U00001F86", U"\U00001F8E", U"\U00001F0E\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F87, { U"\U00001F87", U"\U00001F8F", U"\U00001F0F\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F88, { U"\U00001F80", U"\U00001F88", U"\U00001F08\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F89, { U"\U00001F81", U"\U00001F89", U"\U00001F09\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F8A, { U"\U00001F82", U"\U00001F8A", U"\U00001F0A\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F8B, { U"\U00001F83", U"\U00001F8B", U"\U00001F0B\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F8C, { U"\U00001F84", U"\U00001F8C", U"\U00001F0C\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F8D, { U"\U00001F85", U"\U00001F8D", U"\U00001F0D\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F8E, { U"\U00001F86", U"\U00001F8E", U"\U00001F0E\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F8F, { U"\U00001F87", U"\U00001F8F", U"\U00001F0F\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F90, { U"\U00001F90", U"\U00001F98", U"\U00001F28\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F91, { U"\U00001F91", U"\U00001F99", U"\U00001F29\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F92, { U"\U00001F92", U"\U00001F9A", U"\U00001F2A\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F93, { U"\U00001F93", U"\U00001F9B", U"\U00001F2B\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F94, { U"\U00001F94", U"\U00001F9C", U"\U00001F2C\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F95, { U"\U00001F95", U"\U00001F9D", U"\U00001F2D\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F96, { U"\U00001F96", U"\U00001F9E", U"\U00001F2E\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F97, { U"\U00001F97", U"\U00001F9F", U"\U00001F2F\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F98, { U"\U00001F90", U"\U00001F98", U"\U00001F28\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F99, { U"\U00001F91", U"\U00001F99", U"\U00001F29\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F9A, { U"\U00001F92", U"\U00001F9A", U"\U00001F2A\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F9B, { U"\U00001F93", U"\U00001F9B", U"\U00001F2B\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F9C, { U"\U00001F94", U"\U00001F9C", U"\U00001F2C\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F9D, { U"\U00001F95", U"\U00001F9D", U"\U00001F2D\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F9E, { U"\U00001F96", U"\U00001F9E", U"\U00001F2E\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001F9F, { U"\U00001F97", U"\U00001F9F", U"\U00001F2F\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FA0, { U"\U00001FA0", U"\U00001FA8", U"\U00001F68\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FA1, { U"\U00001FA1", U"\U00001FA9", U"\U00001F69\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FA2, { U"\U00001FA2", U"\U00001FAA", U"\U00001F6A\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FA3, { U"\U00001FA3", U"\U00001FAB", U"\U00001F6B\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FA4, { U"\U00001FA4", U"\U00001FAC", U"\U00001F6C\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FA5, { U"\U00001FA5", U"\U00001FAD", U"\U00001F6D\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FA6, { U"\U00001FA6", U"\U00001FAE", U"\U00001F6E\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FA7, { U"\U00001FA7", U"\U00001FAF", U"\U00001F6F\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FA8, { U"\U00001FA0", U"\U00001FA8", U"\U00001F68\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FA9, { U"\U00001FA1", U"\U00001FA9", U"\U00001F69\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FAA, { U"\U00001FA2", U"\U00001FAA", U"\U00001F6A\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FAB, { U"\U00001FA3", U"\U00001FAB", U"\U00001F6B\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FAC, { U"\U00001FA4", U"\U00001FAC", U"\U00001F6C\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FAD, { U"\U00001FA5", U"\U00001FAD", U"\U00001F6D\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FAE, { U"\U00001FA6", U"\U00001FAE", U"\U00001F6E\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FAF, { U"\U00001FA7", U"\U00001FAF", U"\U00001F6F\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FB3, { U"\U00001FB3", U"\U00001FBC", U"\U00000391\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FBC, { U"\U00001FB3", U"\U00001FBC", U"\U00000391\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FC3, { U"\U00001FC3", U"\U00001FCC", U"\U00000397\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FCC, { U"\U00001FC3", U"\U00001FCC", U"\U00000397\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FF3, { U"\U00001FF3", U"\U00001FFC", U"\U000003A9\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FFC, { U"\U00001FF3", U"\U00001FFC", U"\U000003A9\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FB2, { U"\U00001FB2", U"\U00001FBA\U00000345", U"\U00001FBA\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FB4, { U"\U00001FB4", U"\U00000386\U00000345", U"\U00000386\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FC2, { U"\U00001FC2", U"\U00001FCA\U00000345", U"\U00001FCA\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FC4, { U"\U00001FC4", U"\U00000389\U00000345", U"\U00000389\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FF2, { U"\U00001FF2", U"\U00001FFA\U00000345", U"\U00001FFA\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FF4, { U"\U00001FF4", U"\U0000038F\U00000345", U"\U0000038F\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FB7, { U"\U00001FB7", U"\U00000391\U00000342\U00000345", U"\U00000391\U00000342\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FC7, { U"\U00001FC7", U"\U00000397\U00000342\U00000345", U"\U00000397\U00000342\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x00001FF7, { U"\U00001FF7", U"\U000003A9\U00000342\U00000345", U"\U000003A9\U00000342\U00000399", nullptr, SpecialCasingContext::Unassigned } },
{ 0x000003A3, { U"\U000003C2", U"\U000003A3", U"\U000003A3", nullptr, SpecialCasingContext::Final_Sigma } },
{ 0x00000307, { U"\U00000307", nullptr, nullptr, "lt", SpecialCasingContext::After_Soft_Dotted } },
{ 0x00000049, { U"\U00000069\U00000307", U"\U00000049", U"\U00000049", "lt", SpecialCasingContext::More_Above } },
{ 0x0000004A, { U"\U0000006A\U00000307", U"\U0000004A", U"\U0000004A", "lt", SpecialCasingContext::More_Above } },
{ 0x0000012E, { U"\U0000012F\U00000307", U"\U0000012E", U"\U0000012E", "lt", SpecialCasingContext::More_Above } },
{ 0x000000CC, { U"\U00000069\U00000307\U00000300", U"\U000000CC", U"\U000000CC", "lt", SpecialCasingContext::Unassigned } },
{ 0x000000CD, { U"\U00000069\U00000307\U00000301", U"\U000000CD", U"\U000000CD", "lt", SpecialCasingContext::Unassigned } },
{ 0x00000128, { U"\U00000069\U00000307\U00000303", U"\U00000128", U"\U00000128", "lt", SpecialCasingContext::Unassigned } },
{ 0x00000130, { U"\U00000069", U"\U00000130", U"\U00000130", "tr", SpecialCasingContext::Unassigned } },
{ 0x00000130, { U"\U00000069", U"\U00000130", U"\U00000130", "az", SpecialCasingContext::Unassigned } },
{ 0x00000307, { nullptr, U"\U00000307", U"\U00000307", "tr", SpecialCasingContext::After_I } },
{ 0x00000307, { nullptr, U"\U00000307", U"\U00000307", "az", SpecialCasingContext::After_I } },
{ 0x00000049, { U"\U00000131", U"\U00000049", U"\U00000049", "tr", SpecialCasingContext::Not_Before_Dot } },
{ 0x00000049, { U"\U00000131", U"\U00000049", U"\U00000049", "az", SpecialCasingContext::Not_Before_Dot } },
{ 0x00000069, { U"\U00000069", U"\U00000130", U"\U00000130", "tr", SpecialCasingContext::Unassigned } },
{ 0x00000069, { U"\U00000069", U"\U00000130", U"\U00000130", "az", SpecialCasingContext::Unassigned } },
};
