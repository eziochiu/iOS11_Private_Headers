/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILanguageModelOfflineLearningTaskMessages : TILanguageModelOfflineLearningTask {
    <TILinguisticDataSource> * _dataSource;
}

+ (id)dataSourceForTask;

- (id)dataSource;
- (void)dealloc;
- (id)initWithClientIdentifier:(id)arg1 oneTimeTask:(bool)arg2;

@end