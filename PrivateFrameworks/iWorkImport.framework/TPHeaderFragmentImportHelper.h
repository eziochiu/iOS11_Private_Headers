/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPHeaderFragmentImportHelper : NSObject {
    id * _fragments;
    NSCharacterSet * _nonWhitespaceCharacterSet;
    TSPObjectContext * _objectsContext;
    TSPObjectContext * _storageContext;
    NSCharacterSet * _whitespaceCharacterSet;
}

- (void).cxx_destruct;
- (unsigned long long)countOfWhitespaceRunsInString:(id)arg1 ranges:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithFragments:(id*)arg1 storageContext:(id)arg2 objectsContext:(id)arg3;
- (void)p_splitStorageInThree:(int)arg1 withRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)p_splitStorageInTwo:(int)arg1 withRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 firstTarget:(int)arg3 secondTarget:(int)arg4;
- (bool)p_storageIsEffectivelyEmpty:(id)arg1;
- (void)processFragmentsForSpaceFormatting;

@end
