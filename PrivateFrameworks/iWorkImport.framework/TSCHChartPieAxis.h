/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartPieAxis : TSCHChartStackedPercentValueAxis

- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1;
- (id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2;
- (bool)supportsAxisValueLabels;
- (bool)supportsFormattedStringForInvalidValue;
- (bool)usesPercentNumberFormatPropertyForSeriesDataFormatting;

@end
