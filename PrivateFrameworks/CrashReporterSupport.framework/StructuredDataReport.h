/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
 */

@interface StructuredDataReport : AppleErrorReport {
    int  _log_type;
    NSString * _raw_logfile;
}

- (id)appleCareDetails;
- (void)dealloc;
- (void)generateCustomLogAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;
- (void)generateLogAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)initWithType:(int)arg1 withFile:(id)arg2;
- (bool)isActionable;
- (id)overrideFileExtension;
- (id)problemType;
- (id)reportNamePrefix;
- (int)streamContentAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;

@end
