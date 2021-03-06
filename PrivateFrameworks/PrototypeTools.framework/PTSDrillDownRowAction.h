/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSDrillDownRowAction : PTSPushViewControllerRowAction {
    NSString * _settingsKeyPath;
}

@property (nonatomic, copy) NSString *settingsKeyPath;

+ (id)actionWithSettingsKeyPath:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)resolveTemplatesWithIndex:(unsigned long long)arg1;
- (void)setSettingsKeyPath:(id)arg1;
- (id)settingsKeyPath;

@end
